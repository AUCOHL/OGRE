
import glob
import subprocess
import sys, getopt 
import pandas as pd


def parse_results(result):
    start = result.find("wirelength")
    result = result[start:]
    if(start > 0):
        start = result.find("|")
        result = result[start+1:]
        end_indx = result.find("|")
        wirelength = float(result[:end_indx])
    else: 
        wirelength = None
    
    start = result.find("# vias")
    result = result[start:]
    if(start > 0):
        start = result.find("|")
        result = result[start+1:]
        end_indx = result.find("|")
        vias = float(result[:end_indx])
    else: 
        vias = None
    
    start = result.find("short")
    result = result[start:]
    if(start > 0):
        start = result.find("|")
        result = result[start+1:]
        end_indx = result.find("|")
        short = float(result[:end_indx])
    else: 
        short = None
    
    start = result.find("space")
    result = result[start:]
    if(start > 0):
        start = result.find("|")
        result = result[start+1:]
        end_indx = result.find("|")
        space = float(result[:end_indx])
    else: 
        space = None
        
    start = result.find("score")
    result = result[start:]
    if(start > 0):
        start = result.find("=")
        result = result[start+1:]
        end_indx = result.find("\n")
        score = float(result[:end_indx])
    else: 
        score = None
        
    return wirelength, vias, short, space, score

def runDR(d, i, filename, df):
    temp = "ispd" + str(d) +"_"
    temp = temp + "test" + str(i)
    lef = temp  + ".input" + ".lef"
    defFile = temp  + ".input" + ".def"
    guide = temp  + ".input" + ".guide"
    
    print("Running testcase: ", temp, " on DR")
    args = ["./drcu_june19", "-lef", lef, "-def", defFile, "-guide", guide, "-output", "bullshit.def","-tat","1000000","-threads", "26", "-multiNetVerbose", "MIDDLE"]
    
    log = "logsDR/" + temp +".log"
    f = open(log, "w+")
    subprocess.run(args, stdout=f, stderr = f)
    f.close()
    
    f = open(log, "r")
    contents = f.read()
    wirelength, vias, short, space, score = parse_results(contents)
    df = df.append({'testcase':temp,'wirelength': wirelength, "vias": vias, "short": short, "space":space, "score":score}, ignore_index=True) 
    print(df)
    df.to_excel(filename) 
    print("--------------- Done with DR ----------------")
    return df



def runGR(d,i):
    temp = "ispd" + str(d) +"_"
    temp = temp + "test" + str(i)
    print("Running testcase: ", temp, " on GR")
    lef = temp  + ".input" + ".lef"
    defFile = temp  + ".input" + ".def"
    guide = temp  + ".input" + ".guide"
    args = ["./global_router", "-lef", lef, "-def", defFile, "-output", guide, "-thread", "1"]
    log = "logsGR/" + temp +".log"
    f = open(log, "w+")
    subprocess.run(args, stdout = f, stderr = f)
    print("--------------- Done with GR ----------------")

def run(dictionary, filename):
    cols = ['testcase','wirelength', 'vias', 'short', 'space', 'score']
    df = pd.DataFrame(columns = cols) #Temporary empty dataframe
    for d in dictionary:
        for i in dictionary[d]:
                runGR(d, i)
                df = runDR(d, i, filename, df)

print("--------------- Start Script ----------------")
tests = {18 : [1,2,3],19:[1,3]}
filename = "20alpha0.75_OBS.xlsx"
run(tests, filename)

