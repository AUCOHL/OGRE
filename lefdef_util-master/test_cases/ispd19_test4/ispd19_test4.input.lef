VERSION			5.8 ;
NAMESCASESENSITIVE	ON ;
BUSBITCHARS		"[]" ;
DIVIDERCHAR		"/" ;

UNITS
  DATABASE MICRONS	1000 ;
END UNITS

MANUFACTURINGGRID	0.001 ;


LAYER metal1
  TYPE			ROUTING ;
  DIRECTION		HORIZONTAL ;
  PITCH			0.200 ;
  OFFSET		0.000 ;
  WIDTH			0.100 ;
  MINWIDTH		0.100 ;
  SPACINGTABLE
  PARALLELRUNLENGTH     0.00    0.40    0.46    1.40    4.10
  WIDTH    0.00         0.10    0.10    0.10    0.10    0.10
  WIDTH    0.30         0.10    0.12    0.12    0.12    0.12
  WIDTH    0.46         0.10    0.12    0.15    0.15    0.15
  WIDTH    1.40         0.10    0.12    0.15    0.52    0.52
  WIDTH    4.10         0.10    0.12    0.15    0.52    1.40 ;
  SPACING 0.11 ENDOFLINE 0.12 WITHIN 0.045 PARALLELEDGE 0.11 WITHIN 0.11 ;
  AREA 			0.041 ;
END metal1

LAYER via1
  TYPE			CUT ;
  SPACING		0.10 ;
  SPACING		0.13 ADJACENTCUTS 3 WITHIN 0.15 ;
END via1

LAYER metal2
  TYPE			ROUTING ;
  DIRECTION		VERTICAL ;
  PITCH			0.200 ;
  OFFSET		0.100 ;
  WIDTH			0.1 ;
  MINWIDTH		0.1 ;
  SPACINGTABLE
  PARALLELRUNLENGTH     0.00    0.40    0.46    1.40    4.10
  WIDTH    0.00         0.10    0.10    0.10    0.10    0.10
  WIDTH    0.30         0.10    0.12    0.12    0.12    0.12
  WIDTH    0.46         0.10    0.12    0.15    0.15    0.15
  WIDTH    1.40         0.10    0.12    0.15    0.52    0.52
  WIDTH    4.10         0.10    0.12    0.15    0.52    1.40 ;
  SPACING 0.12 ENDOFLINE 0.14 WITHIN 0.045 PARALLELEDGE 0.12 WITHIN 0.12 ;
  AREA			0.051 ;
END metal2

LAYER via2
  TYPE CUT ;
  SPACING		0.10 ;
  SPACING		0.13 ADJACENTCUTS 3 WITHIN 0.15 ;
END via2

LAYER metal3
  TYPE			ROUTING ;
  DIRECTION		HORIZONTAL ;
  PITCH			0.200 ;
  OFFSET		0.000 ;
  WIDTH			0.1 ;
  MINWIDTH		0.1 ;
  SPACINGTABLE
  PARALLELRUNLENGTH     0.00    0.40    0.46    1.40    4.10
  WIDTH    0.00         0.10    0.10    0.10    0.10    0.10
  WIDTH    0.30         0.10    0.12    0.12    0.12    0.12
  WIDTH    0.46         0.10    0.12    0.15    0.15    0.15
  WIDTH    1.40         0.10    0.12    0.15    0.52    0.52
  WIDTH    4.10         0.10    0.12    0.15    0.52    1.40 ;
  SPACING 0.12 ENDOFLINE 0.14 WITHIN 0.045 PARALLELEDGE 0.12 WITHIN 0.12 ;
  AREA			0.051 ;
END metal3

LAYER via3
  TYPE			CUT ;
  SPACING		0.10 ;
  SPACING		0.13 ADJACENTCUTS 3 WITHIN 0.15 ;
END via3

LAYER metal4
  TYPE			ROUTING ;
  DIRECTION		VERTICAL ;
  PITCH			0.200 ;
  OFFSET		0.100 ;
  WIDTH			0.1 ;
  MINWIDTH		0.1 ;
  SPACINGTABLE
  PARALLELRUNLENGTH     0.00    0.40    0.46    1.40    4.10
  WIDTH    0.00         0.10    0.10    0.10    0.10    0.10
  WIDTH    0.30         0.10    0.12    0.12    0.12    0.12
  WIDTH    0.46         0.10    0.12    0.15    0.15    0.15
  WIDTH    1.40         0.10    0.12    0.15    0.52    0.52
  WIDTH    4.10         0.10    0.12    0.15    0.52    1.40 ;
  SPACING 0.12 ENDOFLINE 0.14 WITHIN 0.045 PARALLELEDGE 0.12 WITHIN 0.12  ;
  AREA			0.051 ;
END metal4

LAYER via4
  TYPE CUT ;
  SPACING               0.10 ;
  SPACING               0.13 ADJACENTCUTS 3 WITHIN 0.14 ;
END via4

LAYER metal5
  TYPE			ROUTING ;
  DIRECTION		HORIZONTAL ;
  PITCH			0.200 ;
  OFFSET		0.000 ;
  WIDTH			0.1 ;
  MINWIDTH		0.1 ;
  SPACINGTABLE
  PARALLELRUNLENGTH     0.00    0.40    0.46    1.40    4.10
  WIDTH    0.00         0.10    0.10    0.10    0.10    0.10
  WIDTH    0.30         0.10    0.12    0.12    0.12    0.12
  WIDTH    0.46         0.10    0.12    0.15    0.15    0.15
  WIDTH    1.40         0.10    0.12    0.15    0.52    0.52
  WIDTH    4.10         0.10    0.12    0.15    0.52    1.40 ;
  SPACING 0.12 ENDOFLINE 0.14 WITHIN 0.045 PARALLELEDGE 0.12 WITHIN 0.12  ;
  AREA			0.051 ;
END metal5

VIA VIA12_HV DEFAULT

  LAYER metal1 ;
    RECT -0.090 -0.050  0.090  0.050 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal2 ;
    RECT -0.050 -0.090  0.050  0.090 ;
END VIA12_HV

VIA VIA12_HH DEFAULT

  LAYER metal1 ;
    RECT -0.090 -0.050  0.090  0.050 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal2 ;
    RECT -0.090 -0.050  0.090  0.050 ;
END VIA12_HH
                 
VIA VIA12_VV DEFAULT

  LAYER metal1 ;
    RECT -0.050 -0.090  0.050  0.090 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal2 ;
    RECT -0.050 -0.090  0.050  0.090 ;
END VIA12_VV



VIA VIA12_FAT_HV DEFAULT

  LAYER metal1 ;
    RECT -0.12 -0.050  0.12  0.050 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal2 ;
    RECT -0.050 -0.12  0.050  0.12 ;
END VIA12_FAT_HV
             
VIA VIA12_FAT_HH DEFAULT

  LAYER metal1 ;
    RECT -0.12 -0.050  0.12  0.050 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal2 ;
    RECT -0.12 -0.050  0.12  0.050 ;
END VIA12_FAT_HH

VIA VIA12_FAT_VV DEFAULT

  LAYER metal1 ;
    RECT -0.050 -0.12  0.050  0.12 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal2 ;
    RECT -0.050 -0.12  0.050  0.12 ;
END VIA12_FAT_VV

VIA VIA12_FAT DEFAULT

  LAYER metal1 ;
    RECT -0.090 -0.090  0.090  0.090 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal2 ;
    RECT -0.090 -0.090  0.090  0.090 ;
END VIA12_FAT
                 

VIA VIA12_2cut_E DEFAULT
 
  LAYER metal1 ;
    RECT -0.090 -0.050  0.300  0.050 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT  0.160 -0.050  0.260  0.050 ;
  LAYER metal2 ;
    RECT -0.050 -0.090  0.260  0.090 ;
END VIA12_2cut_E

VIA VIA12_2cut_W DEFAULT
  
  LAYER metal1 ;
    RECT -0.300 -0.050  0.090  0.050 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.260 -0.050 -0.160  0.050 ;
  LAYER metal2 ;
    RECT -0.260 -0.090  0.050  0.090 ;
END VIA12_2cut_W

VIA VIA12_2cut_N DEFAULT
  
  LAYER metal1 ;
    RECT -0.090 -0.050  0.090  0.260 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.050  0.160  0.050  0.260 ;
  LAYER metal2 ;
    RECT -0.050 -0.090  0.050  0.300 ;
END VIA12_2cut_N

VIA VIA12_2cut_S DEFAULT
  
  LAYER metal1 ;
    RECT -0.090 -0.260  0.090  0.050 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.050 -0.260  0.050 -0.160 ;
  LAYER metal2 ;
    RECT -0.050 -0.300  0.050  0.090 ;
END VIA12_2cut_S

VIA V12_2x1_HH_E DEFAULT
  LAYER metal1 ;
    RECT -0.09 -0.05 0.30 0.05 ;
  LAYER via1 ;
    RECT -0.05 -0.05 0.05 0.05 ;
    RECT 0.16 -0.05 0.26 0.05 ;
  LAYER metal2 ;
    RECT -0.09 -0.05 0.30 0.05 ;
 
END V12_2x1_HH_E

VIA V12_2x1_HH_W DEFAULT
  LAYER metal1 ;
    RECT -0.30 -0.05 0.09 0.05 ;
  LAYER via1 ;
    RECT -0.26 -0.05 -0.16 0.05 ;
    RECT -0.05 -0.05 0.05 0.05 ;
  LAYER metal2 ;
    RECT -0.30 -0.05 0.09 0.05 ;
  
END V12_2x1_HH_W

VIA V12_1x2_VV_N DEFAULT
  LAYER metal1 ;
    RECT -0.05 -0.09 0.05 0.30 ;
  LAYER via1 ;
    RECT -0.05 -0.05 0.05 0.05 ;
    RECT -0.05 0.16 0.05 0.26 ;
  LAYER metal2 ;
    RECT -0.05 -0.09 0.05 0.30 ;
  
END V12_1x2_VV_N

VIA V12_1x2_VV_S DEFAULT
  LAYER metal1 ;
    RECT -0.05 -0.30 0.05 0.09 ;
  LAYER via1 ;
    RECT -0.05 -0.26 0.05 -0.16 ;
    RECT -0.05 -0.05 0.05 0.05 ;
  LAYER metal2 ;
    RECT -0.05 -0.30 0.05 0.09 ;
  
END V12_1x2_VV_S

VIA VIA12_2cut_HN 
  
  LAYER metal1 ;
    RECT -0.050 -0.090  0.050  0.330 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.050  0.190  0.050  0.290 ;
  LAYER metal2 ;
    RECT -0.050 -0.090  0.050  0.330 ;
END VIA12_2cut_HN

VIA VIA12_2cut_HS 
  
  LAYER metal1 ;
    RECT -0.050 -0.330  0.050  0.090 ;
  LAYER via1 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.050 -0.290  0.050 -0.190 ;
  LAYER metal2 ;
    RECT -0.050 -0.330  0.050  0.090 ;
END VIA12_2cut_HS

VIA V12_2x2_HV DEFAULT
  LAYER metal1 ;
    RECT -0.205 -0.165 0.205 0.165 ;
  LAYER via1 ;
    RECT -0.165 -0.165 -0.065 -0.065 ;
    RECT 0.065 -0.165 0.165 -0.065 ;
    RECT -0.165 0.065 -0.065 0.165 ;
    RECT 0.065 0.065 0.165 0.165 ;
  LAYER metal2 ;
    RECT -0.165 -0.205 0.165 0.205 ;
  
END V12_2x2_HV

VIA VIA23_VH DEFAULT
  
  LAYER metal2 ;
    RECT -0.050 -0.090  0.050  0.090 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal3 ;
    RECT -0.090 -0.050  0.090  0.050 ;
END VIA23_VH

VIA VIA23_VV DEFAULT
 
  LAYER metal2 ;
    RECT -0.050 -0.090  0.050  0.090 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal3 ;
    RECT -0.050 -0.090  0.050  0.090 ;
END VIA23_VV
                 
VIA VIA23_HH DEFAULT
  
  LAYER metal2 ;
    RECT -0.090 -0.050  0.090  0.050 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal3 ;
    RECT -0.090 -0.050  0.090  0.050 ;
END VIA23_HH



VIA VIA23_FAT_VH DEFAULT
  
  LAYER metal2 ;
    RECT -0.050 -0.12  0.050  0.12 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal3 ;
    RECT -0.12 -0.050  0.12  0.050 ;
END VIA23_FAT_VH
             
VIA VIA23_FAT_VV DEFAULT
  
  LAYER metal2 ;
    RECT -0.050 -0.12  0.050  0.12 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal3 ;
    RECT -0.050 -0.12  0.050  0.12 ;
END VIA23_FAT_VV

VIA VIA23_FAT_HH DEFAULT
  
  LAYER metal2 ;
    RECT -0.12 -0.050  0.12  0.050 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal3 ;
    RECT -0.12 -0.050  0.12  0.050 ;
END VIA23_FAT_HH

VIA VIA23_FAT DEFAULT
  
  LAYER metal2 ;
    RECT -0.090 -0.090  0.090  0.090 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal3 ;
    RECT -0.090 -0.090  0.090  0.090 ;
END VIA23_FAT
                 

VIA VIA23_stack_N DEFAULT TOPOFSTACKONLY
 
  LAYER metal2 ;
    RECT -0.050 -0.090  0.050  0.430 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal3 ;
    RECT -0.090 -0.050  0.090  0.050 ;
END VIA23_stack_N

VIA VIA23_stack_S DEFAULT TOPOFSTACKONLY
  
  LAYER metal2 ;
    RECT -0.050 -0.430  0.050  0.090 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal3 ;
    RECT -0.090 -0.050  0.090  0.050 ;
END VIA23_stack_S


VIA VIA23_2cut_E DEFAULT
  
  LAYER metal2 ;
    RECT -0.050 -0.090  0.260  0.090 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT  0.160 -0.050  0.260  0.050 ;
  LAYER metal3 ;
    RECT -0.090 -0.050  0.300  0.050 ;
END VIA23_2cut_E

VIA VIA23_2cut_W DEFAULT
  
  LAYER metal2 ;
    RECT -0.260 -0.090  0.050  0.090 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.260 -0.050 -0.160  0.050 ;
  LAYER metal3 ;
    RECT -0.230 -0.050  0.090  0.050 ;
END VIA23_2cut_W

VIA VIA23_2cut_N DEFAULT
  
  LAYER metal2 ;
    RECT -0.050 -0.090  0.050  0.300 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.050  0.160  0.050  0.260 ;
  LAYER metal3 ;
    RECT -0.090 -0.050  0.090  0.260 ;
END VIA23_2cut_N

VIA VIA23_2cut_S DEFAULT
  
  LAYER metal2 ;
    RECT -0.050 -0.300  0.050  0.090 ;
  LAYER via2 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.050 -0.260  0.050 -0.160 ;
  LAYER metal3 ;
    RECT -0.090 -0.260  0.090  0.050 ;
END VIA23_2cut_S


VIA V23_2x2_VH DEFAULT
  LAYER metal2 ;
    RECT -0.165 -0.205 0.165 0.205 ;
  LAYER via2 ;
    RECT -0.165 -0.165 -0.065 -0.065 ;
    RECT 0.065 -0.165 0.165 -0.065 ;
    RECT -0.165 0.065 -0.065 0.165 ;
    RECT 0.065 0.065 0.165 0.165 ;
  LAYER metal3 ;
    RECT -0.205 -0.165 0.205 0.165 ;
  
END V23_2x2_VH

VIA VIA34_HV DEFAULT
  
  LAYER metal3 ;
    RECT -0.090 -0.050  0.090  0.050 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal4 ;
    RECT -0.050 -0.090  0.050  0.090 ;
END VIA34_HV

VIA VIA34_HH DEFAULT
  
  LAYER metal3 ;
    RECT -0.090 -0.050  0.090  0.050 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal4 ;
    RECT -0.090 -0.050  0.090  0.050 ;
END VIA34_HH
                 
VIA VIA34_VV DEFAULT
 
  LAYER metal3 ;
    RECT -0.050 -0.090  0.050  0.090 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal4 ;
    RECT -0.050 -0.090  0.050  0.090 ;
END VIA34_VV



VIA VIA34_FAT_HV DEFAULT
 
  LAYER metal3 ;
    RECT -0.12 -0.050  0.12  0.050 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal4 ;
    RECT -0.050 -0.12  0.050  0.12 ;
END VIA34_FAT_HV
             
VIA VIA34_FAT_HH DEFAULT
 
  LAYER metal3 ;
    RECT -0.12 -0.050  0.12  0.050 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal4 ;
    RECT -0.12 -0.050  0.12  0.050 ;
END VIA34_FAT_HH

VIA VIA34_FAT_VV DEFAULT
 
  LAYER metal3 ;
    RECT -0.050 -0.12  0.050  0.12 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal4 ;
    RECT -0.050 -0.12  0.050  0.12 ;
END VIA34_FAT_VV

VIA VIA34_FAT DEFAULT
 
  LAYER metal3 ;
    RECT -0.090 -0.090  0.090  0.090 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal4 ;
    RECT -0.090 -0.090  0.090  0.090 ;
END VIA34_FAT
                 
                                        
VIA VIA34_stack_E DEFAULT TOPOFSTACKONLY
  
  LAYER metal3 ;
    RECT -0.090 -0.050  0.430  0.050 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal4 ;
    RECT -0.050 -0.090  0.050  0.090 ;
END VIA34_stack_E

VIA VIA34_stack_W DEFAULT TOPOFSTACKONLY
 
  LAYER metal3 ;
    RECT -0.430 -0.050  0.090  0.050 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal4 ;
    RECT -0.050 -0.090  0.050  0.090 ;
END VIA34_stack_W


VIA VIA34_2cut_E DEFAULT
  
  LAYER metal3 ;
    RECT -0.090 -0.050  0.300  0.050 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT  0.160 -0.050  0.260  0.050 ;
  LAYER metal4 ;
    RECT -0.050 -0.090  0.260  0.090 ;
END VIA34_2cut_E

VIA VIA34_2cut_W DEFAULT
  
  LAYER metal3 ;
    RECT -0.300 -0.050  0.090  0.050 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.260 -0.050 -0.160  0.050 ;
  LAYER metal4 ;
    RECT -0.260 -0.090  0.050  0.090 ;
END VIA34_2cut_W

VIA VIA34_2cut_N DEFAULT
  
  LAYER metal3 ;
    RECT -0.090 -0.050  0.090  0.260 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.050  0.160  0.050  0.260 ;
  LAYER metal4 ;
    RECT -0.050 -0.090  0.050  0.300 ;
END VIA34_2cut_N

VIA VIA34_2cut_S DEFAULT
 
  LAYER metal3 ;
    RECT -0.090 -0.260  0.090  0.050 ;
  LAYER via3 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.050 -0.260  0.050 -0.160 ;
  LAYER metal4 ;
    RECT -0.050 -0.300  0.050  0.090 ;
END VIA34_2cut_S


VIA V34_2x2_HV DEFAULT
  LAYER metal3 ;
    RECT -0.205 -0.165 0.205 0.165 ;
  LAYER via3 ;
    RECT -0.165 -0.165 -0.065 -0.065 ;
    RECT 0.065 -0.165 0.165 -0.065 ;
    RECT -0.165 0.065 -0.065 0.165 ;
    RECT 0.065 0.065 0.165 0.165 ;
  LAYER metal4 ;
    RECT -0.165 -0.205 0.165 0.205 ;
 
END V34_2x2_HV


VIA VIA45_VH DEFAULT
 
  LAYER metal4 ;
    RECT -0.050 -0.090  0.050  0.090 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal5 ;
    RECT -0.090 -0.050  0.090  0.050 ;
END VIA45_VH

VIA VIA45_VV DEFAULT
  
  LAYER metal4 ;
    RECT -0.050 -0.090  0.050  0.090 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal5 ;
    RECT -0.050 -0.090  0.050  0.090 ;
END VIA45_VV
                 
VIA VIA45_HH DEFAULT
  
  LAYER metal4 ;
    RECT -0.090 -0.050  0.090  0.050 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal5 ;
    RECT -0.090 -0.050  0.090  0.050 ;
END VIA45_HH



VIA VIA45_FAT_VH DEFAULT
 
  LAYER metal4 ;
    RECT -0.050 -0.12  0.050  0.12 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal5 ;
    RECT -0.12 -0.050  0.12  0.050 ;
END VIA45_FAT_VH
             
VIA VIA45_FAT_VV DEFAULT
 
  LAYER metal4 ;
    RECT -0.050 -0.12  0.050  0.12 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal5 ;
    RECT -0.050 -0.12  0.050  0.12 ;
END VIA45_FAT_VV

VIA VIA45_FAT_HH DEFAULT
 
  LAYER metal4 ;
    RECT -0.12 -0.050  0.12  0.050 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal5 ;
    RECT -0.12 -0.050  0.12  0.050 ;
END VIA45_FAT_HH

VIA VIA45_FAT DEFAULT
 
  LAYER metal4 ;
    RECT -0.090 -0.090  0.090  0.090 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal5 ;
    RECT -0.090 -0.090  0.090  0.090 ;
END VIA45_FAT
                 

VIA VIA45_1stack_N DEFAULT TOPOFSTACKONLY
 
  LAYER metal4 ;
    RECT -0.050 -0.090  0.050  0.430 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal5 ;
    RECT -0.090 -0.050  0.090  0.050 ;
END VIA45_1stack_N

VIA VIA45_1stack_S DEFAULT TOPOFSTACKONLY
 
  LAYER metal4 ;
    RECT -0.050 -0.430  0.050  0.090 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
  LAYER metal5 ;
    RECT -0.090 -0.050  0.090  0.050 ;
END VIA45_1stack_S


VIA VIA45_2cut_E DEFAULT
 
  LAYER metal4 ;
    RECT -0.050 -0.090  0.260  0.090 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT  0.160 -0.050  0.260  0.050 ;
  LAYER metal5 ;
    RECT -0.090 -0.050  0.300  0.050 ;
END VIA45_2cut_E

VIA VIA45_2cut_W DEFAULT
 
  LAYER metal4 ;
    RECT -0.260 -0.090  0.050  0.090 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.260 -0.050 -0.160  0.050 ;
  LAYER metal5 ;
    RECT -0.300 -0.050  0.090  0.050 ;
END VIA45_2cut_W

VIA VIA45_2cut_N DEFAULT
 
  LAYER metal4 ;
    RECT -0.050 -0.090  0.050  0.300 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.050  0.160  0.050  0.260 ;
  LAYER metal5 ;
    RECT -0.090 -0.050  0.090  0.260 ;
END VIA45_2cut_N

VIA VIA45_2cut_S DEFAULT
 
  LAYER metal4 ;
    RECT -0.050 -0.300  0.050  0.090 ;
  LAYER via4 ;
    RECT -0.050 -0.050  0.050  0.050 ;
    RECT -0.050 -0.260  0.050 -0.160 ;
  LAYER metal5 ;
    RECT -0.090 -0.260  0.090  0.050 ;
END VIA45_2cut_S


VIA V45_2x2_VH DEFAULT
  LAYER metal4 ;
    RECT -0.165 -0.205 0.165 0.205 ;
  LAYER via4 ;
    RECT -0.165 -0.165 -0.065 -0.065 ;
    RECT 0.065 -0.165 0.165 -0.065 ;
    RECT -0.165 0.065 -0.065 0.165 ;
    RECT 0.065 0.065 0.165 0.165 ;
  LAYER metal5 ;
    RECT -0.205 -0.165 0.205 0.165 ;
 
END V45_2x2_VH


VIARULE VIAGEN12 GENERATE
   LAYER metal1 ;
       ENCLOSURE 0.04 0 ; 
       WIDTH 0.09 TO 12.00 ;
   LAYER metal2 ;
       ENCLOSURE 0.04 0 ;
       WIDTH 0.10 TO 12.00 ;
   LAYER via1 ;
       RECT -0.05 -0.05 0.05 0.05 ;
       SPACING 0.20 BY 0.20 ;    
END VIAGEN12        

VIARULE VIAGEN23 GENERATE
   LAYER metal2 ;
       ENCLOSURE 0.04 0 ;  
       WIDTH 0.10 TO 12.00 ;
   LAYER metal3 ;
       ENCLOSURE 0.04 0 ; 
       WIDTH 0.10 TO 12.00 ;
   LAYER via2 ;
       RECT -0.05 -0.05 0.05 0.05 ; 
       SPACING 0.20 BY 0.20 ;    
END VIAGEN23

VIARULE VIAGEN34 GENERATE
   LAYER metal3 ;
       ENCLOSURE 0.04 0 ; 
       WIDTH 0.10 TO 12.00 ;
   LAYER metal4 ;
       ENCLOSURE 0.04 0 ; 
       WIDTH 0.10 TO 12.00 ;
   LAYER via3 ;
       RECT -0.05 -0.05 0.05 0.05 ; 
       SPACING 0.20 BY 0.20 ;    
END VIAGEN34

VIARULE VIAGEN45 GENERATE
   LAYER metal4 ;
       ENCLOSURE 0.04 0 ; 
       WIDTH 0.10 TO 12.00 ;
   LAYER metal5 ;
       ENCLOSURE 0.04 0 ; 
       WIDTH 0.10 TO 12.00 ;
   LAYER via4 ;
       RECT -0.05 -0.05 0.05 0.05 ; 
       SPACING 0.20 BY 0.20 ;    
END VIAGEN45

SITE core
  SIZE 0.20 BY 2.00 ;
  CLASS CORE ;
  SYMMETRY Y  ;
END core

MACRO h9
   CLASS BLOCK ;
   FOREIGN h9 ;
   ORIGIN 0 0 ;
   SIZE 267.4 BY 236.03 ;
   SYMMETRY X Y R90 ;
   PIN FE_OFN1072_n_16034
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 98.25 0 98.35 0.51 ;
      END
   END FE_OFN1072_n_16034

   PIN FE_OFN12071_n_41544
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 72.85 235.518 72.95 236.028 ;
      END
   END FE_OFN12071_n_41544

   PIN FE_OFN12072_n_41544
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 225.15 0.51 225.25 ;
      END
   END FE_OFN12072_n_41544

   PIN FE_OFN13275_n_143160
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 75.45 235.518 75.55 236.028 ;
      END
   END FE_OFN13275_n_143160

   PIN FE_OFN13371_n_41505
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 79.65 235.518 79.75 236.028 ;
      END
   END FE_OFN13371_n_41505

   PIN FE_OFN13374_n_41505
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 53.45 235.518 53.55 236.028 ;
      END
   END FE_OFN13374_n_41505

   PIN FE_OFN13923_n_143215
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 225.55 0.51 225.65 ;
      END
   END FE_OFN13923_n_143215

   PIN FE_OFN13929_n_143214
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 191.15 0.51 191.25 ;
      END
   END FE_OFN13929_n_143214

   PIN FE_OFN13930_n_143214
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 26.25 235.518 26.35 236.028 ;
      END
   END FE_OFN13930_n_143214

   PIN FE_OFN13940_n_143187
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 213.35 0.51 213.45 ;
      END
   END FE_OFN13940_n_143187

   PIN FE_OFN13972_n_41362
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 226.95 0.51 227.05 ;
      END
   END FE_OFN13972_n_41362

   PIN FE_OFN13973_n_41362
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 53.25 235.518 53.35 236.028 ;
      END
   END FE_OFN13973_n_41362

   PIN FE_OFN14504_n_41536
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 204.55 0.51 204.65 ;
      END
   END FE_OFN14504_n_41536

   PIN FE_OFN14973_n_67017
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 14.85 0 14.95 0.51 ;
      END
   END FE_OFN14973_n_67017

   PIN FE_OFN17078_n_140296
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 173.45 235.518 173.55 236.028 ;
      END
   END FE_OFN17078_n_140296

   PIN FE_OFN17700_delay_mul_ln34_unr6_unr8_stage2_stallmux_z_2_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 132.05 235.518 132.15 236.028 ;
      END
   END FE_OFN17700_delay_mul_ln34_unr6_unr8_stage2_stallmux_z_2_

   PIN FE_OFN18514_delay_add_ln34_unr2_unr2_stage2_stallmux_q_13_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 91.95 0.51 92.05 ;
      END
   END FE_OFN18514_delay_add_ln34_unr2_unr2_stage2_stallmux_q_13_

   PIN FE_OFN5666_delay_mul_ln34_unr6_unr3_stage2_stallmux_z_2_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 151.95 267.4 152.05 ;
      END
   END FE_OFN5666_delay_mul_ln34_unr6_unr3_stage2_stallmux_z_2_

   PIN FE_OFN5813_delay_mul_ln34_unr6_unr4_stage2_stallmux_z_2_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 188.15 267.4 188.25 ;
      END
   END FE_OFN5813_delay_mul_ln34_unr6_unr4_stage2_stallmux_z_2_

   PIN FE_OFN5889_n_41535
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 26.45 235.518 26.55 236.028 ;
      END
   END FE_OFN5889_n_41535

   PIN FE_OFN5896_n_143186
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 213.15 0.51 213.25 ;
      END
   END FE_OFN5896_n_143186

   PIN FE_OFN5963_n_41544
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 200.35 0.51 200.45 ;
      END
   END FE_OFN5963_n_41544

   PIN FE_OFN9229_delay_add_ln34_unr2_unr4_stage2_stallmux_q_15_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 238.85 235.518 238.95 236.028 ;
      END
   END FE_OFN9229_delay_add_ln34_unr2_unr4_stage2_stallmux_q_15_

   PIN FE_OFN9234_delay_add_ln34_unr2_unr2_stage2_stallmux_q_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 50.95 0.51 51.05 ;
      END
   END FE_OFN9234_delay_add_ln34_unr2_unr2_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr6_unr0_stage2_stallmux_q_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 27.05 235.518 27.15 236.028 ;
      END
   END delay_mul_ln34_unr6_unr0_stage2_stallmux_q_7_

   PIN delay_mul_ln34_unr6_unr3_stage2_stallmux_z_3_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 229.75 0.51 229.85 ;
      END
   END delay_mul_ln34_unr6_unr3_stage2_stallmux_z_3_

   PIN delay_mul_ln34_unr6_unr3_stage2_stallmux_z_4_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 14.05 235.518 14.15 236.028 ;
      END
   END delay_mul_ln34_unr6_unr3_stage2_stallmux_z_4_

   PIN delay_mul_ln34_unr6_unr3_stage2_stallmux_z_5_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 224.95 0.51 225.05 ;
      END
   END delay_mul_ln34_unr6_unr3_stage2_stallmux_z_5_

   PIN delay_mul_ln34_unr6_unr3_stage2_stallmux_z_6_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 223.75 0.51 223.85 ;
      END
   END delay_mul_ln34_unr6_unr3_stage2_stallmux_z_6_

   PIN delay_mul_ln34_unr6_unr3_stage2_stallmux_z_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 204.95 0.51 205.05 ;
      END
   END delay_mul_ln34_unr6_unr3_stage2_stallmux_z_7_

   PIN delay_mul_ln34_unr6_unr4_stage2_stallmux_q_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 228.95 267.4 229.05 ;
      END
   END delay_mul_ln34_unr6_unr4_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr6_unr4_stage2_stallmux_z_13_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 211.95 267.4 212.05 ;
      END
   END delay_mul_ln34_unr6_unr4_stage2_stallmux_z_13_

   PIN delay_mul_ln34_unr6_unr4_stage2_stallmux_z_3_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 140.15 267.4 140.25 ;
      END
   END delay_mul_ln34_unr6_unr4_stage2_stallmux_z_3_

   PIN mul_4685_72_n_127
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 223.95 0.51 224.05 ;
      END
   END mul_4685_72_n_127

   PIN mul_4685_72_n_153
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 174.95 0.51 175.05 ;
      END
   END mul_4685_72_n_153

   PIN mul_4685_72_n_81
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 8.65 235.518 8.75 236.028 ;
      END
   END mul_4685_72_n_81

   PIN mul_4685_72_n_848
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 163.15 0.51 163.25 ;
      END
   END mul_4685_72_n_848

   PIN mul_4686_72_n_172
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 164.75 0.51 164.85 ;
      END
   END mul_4686_72_n_172

   PIN mul_4686_72_n_173
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 175.15 0.51 175.25 ;
      END
   END mul_4686_72_n_173

   PIN mul_4686_72_n_174
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 164.15 0.51 164.25 ;
      END
   END mul_4686_72_n_174

   PIN mul_4686_72_n_175
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 163.35 0.51 163.45 ;
      END
   END mul_4686_72_n_175

   PIN mul_4686_72_n_59
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 128.55 0.51 128.65 ;
      END
   END mul_4686_72_n_59

   PIN mul_4686_72_n_760
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 128.75 0.51 128.85 ;
      END
   END mul_4686_72_n_760

   PIN mul_4686_72_n_765
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 128.15 0.51 128.25 ;
      END
   END mul_4686_72_n_765

   PIN mul_4686_72_n_825
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 127.75 0.51 127.85 ;
      END
   END mul_4686_72_n_825

   PIN mul_4692_72_n_100
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 9.05 235.518 9.15 236.028 ;
      END
   END mul_4692_72_n_100

   PIN mul_4692_72_n_101
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 8.65 235.518 8.75 236.028 ;
      END
   END mul_4692_72_n_101

   PIN mul_4692_72_n_125
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 228.75 0.51 228.85 ;
      END
   END mul_4692_72_n_125

   PIN mul_4692_72_n_128
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 217.15 0.51 217.25 ;
      END
   END mul_4692_72_n_128

   PIN mul_4692_72_n_99
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 227.35 0.51 227.45 ;
      END
   END mul_4692_72_n_99

   PIN n_100492
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 216.95 0.51 217.05 ;
      END
   END n_100492

   PIN n_101343
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 213.75 0.51 213.85 ;
      END
   END n_101343

   PIN n_103771
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 222.95 0.51 223.05 ;
      END
   END n_103771

   PIN n_103826
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 46.65 235.518 46.75 236.028 ;
      END
   END n_103826

   PIN n_104062
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 151.35 0.51 151.45 ;
      END
   END n_104062

   PIN n_104069
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 139.75 0.51 139.85 ;
      END
   END n_104069

   PIN n_106541
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 139.95 0.51 140.05 ;
      END
   END n_106541

   PIN n_109205
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 34.05 235.518 34.15 236.028 ;
      END
   END n_109205

   PIN n_109222
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 38.25 235.518 38.35 236.028 ;
      END
   END n_109222

   PIN n_109223
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 38.45 235.518 38.55 236.028 ;
      END
   END n_109223

   PIN n_110029
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 58.45 235.518 58.55 236.028 ;
      END
   END n_110029

   PIN n_111074
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 61.85 235.518 61.95 236.028 ;
      END
   END n_111074

   PIN n_111156
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 227.55 0.51 227.65 ;
      END
   END n_111156

   PIN n_115715
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 164.35 0.51 164.45 ;
      END
   END n_115715

   PIN n_115716
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 164.15 0.51 164.25 ;
      END
   END n_115716

   PIN n_115759
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 176.35 0.51 176.45 ;
      END
   END n_115759

   PIN n_115760
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 176.95 0.51 177.05 ;
      END
   END n_115760

   PIN n_115785
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 188.95 0.51 189.05 ;
      END
   END n_115785

   PIN n_115786
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 177.15 0.51 177.25 ;
      END
   END n_115786

   PIN n_115911
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 187.35 0.51 187.45 ;
      END
   END n_115911

   PIN n_115923
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 151.55 0.51 151.65 ;
      END
   END n_115923

   PIN n_116134
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 140.15 0.51 140.25 ;
      END
   END n_116134

   PIN n_116475
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 152.75 0.51 152.85 ;
      END
   END n_116475

   PIN n_116614
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 198.95 0.51 199.05 ;
      END
   END n_116614

   PIN n_116752
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 176.15 0.51 176.25 ;
      END
   END n_116752

   PIN n_117032
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 152.15 0.51 152.25 ;
      END
   END n_117032

   PIN n_117103
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 139.75 0.51 139.85 ;
      END
   END n_117103

   PIN n_117106
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 8.85 235.518 8.95 236.028 ;
      END
   END n_117106

   PIN n_117107
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 8.85 235.518 8.95 236.028 ;
      END
   END n_117107

   PIN n_118624
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 187.55 0.51 187.65 ;
      END
   END n_118624

   PIN n_118625
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 175.35 0.51 175.45 ;
      END
   END n_118625

   PIN n_118635
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 190.35 0.51 190.45 ;
      END
   END n_118635

   PIN n_118682
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 151.75 0.51 151.85 ;
      END
   END n_118682

   PIN n_118902
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 175.55 0.51 175.65 ;
      END
   END n_118902

   PIN n_118915
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 175.75 0.51 175.85 ;
      END
   END n_118915

   PIN n_119242
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 139.95 0.51 140.05 ;
      END
   END n_119242

   PIN n_119264
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 189.15 0.51 189.25 ;
      END
   END n_119264

   PIN n_119265
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 187.75 0.51 187.85 ;
      END
   END n_119265

   PIN n_119270
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 163.55 0.51 163.65 ;
      END
   END n_119270

   PIN n_120529
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 176.35 0.51 176.45 ;
      END
   END n_120529

   PIN n_121375
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 151.95 0.51 152.05 ;
      END
   END n_121375

   PIN n_122150
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 140.15 0.51 140.25 ;
      END
   END n_122150

   PIN n_122430
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 138.95 0.51 139.05 ;
      END
   END n_122430

   PIN n_123046
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 139.15 0.51 139.25 ;
      END
   END n_123046

   PIN n_123047
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 139.35 0.51 139.45 ;
      END
   END n_123047

   PIN n_123456
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 163.55 0.51 163.65 ;
      END
   END n_123456

   PIN n_127398
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 175.95 0.51 176.05 ;
      END
   END n_127398

   PIN n_127918
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 68.15 267.4 68.25 ;
      END
   END n_127918

   PIN n_128538
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 127.95 0.51 128.05 ;
      END
   END n_128538

   PIN n_128751
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 128.15 0.51 128.25 ;
      END
   END n_128751

   PIN n_129373
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 176.55 0.51 176.65 ;
      END
   END n_129373

   PIN n_130437
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 163.75 0.51 163.85 ;
      END
   END n_130437

   PIN n_131022
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 127.95 0.51 128.05 ;
      END
   END n_131022

   PIN n_137688
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 226.95 267.4 227.05 ;
      END
   END n_137688

   PIN n_137761
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 175.95 267.4 176.05 ;
      END
   END n_137761

   PIN n_137849
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 206.45 235.518 206.55 236.028 ;
      END
   END n_137849

   PIN n_35702
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 164.95 0.51 165.05 ;
      END
   END n_35702

   PIN n_36064
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 199.75 0.51 199.85 ;
      END
   END n_36064

   PIN n_37197
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 120.95 267.4 121.05 ;
      END
   END n_37197

   PIN n_37198
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 259.65 235.518 259.75 236.028 ;
      END
   END n_37198

   PIN n_37774
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 227.95 267.4 228.05 ;
      END
   END n_37774

   PIN n_37935
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 212.55 0.51 212.65 ;
      END
   END n_37935

   PIN n_37980
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 219.95 0.51 220.05 ;
      END
   END n_37980

   PIN n_38025
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 187.95 0.51 188.05 ;
      END
   END n_38025

   PIN n_38471
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 212.75 0.51 212.85 ;
      END
   END n_38471

   PIN n_38472
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 212.95 0.51 213.05 ;
      END
   END n_38472

   PIN n_38617
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 218.95 0.51 219.05 ;
      END
   END n_38617

   PIN n_38618
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 219.15 0.51 219.25 ;
      END
   END n_38618

   PIN n_41119
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 10.25 235.518 10.35 236.028 ;
      END
   END n_41119

   PIN n_41226
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 56.25 235.518 56.35 236.028 ;
      END
   END n_41226

   PIN n_41377
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 130.95 267.4 131.05 ;
      END
   END n_41377

   PIN n_43201
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 55.65 235.518 55.75 236.028 ;
      END
   END n_43201

   PIN n_43202
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 55.45 235.518 55.55 236.028 ;
      END
   END n_43202

   PIN n_43396
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 48.85 235.518 48.95 236.028 ;
      END
   END n_43396

   PIN n_43481
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 58.25 235.518 58.35 236.028 ;
      END
   END n_43481

   PIN n_43848
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 50.85 235.518 50.95 236.028 ;
      END
   END n_43848

   PIN n_44677
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 226.15 0.51 226.25 ;
      END
   END n_44677

   PIN n_44678
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 66.45 235.518 66.55 236.028 ;
      END
   END n_44678

   PIN n_45925
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 225.35 0.51 225.45 ;
      END
   END n_45925

   PIN n_46856
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 190.55 0.51 190.65 ;
      END
   END n_46856

   PIN n_47058
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 199.95 0.51 200.05 ;
      END
   END n_47058

   PIN n_47110
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 212.15 0.51 212.25 ;
      END
   END n_47110

   PIN n_47630
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 128.35 0.51 128.45 ;
      END
   END n_47630

   PIN n_47819
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 163.95 0.51 164.05 ;
      END
   END n_47819

   PIN n_50683
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 141.15 0.51 141.25 ;
      END
   END n_50683

   PIN n_50905
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 227.35 0.51 227.45 ;
      END
   END n_50905

   PIN n_51557
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 226.75 0.51 226.85 ;
      END
   END n_51557

   PIN n_51614
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 212.35 0.51 212.45 ;
      END
   END n_51614

   PIN n_52269
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 212.55 0.51 212.65 ;
      END
   END n_52269

   PIN n_52441
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 43.65 0 43.75 0.51 ;
      END
   END n_52441

   PIN n_52523
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 28.25 235.518 28.35 236.028 ;
      END
   END n_52523

   PIN n_53127
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 67.45 235.518 67.55 236.028 ;
      END
   END n_53127

   PIN n_53989
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 152.15 0.51 152.25 ;
      END
   END n_53989

   PIN n_53990
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 152.95 0.51 153.05 ;
      END
   END n_53990

   PIN n_53991
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 258.85 0 258.95 0.51 ;
      END
   END n_53991

   PIN n_54177
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 188.15 0.51 188.25 ;
      END
   END n_54177

   PIN n_55834
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 164.55 0.51 164.65 ;
      END
   END n_55834

   PIN n_56504
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 80.15 0.51 80.25 ;
      END
   END n_56504

   PIN n_56505
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 104.15 0.51 104.25 ;
      END
   END n_56505

   PIN n_57641
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 67.85 235.518 67.95 236.028 ;
      END
   END n_57641

   PIN n_58613
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 152.35 0.51 152.45 ;
      END
   END n_58613

   PIN n_58614
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 204.15 0.51 204.25 ;
      END
   END n_58614

   PIN n_58621
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 188.35 0.51 188.45 ;
      END
   END n_58621

   PIN n_58622
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 201.15 0.51 201.25 ;
      END
   END n_58622

   PIN n_62348
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 176.55 0.51 176.65 ;
      END
   END n_62348

   PIN n_62349
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 200.15 0.51 200.25 ;
      END
   END n_62349

   PIN n_63582
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 140.35 0.51 140.45 ;
      END
   END n_63582

   PIN n_64651
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 140.55 0.51 140.65 ;
      END
   END n_64651

   PIN n_65851
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 163.75 0.51 163.85 ;
      END
   END n_65851

   PIN n_76609
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 140.35 0.51 140.45 ;
      END
   END n_76609

   PIN n_84147
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 69.05 235.518 69.15 236.028 ;
      END
   END n_84147

   PIN n_88793
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 176.15 0.51 176.25 ;
      END
   END n_88793

   PIN n_89861
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 66.65 235.518 66.75 236.028 ;
      END
   END n_89861

   PIN n_90532
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 73.25 235.518 73.35 236.028 ;
      END
   END n_90532

   PIN n_94236
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 47.45 235.518 47.55 236.028 ;
      END
   END n_94236

   PIN n_96014
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 226.55 0.51 226.65 ;
      END
   END n_96014

   PIN n_96031
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 225.95 0.51 226.05 ;
      END
   END n_96031

   PIN n_96563
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 152.35 0.51 152.45 ;
      END
   END n_96563

   PIN n_98744
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 140.75 0.51 140.85 ;
      END
   END n_98744

   PIN n_98745
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 140.95 0.51 141.05 ;
      END
   END n_98745

   PIN FE_OCPN15689_FE_OFN12113_n_41363
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 199.55 0.51 199.65 ;
      END
   END FE_OCPN15689_FE_OFN12113_n_41363

   PIN FE_OFN1071_n_16034
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 259.85 0 259.95 0.51 ;
      END
   END FE_OFN1071_n_16034

   PIN FE_OFN11840_n_144163
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 27.8 235.773 28 236.028 ;
      END
   END FE_OFN11840_n_144163

   PIN FE_OFN11843_n_144163
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 61.4 235.773 61.6 236.028 ;
      END
   END FE_OFN11843_n_144163

   PIN FE_OFN11845_n_144163
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 74.85 235.518 74.95 236.028 ;
      END
   END FE_OFN11845_n_144163

   PIN FE_OFN11848_n_144163
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 199.5 0.255 199.7 ;
      END
   END FE_OFN11848_n_144163

   PIN FE_OFN12052_n_41878
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 74.45 235.518 74.55 236.028 ;
      END
   END FE_OFN12052_n_41878

   PIN FE_OFN12068_n_41544
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 72.45 235.518 72.55 236.028 ;
      END
   END FE_OFN12068_n_41544

   PIN FE_OFN12094_n_41679
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 47.65 235.518 47.75 236.028 ;
      END
   END FE_OFN12094_n_41679

   PIN FE_OFN12111_n_41363
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 56.65 235.518 56.75 236.028 ;
      END
   END FE_OFN12111_n_41363

   PIN FE_OFN12995_n_41504
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 13.8 235.773 14 236.028 ;
      END
   END FE_OFN12995_n_41504

   PIN FE_OFN13259_n_143327
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 41.45 235.518 41.55 236.028 ;
      END
   END FE_OFN13259_n_143327

   PIN FE_OFN13274_n_143160
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 75.65 235.518 75.75 236.028 ;
      END
   END FE_OFN13274_n_143160

   PIN FE_OFN13276_n_143160
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 199.35 0.51 199.45 ;
      END
   END FE_OFN13276_n_143160

   PIN FE_OFN13280_n_143159
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 91.45 235.518 91.55 236.028 ;
      END
   END FE_OFN13280_n_143159

   PIN FE_OFN13679_n_143468
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 71.85 235.518 71.95 236.028 ;
      END
   END FE_OFN13679_n_143468

   PIN FE_OFN13684_n_143467
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 52.65 235.518 52.75 236.028 ;
      END
   END FE_OFN13684_n_143467

   PIN FE_OFN13697_n_143411
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 39.4 235.773 39.6 236.028 ;
      END
   END FE_OFN13697_n_143411

   PIN FE_OFN13720_n_143132
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 223.3 0.255 223.5 ;
      END
   END FE_OFN13720_n_143132

   PIN FE_OFN13725_n_143131
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 79.05 235.518 79.15 236.028 ;
      END
   END FE_OFN13725_n_143131

   PIN FE_OFN13770_n_41154
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 28.25 235.518 28.35 236.028 ;
      END
   END FE_OFN13770_n_41154

   PIN FE_OFN13784_n_41769
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 165.15 0.51 165.25 ;
      END
   END FE_OFN13784_n_41769

   PIN FE_OFN13836_n_143217
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 189.35 0.51 189.45 ;
      END
   END FE_OFN13836_n_143217

   PIN FE_OFN13840_n_143189
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 201.35 0.51 201.45 ;
      END
   END FE_OFN13840_n_143189

   PIN FE_OFN13920_n_143215
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 28.45 235.518 28.55 236.028 ;
      END
   END FE_OFN13920_n_143215

   PIN FE_OFN13926_n_143214
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 16.45 235.518 16.55 236.028 ;
      END
   END FE_OFN13926_n_143214

   PIN FE_OFN13933_n_143213
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 200.75 0.51 200.85 ;
      END
   END FE_OFN13933_n_143213

   PIN FE_OFN13937_n_143187
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 9.25 235.518 9.35 236.028 ;
      END
   END FE_OFN13937_n_143187

   PIN FE_OFN13942_n_143186
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 151.95 0.51 152.05 ;
      END
   END FE_OFN13942_n_143186

   PIN FE_OFN13948_n_143185
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 101.65 235.518 101.75 236.028 ;
      END
   END FE_OFN13948_n_143185

   PIN FE_OFN13949_n_143185
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 174.75 0.51 174.85 ;
      END
   END FE_OFN13949_n_143185

   PIN FE_OFN13970_n_41362
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 65.85 235.518 65.95 236.028 ;
      END
   END FE_OFN13970_n_41362

   PIN FE_OFN13979_n_41537
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 23.45 235.518 23.55 236.028 ;
      END
   END FE_OFN13979_n_41537

   PIN FE_OFN14343_n_67347
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 72.65 235.518 72.75 236.028 ;
      END
   END FE_OFN14343_n_67347

   PIN FE_OFN14412_n_41429
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 65.05 235.518 65.15 236.028 ;
      END
   END FE_OFN14412_n_41429

   PIN FE_OFN14553_n_67346
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 67.85 235.518 67.95 236.028 ;
      END
   END FE_OFN14553_n_67346

   PIN FE_OFN15019_n_41544
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 9.25 235.518 9.35 236.028 ;
      END
   END FE_OFN15019_n_41544

   PIN FE_OFN15033_n_41535
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 52.85 235.518 52.95 236.028 ;
      END
   END FE_OFN15033_n_41535

   PIN FE_OFN15038_n_41507
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 31.85 235.518 31.95 236.028 ;
      END
   END FE_OFN15038_n_41507

   PIN FE_OFN15281_n_67352
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 213.15 0.51 213.25 ;
      END
   END FE_OFN15281_n_67352

   PIN FE_OFN16051_n_67347
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 218.15 0.51 218.25 ;
      END
   END FE_OFN16051_n_67347

   PIN FE_OFN4352_n_67017
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 15.45 0 15.55 0.51 ;
      END
   END FE_OFN4352_n_67017

   PIN FE_OFN5763_n_41506
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 62.05 235.518 62.15 236.028 ;
      END
   END FE_OFN5763_n_41506

   PIN FE_OFN5823_n_143157
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 97.05 235.518 97.15 236.028 ;
      END
   END FE_OFN5823_n_143157

   PIN FE_OFN5854_n_143129
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 28.65 235.518 28.75 236.028 ;
      END
   END FE_OFN5854_n_143129

   PIN FE_OFN5871_n_143132
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 60.25 235.518 60.35 236.028 ;
      END
   END FE_OFN5871_n_143132

   PIN FE_OFN5873_n_41152
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 27.4 235.773 27.6 236.028 ;
      END
   END FE_OFN5873_n_41152

   PIN FE_OFN5877_n_143130
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 103.45 235.518 103.55 236.028 ;
      END
   END FE_OFN5877_n_143130

   PIN FE_OFN5908_n_41536
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 31.25 235.518 31.35 236.028 ;
      END
   END FE_OFN5908_n_41536

   PIN FE_OFN5950_n_41543
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 48.05 235.518 48.15 236.028 ;
      END
   END FE_OFN5950_n_41543

   PIN FE_OFN5982_n_143325
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 92 235.773 92.2 236.028 ;
      END
   END FE_OFN5982_n_143325

   PIN FE_OFN6009_n_41879
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 213.55 0.51 213.65 ;
      END
   END FE_OFN6009_n_41879

   PIN FE_OFN6021_n_41878
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 81.65 235.518 81.75 236.028 ;
      END
   END FE_OFN6021_n_41878

   PIN FE_OFN6057_n_140218
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 63.25 235.518 63.35 236.028 ;
      END
   END FE_OFN6057_n_140218

   PIN FE_OFN6076_n_67348
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 214.55 0.51 214.65 ;
      END
   END FE_OFN6076_n_67348

   PIN FE_OFN6139_n_67344
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 60.05 235.518 60.15 236.028 ;
      END
   END FE_OFN6139_n_67344

   PIN FE_OFN9228_delay_add_ln34_unr2_unr4_stage2_stallmux_q_15_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 114.95 0.51 115.05 ;
      END
   END FE_OFN9228_delay_add_ln34_unr2_unr4_stage2_stallmux_q_15_

   PIN b_6_1_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 10.2 235.773 10.4 236.028 ;
      END
   END b_6_1_5

   PIN b_6_1_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 9.85 235.518 9.95 236.028 ;
      END
   END b_6_1_6

   PIN b_6_3_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 213.7 0.255 213.9 ;
      END
   END b_6_3_0

   PIN b_6_3_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 217.5 0.255 217.7 ;
      END
   END b_6_3_1

   PIN b_6_3_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 188.75 0.51 188.85 ;
      END
   END b_6_3_2

   PIN b_6_3_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 26.6 235.773 26.8 236.028 ;
      END
   END b_6_3_3

   PIN b_6_3_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 9.45 235.518 9.55 236.028 ;
      END
   END b_6_3_5

   PIN b_6_4_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 109 0 109.2 0.255 ;
      END
   END b_6_4_0

   PIN b_6_4_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 107.4 235.773 107.6 236.028 ;
      END
   END b_6_4_1

   PIN b_6_4_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 54.05 235.518 54.15 236.028 ;
      END
   END b_6_4_10

   PIN b_6_4_12
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 91.65 235.518 91.75 236.028 ;
      END
   END b_6_4_12

   PIN b_6_4_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 98.6 235.773 98.8 236.028 ;
      END
   END b_6_4_2

   PIN b_6_4_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 89.2 235.773 89.4 236.028 ;
      END
   END b_6_4_3

   PIN b_6_4_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 204.9 0.255 205.1 ;
      END
   END b_6_4_4

   PIN b_6_4_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 211.5 0.255 211.7 ;
      END
   END b_6_4_5

   PIN b_6_4_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 177.35 0.51 177.45 ;
      END
   END b_6_4_6

   PIN b_6_4_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 96.05 235.518 96.15 236.028 ;
      END
   END b_6_4_7

   PIN b_6_4_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 96.65 0 96.75 0.51 ;
      END
   END b_6_4_8

   PIN b_6_4_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 200.95 0.51 201.05 ;
      END
   END b_6_4_9

   PIN b_6_8_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 60.45 235.518 60.55 236.028 ;
      END
   END b_6_8_0

   PIN b_6_8_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 49.05 235.518 49.15 236.028 ;
      END
   END b_6_8_10

   PIN b_6_8_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 60.65 235.518 60.75 236.028 ;
      END
   END b_6_8_11

   PIN b_6_8_13
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 62.25 235.518 62.35 236.028 ;
      END
   END b_6_8_13

   PIN b_6_8_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 73.05 235.518 73.15 236.028 ;
      END
   END b_6_8_2

   PIN b_6_8_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 60.85 235.518 60.95 236.028 ;
      END
   END b_6_8_3

   PIN b_6_8_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 61.85 235.518 61.95 236.028 ;
      END
   END b_6_8_4

   PIN b_6_8_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 66.65 235.518 66.75 236.028 ;
      END
   END b_6_8_5

   PIN b_6_8_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 53.05 235.518 53.15 236.028 ;
      END
   END b_6_8_6

   PIN b_6_8_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 48.45 235.518 48.55 236.028 ;
      END
   END b_6_8_7

   PIN b_6_8_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 47.85 235.518 47.95 236.028 ;
      END
   END b_6_8_8

   PIN b_6_8_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 50.45 235.518 50.55 236.028 ;
      END
   END b_6_8_9

   PIN delay_add_ln34_unr2_unr2_stage2_stallmux_q_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 3.15 267.4 3.25 ;
      END
   END delay_add_ln34_unr2_unr2_stage2_stallmux_q_13_

   PIN delay_add_ln34_unr2_unr2_stage2_stallmux_q_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 50.95 267.4 51.05 ;
      END
   END delay_add_ln34_unr2_unr2_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr6_unr0_stage2_stallmux_z_7_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 24.85 235.518 24.95 236.028 ;
      END
   END delay_mul_ln34_unr6_unr0_stage2_stallmux_z_7_

   PIN delay_mul_ln34_unr6_unr8_stage2_stallmux_z_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 132.25 235.518 132.35 236.028 ;
      END
   END delay_mul_ln34_unr6_unr8_stage2_stallmux_z_2_

   PIN ispd_clk
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 137.6 235.773 137.8 236.028 ;
      END
   END ispd_clk

   PIN mul_4384_72_n_322
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 148.95 267.4 149.05 ;
      END
   END mul_4384_72_n_322

   PIN mul_4385_72_n_291
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 260.05 0 260.15 0.51 ;
      END
   END mul_4385_72_n_291

   PIN mul_4385_72_n_293
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 116.95 267.4 117.05 ;
      END
   END mul_4385_72_n_293

   PIN mul_4685_72_n_113
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 229.55 0.51 229.65 ;
      END
   END mul_4685_72_n_113

   PIN mul_4685_72_n_114
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 12.05 235.518 12.15 236.028 ;
      END
   END mul_4685_72_n_114

   PIN mul_4685_72_n_123
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 228.35 0.51 228.45 ;
      END
   END mul_4685_72_n_123

   PIN mul_4685_72_n_124
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 227.55 0.51 227.65 ;
      END
   END mul_4685_72_n_124

   PIN mul_4685_72_n_126
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 222.95 0.51 223.05 ;
      END
   END mul_4685_72_n_126

   PIN mul_4685_72_n_128
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 220.35 0.51 220.45 ;
      END
   END mul_4685_72_n_128

   PIN mul_4686_72_n_75
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 127.55 0.51 127.65 ;
      END
   END mul_4686_72_n_75

   PIN n_100517
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 43.85 235.518 43.95 236.028 ;
      END
   END n_100517

   PIN n_100894
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 199.15 0.51 199.25 ;
      END
   END n_100894

   PIN n_100908
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 204.35 0.51 204.45 ;
      END
   END n_100908

   PIN n_103167
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 198.75 0.51 198.85 ;
      END
   END n_103167

   PIN n_104067
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 200.55 0.51 200.65 ;
      END
   END n_104067

   PIN n_104070
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 139.55 0.51 139.65 ;
      END
   END n_104070

   PIN n_105146
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 225.75 0.51 225.85 ;
      END
   END n_105146

   PIN n_107966
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 190.95 0.51 191.05 ;
      END
   END n_107966

   PIN n_109265
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 86.05 235.518 86.15 236.028 ;
      END
   END n_109265

   PIN n_110663
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 226.35 0.51 226.45 ;
      END
   END n_110663

   PIN n_110915
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 51.85 235.518 51.95 236.028 ;
      END
   END n_110915

   PIN n_112026
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 229.35 0.51 229.45 ;
      END
   END n_112026

   PIN n_116135
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 151.15 0.51 151.25 ;
      END
   END n_116135

   PIN n_116476
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 151.75 0.51 151.85 ;
      END
   END n_116476

   PIN n_122251
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 172.95 267.4 173.05 ;
      END
   END n_122251

   PIN n_123110
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 198.95 0.51 199.05 ;
      END
   END n_123110

   PIN n_123111
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 187.15 0.51 187.25 ;
      END
   END n_123111

   PIN n_125285
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 173.15 267.4 173.25 ;
      END
   END n_125285

   PIN n_125286
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 259.85 235.518 259.95 236.028 ;
      END
   END n_125286

   PIN n_126760
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 152.55 0.51 152.65 ;
      END
   END n_126760

   PIN n_140296
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 266.89 19.95 267.4 20.05 ;
      END
   END n_140296

   PIN n_143329
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 20.6 235.773 20.8 236.028 ;
      END
   END n_143329

   PIN n_143413
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 19.2 235.773 19.4 236.028 ;
      END
   END n_143413

   PIN n_143595
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 211.95 0.51 212.05 ;
      END
   END n_143595

   PIN n_143865
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 190.75 0.51 190.85 ;
      END
   END n_143865

   PIN n_31805
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 229.15 0.51 229.25 ;
      END
   END n_31805

   PIN n_33135
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 92.15 0.51 92.25 ;
      END
   END n_33135

   PIN n_34106
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 9.65 235.518 9.75 236.028 ;
      END
   END n_34106

   PIN n_34265
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 116.15 0.51 116.25 ;
      END
   END n_34265

   PIN n_34503
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 10.65 235.518 10.75 236.028 ;
      END
   END n_34503

   PIN n_34853
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 9.05 235.518 9.15 236.028 ;
      END
   END n_34853

   PIN n_35129
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 68.15 0.51 68.25 ;
      END
   END n_35129

   PIN n_35323
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 115.95 0.51 116.05 ;
      END
   END n_35323

   PIN n_36377
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 260.25 235.518 260.35 236.028 ;
      END
   END n_36377

   PIN n_37528
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 227.75 0.51 227.85 ;
      END
   END n_37528

   PIN n_37611
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 228.95 0.51 229.05 ;
      END
   END n_37611

   PIN n_37704
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 213.35 0.51 213.45 ;
      END
   END n_37704

   PIN n_38380
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 212.95 0.51 213.05 ;
      END
   END n_38380

   PIN n_41039
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 198.55 0.51 198.65 ;
      END
   END n_41039

   PIN n_41241
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 63.05 235.518 63.15 236.028 ;
      END
   END n_41241

   PIN n_41333
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 227.95 0.51 228.05 ;
      END
   END n_41333

   PIN n_41505
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 29.85 235.518 29.95 236.028 ;
      END
   END n_41505

   PIN n_41698
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 64.85 235.518 64.95 236.028 ;
      END
   END n_41698

   PIN n_43847
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 48.65 235.518 48.75 236.028 ;
      END
   END n_43847

   PIN n_44259
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 71.45 235.518 71.55 236.028 ;
      END
   END n_44259

   PIN n_46640
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 54.25 235.518 54.35 236.028 ;
      END
   END n_46640

   PIN n_47006
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 212.35 0.51 212.45 ;
      END
   END n_47006

   PIN n_47088
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 190.15 0.51 190.25 ;
      END
   END n_47088

   PIN n_47111
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 212.15 0.51 212.25 ;
      END
   END n_47111

   PIN n_47947
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 176.75 0.51 176.85 ;
      END
   END n_47947

   PIN n_49044
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 67.05 235.518 67.15 236.028 ;
      END
   END n_49044

   PIN n_49385
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 11.65 235.518 11.75 236.028 ;
      END
   END n_49385

   PIN n_52268
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 198.75 0.51 198.85 ;
      END
   END n_52268

   PIN n_52442
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 7.95 0.51 8.05 ;
      END
   END n_52442

   PIN n_52806
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 74.05 235.518 74.15 236.028 ;
      END
   END n_52806

   PIN n_53026
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 188.55 0.51 188.65 ;
      END
   END n_53026

   PIN n_53126
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 67.65 235.518 67.75 236.028 ;
      END
   END n_53126

   PIN n_55075
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 227.75 0.51 227.85 ;
      END
   END n_55075

   PIN n_55277
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 49.45 235.518 49.55 236.028 ;
      END
   END n_55277

   PIN n_55441
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 46.45 235.518 46.55 236.028 ;
      END
   END n_55441

   PIN n_56027
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 208.95 0.51 209.05 ;
      END
   END n_56027

   PIN n_57044
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 68.05 235.518 68.15 236.028 ;
      END
   END n_57044

   PIN n_57047
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 67.45 235.518 67.55 236.028 ;
      END
   END n_57047

   PIN n_58615
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 209.95 0.51 210.05 ;
      END
   END n_58615

   PIN n_76128
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 212.75 0.51 212.85 ;
      END
   END n_76128

   PIN n_80052
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 52.05 235.518 52.15 236.028 ;
      END
   END n_80052

   PIN n_80708
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 162.95 0.51 163.05 ;
      END
   END n_80708

   PIN n_81744
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 51.45 235.518 51.55 236.028 ;
      END
   END n_81744

   PIN n_82461
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 186.95 0.51 187.05 ;
      END
   END n_82461

   PIN n_83267
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 41.25 235.518 41.35 236.028 ;
      END
   END n_83267

   PIN n_85057
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 51.05 235.518 51.15 236.028 ;
      END
   END n_85057

   PIN n_89837
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 211.95 0.51 212.05 ;
      END
   END n_89837

   PIN n_89839
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 47.05 235.518 47.15 236.028 ;
      END
   END n_89839

   PIN n_90520
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 199.15 0.51 199.25 ;
      END
   END n_90520

   PIN n_90524
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 163.95 0.51 164.05 ;
      END
   END n_90524

   PIN n_92013
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 42.05 235.518 42.15 236.028 ;
      END
   END n_92013

   PIN n_94239
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 69.05 235.518 69.15 236.028 ;
      END
   END n_94239

   PIN n_94241
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 68.85 235.518 68.95 236.028 ;
      END
   END n_94241

   PIN n_96030
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 40.85 235.518 40.95 236.028 ;
      END
   END n_96030

   OBS
      LAYER via1 ;
         RECT 0 0 267.4 236.03 ;
      LAYER metal5 ;
         RECT 0.63 0.00 267.40 236.03 ;
      LAYER metal4 ;
         RECT 0.00 0.63 267.40 235.39 ;
      LAYER metal3 ;
         RECT 0.63 0.00 266.77 236.03 ;
      LAYER metal2 ;
         RECT 0.00 0.63 267.40 235.39 ;
      LAYER metal1 ;
         RECT 0.00 0.00 267.40 236.03 ;
   END
END h9

MACRO h8
   CLASS BLOCK ;
   FOREIGN h8 ;
   ORIGIN 0 0 ;
   SIZE 310.8 BY 336 ;
   SYMMETRY X Y R90 ;
   PIN FE_OFN15134_n_30145
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 164.15 0.51 164.25 ;
      END
   END FE_OFN15134_n_30145

   PIN FE_OFN15136_n_31158
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 276.95 0.51 277.05 ;
      END
   END FE_OFN15136_n_31158

   PIN FE_OFN16292_n_22751
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 103.45 0 103.55 0.51 ;
      END
   END FE_OFN16292_n_22751

   PIN FE_OFN17812_delay_mul_ln34_unr7_unr9_stage2_stallmux_z_11_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 40.45 0 40.55 0.51 ;
      END
   END FE_OFN17812_delay_mul_ln34_unr7_unr9_stage2_stallmux_z_11_

   PIN FE_OFN17822_n_137819
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 127.25 0 127.35 0.51 ;
      END
   END FE_OFN17822_n_137819

   PIN FE_OFN18396_n_31131
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 55.65 335.49 55.75 336 ;
      END
   END FE_OFN18396_n_31131

   PIN FE_OFN18402_n_30571
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 60.85 335.49 60.95 336 ;
      END
   END FE_OFN18402_n_30571

   PIN FE_OFN18458_n_29943
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 2.05 335.49 2.15 336 ;
      END
   END FE_OFN18458_n_29943

   PIN FE_OFN18462_n_28644
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 186.95 0.51 187.05 ;
      END
   END FE_OFN18462_n_28644

   PIN FE_OFN18464_n_28105
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 178.95 0.51 179.05 ;
      END
   END FE_OFN18464_n_28105

   PIN FE_OFN18466_n_27225
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 168.95 0.51 169.05 ;
      END
   END FE_OFN18466_n_27225

   PIN FE_OFN6270_delay_mul_ln34_unr7_unr4_stage2_stallmux_z_10_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 115.45 0 115.55 0.51 ;
      END
   END FE_OFN6270_delay_mul_ln34_unr7_unr4_stage2_stallmux_z_10_

   PIN FE_OFN6274_delay_mul_ln34_unr7_unr4_stage2_stallmux_z_9_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 223.65 0 223.75 0.51 ;
      END
   END FE_OFN6274_delay_mul_ln34_unr7_unr4_stage2_stallmux_z_9_

   PIN FE_OFN6330_delay_mul_ln34_unr7_unr4_stage2_stallmux_z_8_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 223.85 0 223.95 0.51 ;
      END
   END FE_OFN6330_delay_mul_ln34_unr7_unr4_stage2_stallmux_z_8_

   PIN FE_OFN6338_delay_mul_ln34_unr7_unr4_stage2_stallmux_z_6_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 131.85 0 131.95 0.51 ;
      END
   END FE_OFN6338_delay_mul_ln34_unr7_unr4_stage2_stallmux_z_6_

   PIN FE_OFN6340_delay_mul_ln34_unr7_unr4_stage2_stallmux_z_5_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 223.85 0 223.95 0.51 ;
      END
   END FE_OFN6340_delay_mul_ln34_unr7_unr4_stage2_stallmux_z_5_

   PIN FE_OFN8209_n_30818
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 308.15 0.51 308.25 ;
      END
   END FE_OFN8209_n_30818

   PIN FE_OFN8218_n_31243
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 125.65 335.49 125.75 336 ;
      END
   END FE_OFN8218_n_31243

   PIN FE_OFN8458_n_27222
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 254.95 0.51 255.05 ;
      END
   END FE_OFN8458_n_27222

   PIN FE_OFN8463_n_25371
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 196.95 0.51 197.05 ;
      END
   END FE_OFN8463_n_25371

   PIN FE_OFN8467_n_24044
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 271.75 0.51 271.85 ;
      END
   END FE_OFN8467_n_24044

   PIN FE_OFN8627_n_30345
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 116.65 335.49 116.75 336 ;
      END
   END FE_OFN8627_n_30345

   PIN FE_OFN8630_n_30620
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 294.95 0.51 295.05 ;
      END
   END FE_OFN8630_n_30620

   PIN FE_OFN8631_n_30852
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 33.65 335.49 33.75 336 ;
      END
   END FE_OFN8631_n_30852

   PIN FE_OFN8633_n_31042
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 240.95 0.51 241.05 ;
      END
   END FE_OFN8633_n_31042

   PIN FE_OFN8640_n_30028
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 113.85 335.49 113.95 336 ;
      END
   END FE_OFN8640_n_30028

   PIN FE_OFN8642_n_29615
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 295.95 0.51 296.05 ;
      END
   END FE_OFN8642_n_29615

   PIN FE_OFN8663_n_28865
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 79.95 0.51 80.05 ;
      END
   END FE_OFN8663_n_28865

   PIN FE_OFN8665_n_29329
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 67.95 0.51 68.05 ;
      END
   END FE_OFN8665_n_29329

   PIN FE_OFN8668_n_30136
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 120.85 0 120.95 0.51 ;
      END
   END FE_OFN8668_n_30136

   PIN FE_OFN8673_n_27200
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 103.65 0 103.75 0.51 ;
      END
   END FE_OFN8673_n_27200

   PIN FE_OFN8689_n_6646
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 92.05 0 92.15 0.51 ;
      END
   END FE_OFN8689_n_6646

   PIN FE_OFN8711_n_27536
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 182.95 0.51 183.05 ;
      END
   END FE_OFN8711_n_27536

   PIN FE_OFN8834_n_25354
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 139.45 0 139.55 0.51 ;
      END
   END FE_OFN8834_n_25354

   PIN FE_OFN8838_n_24020
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 163.45 0 163.55 0.51 ;
      END
   END FE_OFN8838_n_24020

   PIN FE_OFN8841_n_22184
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 103.85 0 103.95 0.51 ;
      END
   END FE_OFN8841_n_22184

   PIN FE_OFN9032_n_18065
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 7.85 0 7.95 0.51 ;
      END
   END FE_OFN9032_n_18065

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_q_10_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 139.65 0 139.75 0.51 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_q_10_

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_q_11_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 163.85 0 163.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_q_11_

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_q_13_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 175.65 0 175.75 0.51 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_q_13_

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_q_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 187.85 0 187.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_q_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 71.85 0 71.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_q_7_

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_q_8_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 55.25 0 55.35 0.51 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_q_8_

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_q_9_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 55.45 0 55.55 0.51 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_q_9_

   PIN delay_mul_ln34_unr7_unr2_stage2_stallmux_q_15_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 91.85 0 91.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr2_stage2_stallmux_q_15_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_q_0_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 235.65 0 235.75 0.51 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_q_0_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_q_11_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 295.85 0 295.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_q_11_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_q_12_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 259.85 0 259.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_q_12_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_q_13_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 88.95 310.8 89.05 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_q_13_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_q_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 94.95 310.8 95.05 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_q_15_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 284.25 0 284.35 0.51 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_q_15_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_q_1_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 224.05 0 224.15 0.51 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_q_1_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_q_2_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 235.85 0 235.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_q_2_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_q_3_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 235.85 0 235.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_q_3_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_q_4_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 271.85 0 271.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_q_4_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_q_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 296.05 0 296.15 0.51 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_q_7_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_q_10_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 175.85 0 175.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_q_10_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_q_11_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 175.85 0 175.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_q_11_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_q_12_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 112.05 0 112.15 0.51 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_q_12_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_q_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 152.05 0 152.15 0.51 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_q_15_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 199.85 0 199.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_q_15_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_q_1_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 139.85 0 139.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_q_1_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_q_4_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 32.25 0 32.35 0.51 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_q_4_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_q_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 163.85 0 163.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_q_7_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_q_8_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 91.85 0 91.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_q_8_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_q_9_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 176.05 0 176.15 0.51 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_q_9_

   PIN delay_mul_ln34_unr7_unr9_stage2_stallmux_z_10_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 19.85 0 19.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr9_stage2_stallmux_z_10_

   PIN delay_mul_ln34_unr7_unr9_stage2_stallmux_z_6_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 15.25 0 15.35 0.51 ;
      END
   END delay_mul_ln34_unr7_unr9_stage2_stallmux_z_6_

   PIN delay_mul_ln34_unr7_unr9_stage2_stallmux_z_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 16.25 0 16.35 0.51 ;
      END
   END delay_mul_ln34_unr7_unr9_stage2_stallmux_z_7_

   PIN delay_mul_ln34_unr7_unr9_stage2_stallmux_z_8_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 14.95 310.8 15.05 ;
      END
   END delay_mul_ln34_unr7_unr9_stage2_stallmux_z_8_

   PIN delay_mul_ln34_unr7_unr9_stage2_stallmux_z_9_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 14.85 0 14.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr9_stage2_stallmux_z_9_

   PIN delay_mul_ln34_unr8_unr7_stage2_stallmux_q_15_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 59.15 0.51 59.25 ;
      END
   END delay_mul_ln34_unr8_unr7_stage2_stallmux_q_15_

   PIN delay_mul_ln34_unr9_unr6_stage2_stallmux_q_12_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 110.65 0 110.75 0.51 ;
      END
   END delay_mul_ln34_unr9_unr6_stage2_stallmux_q_12_

   PIN delay_mul_ln34_unr9_unr6_stage2_stallmux_q_13_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 101.05 0 101.15 0.51 ;
      END
   END delay_mul_ln34_unr9_unr6_stage2_stallmux_q_13_

   PIN delay_mul_ln34_unr9_unr6_stage2_stallmux_q_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 102.45 0 102.55 0.51 ;
      END
   END delay_mul_ln34_unr9_unr6_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr9_unr6_stage2_stallmux_q_15_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 64.65 0 64.75 0.51 ;
      END
   END delay_mul_ln34_unr9_unr6_stage2_stallmux_q_15_

   PIN delay_mul_ln34_unr9_unr6_stage2_stallmux_z_10_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 76.65 0 76.75 0.51 ;
      END
   END delay_mul_ln34_unr9_unr6_stage2_stallmux_z_10_

   PIN delay_mul_ln34_unr9_unr6_stage2_stallmux_z_11_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 132.05 0 132.15 0.51 ;
      END
   END delay_mul_ln34_unr9_unr6_stage2_stallmux_z_11_

   PIN delay_mul_ln34_unr9_unr6_stage2_stallmux_z_9_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 80.25 0 80.35 0.51 ;
      END
   END delay_mul_ln34_unr9_unr6_stage2_stallmux_z_9_

   PIN n_104375
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 43.75 0.51 43.85 ;
      END
   END n_104375

   PIN n_106153
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 44.15 0.51 44.25 ;
      END
   END n_106153

   PIN n_107402
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 262.95 0.51 263.05 ;
      END
   END n_107402

   PIN n_110538
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 20.75 0.51 20.85 ;
      END
   END n_110538

   PIN n_122192
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 249.15 0.51 249.25 ;
      END
   END n_122192

   PIN n_144102
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 78.65 0 78.75 0.51 ;
      END
   END n_144102

   PIN n_18141
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 140.05 0 140.15 0.51 ;
      END
   END n_18141

   PIN n_18874
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 55.85 335.49 55.95 336 ;
      END
   END n_18874

   PIN n_19306
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 47.65 0 47.75 0.51 ;
      END
   END n_19306

   PIN n_19638
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 139.15 0.51 139.25 ;
      END
   END n_19638

   PIN n_19982
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 231.15 0.51 231.25 ;
      END
   END n_19982

   PIN n_19998
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 223.95 0.51 224.05 ;
      END
   END n_19998

   PIN n_21907
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 84.45 0 84.55 0.51 ;
      END
   END n_21907

   PIN n_23034
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 102.05 335.49 102.15 336 ;
      END
   END n_23034

   PIN n_23348
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 164.05 0 164.15 0.51 ;
      END
   END n_23348

   PIN n_23375
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 296.15 0.51 296.25 ;
      END
   END n_23375

   PIN n_24065
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 41.45 0 41.55 0.51 ;
      END
   END n_24065

   PIN n_24315
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 135.15 0.51 135.25 ;
      END
   END n_24315

   PIN n_24449
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 156.85 0 156.95 0.51 ;
      END
   END n_24449

   PIN n_24653
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 148.85 0 148.95 0.51 ;
      END
   END n_24653

   PIN n_24674
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 247.95 0.51 248.05 ;
      END
   END n_24674

   PIN n_24729
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 157.65 0 157.75 0.51 ;
      END
   END n_24729

   PIN n_24782
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 156.05 0 156.15 0.51 ;
      END
   END n_24782

   PIN n_24783
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 155.65 0 155.75 0.51 ;
      END
   END n_24783

   PIN n_25168
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 150.25 0 150.35 0.51 ;
      END
   END n_25168

   PIN n_25376
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 122.95 0.51 123.05 ;
      END
   END n_25376

   PIN n_25386
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 38.65 0 38.75 0.51 ;
      END
   END n_25386

   PIN n_25409
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 308.35 0.51 308.45 ;
      END
   END n_25409

   PIN n_25453
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 295.85 0 295.95 0.51 ;
      END
   END n_25453

   PIN n_25807
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 150.65 0 150.75 0.51 ;
      END
   END n_25807

   PIN n_26004
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 250.65 335.49 250.75 336 ;
      END
   END n_26004

   PIN n_26006
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 140.95 0.51 141.05 ;
      END
   END n_26006

   PIN n_26016
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 102.85 0 102.95 0.51 ;
      END
   END n_26016

   PIN n_26061
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 139.85 0 139.95 0.51 ;
      END
   END n_26061

   PIN n_26618
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 132.05 0 132.15 0.51 ;
      END
   END n_26618

   PIN n_26619
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 139.65 0 139.75 0.51 ;
      END
   END n_26619

   PIN n_26638
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 144.95 0.51 145.05 ;
      END
   END n_26638

   PIN n_26650
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 320.15 0.51 320.25 ;
      END
   END n_26650

   PIN n_26651
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 103.05 0 103.15 0.51 ;
      END
   END n_26651

   PIN n_26674
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 175.35 0.51 175.45 ;
      END
   END n_26674

   PIN n_27195
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 126.65 0 126.75 0.51 ;
      END
   END n_27195

   PIN n_27239
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 47.45 0 47.55 0.51 ;
      END
   END n_27239

   PIN n_27295
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 188.15 0.51 188.25 ;
      END
   END n_27295

   PIN n_27323
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 136.45 0 136.55 0.51 ;
      END
   END n_27323

   PIN n_27563
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 103.25 0 103.35 0.51 ;
      END
   END n_27563

   PIN n_27656
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 77.05 0 77.15 0.51 ;
      END
   END n_27656

   PIN n_27657
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 77.25 0 77.35 0.51 ;
      END
   END n_27657

   PIN n_27696
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 125.85 0 125.95 0.51 ;
      END
   END n_27696

   PIN n_27719
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 127.45 0 127.55 0.51 ;
      END
   END n_27719

   PIN n_27864
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 320.35 0.51 320.45 ;
      END
   END n_27864

   PIN n_27896
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 152.95 0.51 153.05 ;
      END
   END n_27896

   PIN n_27914
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 131.05 0 131.15 0.51 ;
      END
   END n_27914

   PIN n_27936
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 125.45 0 125.55 0.51 ;
      END
   END n_27936

   PIN n_28388
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 320.55 0.51 320.65 ;
      END
   END n_28388

   PIN n_28444
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 149.35 0.51 149.45 ;
      END
   END n_28444

   PIN n_28624
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 136.95 0.51 137.05 ;
      END
   END n_28624

   PIN n_28690
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 144.95 0.51 145.05 ;
      END
   END n_28690

   PIN n_28758
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 138.95 0.51 139.05 ;
      END
   END n_28758

   PIN n_28891
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 19.85 335.49 19.95 336 ;
      END
   END n_28891

   PIN n_29119
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 2.45 335.49 2.55 336 ;
      END
   END n_29119

   PIN n_29177
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 163.75 0.51 163.85 ;
      END
   END n_29177

   PIN n_29352
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 308.55 0.51 308.65 ;
      END
   END n_29352

   PIN n_29433
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 113.65 0 113.75 0.51 ;
      END
   END n_29433

   PIN n_29550
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 179.15 0.51 179.25 ;
      END
   END n_29550

   PIN n_29572
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 70.25 335.49 70.35 336 ;
      END
   END n_29572

   PIN n_29666
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 114.65 0 114.75 0.51 ;
      END
   END n_29666

   PIN n_29667
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 113.85 0 113.95 0.51 ;
      END
   END n_29667

   PIN n_29966
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 71.05 335.49 71.15 336 ;
      END
   END n_29966

   PIN n_30272
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 194.95 0.51 195.05 ;
      END
   END n_30272

   PIN n_30290
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 63.25 335.49 63.35 336 ;
      END
   END n_30290

   PIN n_30440
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 10.95 310.8 11.05 ;
      END
   END n_30440

   PIN n_30553
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 204.95 0.51 205.05 ;
      END
   END n_30553

   PIN n_30797
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 175.55 0.51 175.65 ;
      END
   END n_30797

   PIN n_30876
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 197.15 0.51 197.25 ;
      END
   END n_30876

   PIN n_31014
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 43.85 335.49 43.95 336 ;
      END
   END n_31014

   PIN n_31307
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 32.75 0.51 32.85 ;
      END
   END n_31307

   PIN n_31336
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 259.85 335.49 259.95 336 ;
      END
   END n_31336

   PIN n_31495
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 32.95 0.51 33.05 ;
      END
   END n_31495

   PIN n_31518
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 20.65 335.49 20.75 336 ;
      END
   END n_31518

   PIN n_41192
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 116.15 0.51 116.25 ;
      END
   END n_41192

   PIN n_4674
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 95.25 0 95.35 0.51 ;
      END
   END n_4674

   PIN n_4824
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 78.85 0 78.95 0.51 ;
      END
   END n_4824

   PIN n_4835
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 91.65 0 91.75 0.51 ;
      END
   END n_4835

   PIN n_50249
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 66.45 0 66.55 0.51 ;
      END
   END n_50249

   PIN n_50280
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 32.15 0.51 32.25 ;
      END
   END n_50280

   PIN n_50309
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 24.15 0.51 24.25 ;
      END
   END n_50309

   PIN n_52277
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 4.15 0.51 4.25 ;
      END
   END n_52277

   PIN n_55135
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 3.95 0.51 4.05 ;
      END
   END n_55135

   PIN n_58287
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 4.95 0.51 5.05 ;
      END
   END n_58287

   PIN n_60578
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 2.05 0 2.15 0.51 ;
      END
   END n_60578

   PIN n_61454
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 139.35 0.51 139.45 ;
      END
   END n_61454

   PIN n_62185
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 257.35 0.51 257.45 ;
      END
   END n_62185

   PIN n_62568
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 92.15 0.51 92.25 ;
      END
   END n_62568

   PIN n_65731
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 55.75 0.51 55.85 ;
      END
   END n_65731

   PIN n_65737
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 55.55 0.51 55.65 ;
      END
   END n_65737

   PIN n_71280
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 76.25 0 76.35 0.51 ;
      END
   END n_71280

   PIN n_71289
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 57.45 0 57.55 0.51 ;
      END
   END n_71289

   PIN n_95526
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 35.65 0 35.75 0.51 ;
      END
   END n_95526

   PIN n_95541
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 24.35 0.51 24.45 ;
      END
   END n_95541

   PIN n_97764
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 32.35 0.51 32.45 ;
      END
   END n_97764

   PIN FE_OFN13766_n_21642
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 73.85 0 73.95 0.51 ;
      END
   END FE_OFN13766_n_21642

   PIN FE_OFN17030_n_96760
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 257.15 0.51 257.25 ;
      END
   END FE_OFN17030_n_96760

   PIN FE_OFN17827_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_11_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 284.35 0.51 284.45 ;
      END
   END FE_OFN17827_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_11_

   PIN FE_OFN17829_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_10_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 103.95 0.51 104.05 ;
      END
   END FE_OFN17829_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_10_

   PIN FE_OFN17831_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_9_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 187.95 0.51 188.05 ;
      END
   END FE_OFN17831_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_9_

   PIN FE_OFN18446_n_30620
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 55.65 0 55.75 0.51 ;
      END
   END FE_OFN18446_n_30620

   PIN FE_OFN18448_n_30852
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 50.85 0 50.95 0.51 ;
      END
   END FE_OFN18448_n_30852

   PIN FE_OFN18457_n_27906
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 76.45 0 76.55 0.51 ;
      END
   END FE_OFN18457_n_27906

   PIN FE_OFN18870_n_30145
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 76.95 310.8 77.05 ;
      END
   END FE_OFN18870_n_30145

   PIN FE_OFN2315_delay_mul_ln34_unr9_unr5_stage2_stallmux_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 248.15 0.51 248.25 ;
      END
   END FE_OFN2315_delay_mul_ln34_unr9_unr5_stage2_stallmux_z_14_

   PIN FE_OFN2340_delay_mul_ln34_unr9_unr5_stage2_stallmux_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 270.95 0.51 271.05 ;
      END
   END FE_OFN2340_delay_mul_ln34_unr9_unr5_stage2_stallmux_z_13_

   PIN FE_OFN2342_delay_mul_ln34_unr9_unr5_stage2_stallmux_z_12_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 275.15 0.51 275.25 ;
      END
   END FE_OFN2342_delay_mul_ln34_unr9_unr5_stage2_stallmux_z_12_

   PIN FE_OFN271_delay_mul_ln34_unr8_unr5_stage2_stallmux_z_11_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 172.95 0.51 173.05 ;
      END
   END FE_OFN271_delay_mul_ln34_unr8_unr5_stage2_stallmux_z_11_

   PIN FE_OFN273_delay_mul_ln34_unr8_unr5_stage2_stallmux_z_10_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 164.95 0.51 165.05 ;
      END
   END FE_OFN273_delay_mul_ln34_unr8_unr5_stage2_stallmux_z_10_

   PIN FE_OFN275_delay_mul_ln34_unr8_unr5_stage2_stallmux_z_9_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 159.15 0.51 159.25 ;
      END
   END FE_OFN275_delay_mul_ln34_unr8_unr5_stage2_stallmux_z_9_

   PIN FE_OFN287_delay_mul_ln34_unr8_unr5_stage2_stallmux_z_7_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 44.35 0.51 44.45 ;
      END
   END FE_OFN287_delay_mul_ln34_unr8_unr5_stage2_stallmux_z_7_

   PIN FE_OFN6173_n_8289
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 116.15 0.51 116.25 ;
      END
   END FE_OFN6173_n_8289

   PIN FE_OFN6175_n_6867
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 151.35 0.51 151.45 ;
      END
   END FE_OFN6175_n_6867

   PIN FE_OFN6245_delay_mul_ln34_unr7_unr5_stage2_stallmux_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 8.45 0 8.55 0.51 ;
      END
   END FE_OFN6245_delay_mul_ln34_unr7_unr5_stage2_stallmux_z_14_

   PIN FE_OFN6275_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_7_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 163.55 0.51 163.65 ;
      END
   END FE_OFN6275_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_7_

   PIN FE_OFN6277_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 65.15 0.51 65.25 ;
      END
   END FE_OFN6277_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_6_

   PIN FE_OFN6279_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 91.95 0.51 92.05 ;
      END
   END FE_OFN6279_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_5_

   PIN FE_OFN6281_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 67.75 0.51 67.85 ;
      END
   END FE_OFN6281_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_4_

   PIN FE_OFN6321_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_8_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 79.75 0.51 79.85 ;
      END
   END FE_OFN6321_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_8_

   PIN FE_OFN6326_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_7_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 108.15 0.51 108.25 ;
      END
   END FE_OFN6326_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_7_

   PIN FE_OFN6347_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 76.95 0.51 77.05 ;
      END
   END FE_OFN6347_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_6_

   PIN FE_OFN6350_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 52.95 0.51 53.05 ;
      END
   END FE_OFN6350_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_5_

   PIN FE_OFN6354_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 91.75 0.51 91.85 ;
      END
   END FE_OFN6354_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_4_

   PIN FE_OFN6429_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_3_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 56.95 0.51 57.05 ;
      END
   END FE_OFN6429_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_3_

   PIN FE_OFN6431_n_137681
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 127.95 0.51 128.05 ;
      END
   END FE_OFN6431_n_137681

   PIN FE_OFN6433_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 139.95 0.51 140.05 ;
      END
   END FE_OFN6433_delay_mul_ln34_unr7_unr2_stage2_stallmux_z_2_

   PIN FE_OFN6479_n_137683
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 68.15 0.51 68.25 ;
      END
   END FE_OFN6479_n_137683

   PIN FE_OFN6662_n_41611
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 7.3 0.255 7.5 ;
      END
   END FE_OFN6662_n_41611

   PIN FE_OFN6700_n_41708
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 20.55 0.51 20.65 ;
      END
   END FE_OFN6700_n_41708

   PIN FE_OFN8635_n_31158
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 68.35 0.51 68.45 ;
      END
   END FE_OFN8635_n_31158

   PIN FE_OFN8637_n_31365
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 128.15 0.51 128.25 ;
      END
   END FE_OFN8637_n_31365

   PIN FE_OFN8669_n_30440
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 8.95 310.8 9.05 ;
      END
   END FE_OFN8669_n_30440

   PIN FE_OFN8781_n_22213
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 78.85 0 78.95 0.51 ;
      END
   END FE_OFN8781_n_22213

   PIN FE_OFN8824_n_28157
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 127.15 0.51 127.25 ;
      END
   END FE_OFN8824_n_28157

   PIN FE_OFN8827_n_26678
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 86.95 0.51 87.05 ;
      END
   END FE_OFN8827_n_26678

   PIN FE_OFN8830_n_26043
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 128.15 0.51 128.25 ;
      END
   END FE_OFN8830_n_26043

   PIN FE_OFN8832_n_25413
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 149.15 0.51 149.25 ;
      END
   END FE_OFN8832_n_25413

   PIN FE_OFN8942_n_30544
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 46.95 0.51 47.05 ;
      END
   END FE_OFN8942_n_30544

   PIN FE_OFN8993_n_25980
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 93.85 0 93.95 0.51 ;
      END
   END FE_OFN8993_n_25980

   PIN FE_OFN8995_n_26605
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 97.05 0 97.15 0.51 ;
      END
   END FE_OFN8995_n_26605

   PIN FE_OFN8997_n_27189
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 100.85 0 100.95 0.51 ;
      END
   END FE_OFN8997_n_27189

   PIN FE_OFN9000_n_27824
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 104.45 0 104.55 0.51 ;
      END
   END FE_OFN9000_n_27824

   PIN FE_OFN9002_n_28346
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 107.45 0 107.55 0.51 ;
      END
   END FE_OFN9002_n_28346

   PIN FE_OFN9004_n_28856
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 112.25 0 112.35 0.51 ;
      END
   END FE_OFN9004_n_28856

   PIN FE_OFN9005_n_25363
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 92.65 0 92.75 0.51 ;
      END
   END FE_OFN9005_n_25363

   PIN FE_OFN9008_n_24657
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 86.65 0 86.75 0.51 ;
      END
   END FE_OFN9008_n_24657

   PIN FE_OFN9009_n_24023
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 86.65 0 86.75 0.51 ;
      END
   END FE_OFN9009_n_24023

   PIN FE_OFN9011_n_23352
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 83.45 0 83.55 0.51 ;
      END
   END FE_OFN9011_n_23352

   PIN FE_OFN9013_n_22755
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 81.65 0 81.75 0.51 ;
      END
   END FE_OFN9013_n_22755

   PIN FE_OFN9015_n_22188
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 76.05 0 76.15 0.51 ;
      END
   END FE_OFN9015_n_22188

   PIN FE_OFN9019_n_21114
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 71.65 0 71.75 0.51 ;
      END
   END FE_OFN9019_n_21114

   PIN FE_OFN9021_n_20861
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 77.65 0 77.75 0.51 ;
      END
   END FE_OFN9021_n_20861

   PIN FE_OFN9025_n_16099
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 67.45 0 67.55 0.51 ;
      END
   END FE_OFN9025_n_16099

   PIN FE_OFN9031_n_18065
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 259.95 310.8 260.05 ;
      END
   END FE_OFN9031_n_18065

   PIN FE_OFN9051_n_26309
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 58.45 0 58.55 0.51 ;
      END
   END FE_OFN9051_n_26309

   PIN FE_OFN9053_n_26017
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 47.25 0 47.35 0.51 ;
      END
   END FE_OFN9053_n_26017

   PIN FE_OFN9055_n_25387
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 44.65 0 44.75 0.51 ;
      END
   END FE_OFN9055_n_25387

   PIN FE_OFN9057_n_24692
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 39.45 0 39.55 0.51 ;
      END
   END FE_OFN9057_n_24692

   PIN FE_OFN9059_n_24066
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 20.05 0 20.15 0.51 ;
      END
   END FE_OFN9059_n_24066

   PIN FE_OFN9061_n_22807
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 39.05 0 39.15 0.51 ;
      END
   END FE_OFN9061_n_22807

   PIN FE_OFN9065_n_18510
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 44.45 0 44.55 0.51 ;
      END
   END FE_OFN9065_n_18510

   PIN FE_OFN9227_delay_add_ln34_unr2_unr5_stage2_stallmux_q_15_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 93.95 0.51 94.05 ;
      END
   END FE_OFN9227_delay_add_ln34_unr2_unr5_stage2_stallmux_q_15_

   PIN FE_OFN9455_b_7_9_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 6.95 0.51 7.05 ;
      END
   END FE_OFN9455_b_7_9_1

   PIN FE_OFN9459_b_7_9_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 3.95 0.51 4.05 ;
      END
   END FE_OFN9459_b_7_9_0

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_q_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 247.35 0.51 247.45 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_q_2_

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_q_3_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 276.15 0.51 276.25 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_q_3_

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 223.15 0.51 223.25 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_z_13_

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 192.15 0.51 192.25 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_z_14_

   PIN delay_mul_ln34_unr7_unr2_stage2_stallmux_z_12_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 236.15 0.51 236.25 ;
      END
   END delay_mul_ln34_unr7_unr2_stage2_stallmux_z_12_

   PIN delay_mul_ln34_unr7_unr2_stage2_stallmux_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 247.75 0.51 247.85 ;
      END
   END delay_mul_ln34_unr7_unr2_stage2_stallmux_z_13_

   PIN delay_mul_ln34_unr7_unr2_stage2_stallmux_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 248.15 0.51 248.25 ;
      END
   END delay_mul_ln34_unr7_unr2_stage2_stallmux_z_14_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_10_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 152.15 0.51 152.25 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_10_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_11_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 212.15 0.51 212.25 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_11_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_12_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 259.15 0.51 259.25 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_12_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 284.15 0.51 284.25 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_13_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 307.95 0.51 308.05 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_14_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 187.75 0.51 187.85 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_2_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_3_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 199.35 0.51 199.45 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_3_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 200.15 0.51 200.25 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_4_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 175.15 0.51 175.25 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_5_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 211.15 0.51 211.25 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_6_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_7_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 210.95 0.51 211.05 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_7_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_8_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 178.15 0.51 178.25 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_8_

   PIN delay_mul_ln34_unr7_unr4_stage2_stallmux_z_9_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 235.15 0.51 235.25 ;
      END
   END delay_mul_ln34_unr7_unr4_stage2_stallmux_z_9_

   PIN delay_mul_ln34_unr7_unr5_stage2_stallmux_z_12_
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 18.25 0 18.35 0.51 ;
      END
   END delay_mul_ln34_unr7_unr5_stage2_stallmux_z_12_

   PIN delay_mul_ln34_unr7_unr5_stage2_stallmux_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 14.65 0 14.75 0.51 ;
      END
   END delay_mul_ln34_unr7_unr5_stage2_stallmux_z_13_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_z_12_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 58.95 0.51 59.05 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_z_12_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 115.95 0.51 116.05 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_z_14_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_z_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 79.55 0.51 79.65 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_z_4_

   PIN delay_mul_ln34_unr7_unr6_stage2_stallmux_z_7_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 91.55 0.51 91.65 ;
      END
   END delay_mul_ln34_unr7_unr6_stage2_stallmux_z_7_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_q_0_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 138.35 310.8 138.45 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_q_0_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_q_11_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 180.95 310.8 181.05 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_q_11_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_q_12_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 196.95 310.8 197.05 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_q_12_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_q_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 107.95 310.8 108.05 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_q_2_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_q_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 154.95 0.51 155.05 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_q_6_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_q_7_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 319.95 0.51 320.05 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_q_7_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_q_8_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 116.75 0.51 116.85 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_q_8_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_z_10_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 174.95 310.8 175.05 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_z_10_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 206.95 310.8 207.05 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_z_13_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 224.15 310.8 224.25 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_z_14_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_z_3_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 310.29 140.95 310.8 141.05 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_z_3_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_z_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 147.35 310.8 147.45 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_z_4_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_z_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 150.95 310.8 151.05 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_z_5_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_z_9_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 170.95 310.8 171.05 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_z_9_

   PIN delay_mul_ln34_unr8_unr2_stage2_stallmux_q_10_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 126.85 0 126.95 0.51 ;
      END
   END delay_mul_ln34_unr8_unr2_stage2_stallmux_q_10_

   PIN delay_mul_ln34_unr8_unr2_stage2_stallmux_q_11_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 139.05 0 139.15 0.51 ;
      END
   END delay_mul_ln34_unr8_unr2_stage2_stallmux_q_11_

   PIN delay_mul_ln34_unr8_unr2_stage2_stallmux_q_12_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 120.05 0 120.15 0.51 ;
      END
   END delay_mul_ln34_unr8_unr2_stage2_stallmux_q_12_

   PIN delay_mul_ln34_unr8_unr2_stage2_stallmux_q_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 113.45 0 113.55 0.51 ;
      END
   END delay_mul_ln34_unr8_unr2_stage2_stallmux_q_13_

   PIN delay_mul_ln34_unr8_unr2_stage2_stallmux_q_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 118.05 0 118.15 0.51 ;
      END
   END delay_mul_ln34_unr8_unr2_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr8_unr2_stage2_stallmux_q_15_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 95.45 0 95.55 0.51 ;
      END
   END delay_mul_ln34_unr8_unr2_stage2_stallmux_q_15_

   PIN delay_mul_ln34_unr8_unr2_stage2_stallmux_q_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 163.65 0 163.75 0.51 ;
      END
   END delay_mul_ln34_unr8_unr2_stage2_stallmux_q_5_

   PIN delay_mul_ln34_unr8_unr2_stage2_stallmux_q_8_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 140.05 0 140.15 0.51 ;
      END
   END delay_mul_ln34_unr8_unr2_stage2_stallmux_q_8_

   PIN delay_mul_ln34_unr8_unr3_stage2_stallmux_q_7_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 126.95 0.51 127.05 ;
      END
   END delay_mul_ln34_unr8_unr3_stage2_stallmux_q_7_

   PIN delay_mul_ln34_unr8_unr3_stage2_stallmux_z_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 148.95 310.8 149.05 ;
      END
   END delay_mul_ln34_unr8_unr3_stage2_stallmux_z_2_

   PIN delay_mul_ln34_unr8_unr3_stage2_stallmux_z_3_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 139.95 310.8 140.05 ;
      END
   END delay_mul_ln34_unr8_unr3_stage2_stallmux_z_3_

   PIN delay_mul_ln34_unr8_unr3_stage2_stallmux_z_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 139.75 310.8 139.85 ;
      END
   END delay_mul_ln34_unr8_unr3_stage2_stallmux_z_4_

   PIN delay_mul_ln34_unr8_unr3_stage2_stallmux_z_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 147.15 310.8 147.25 ;
      END
   END delay_mul_ln34_unr8_unr3_stage2_stallmux_z_5_

   PIN delay_mul_ln34_unr8_unr3_stage2_stallmux_z_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 142.95 310.8 143.05 ;
      END
   END delay_mul_ln34_unr8_unr3_stage2_stallmux_z_6_

   PIN delay_mul_ln34_unr8_unr5_stage2_stallmux_q_0_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 284.05 0 284.15 0.51 ;
      END
   END delay_mul_ln34_unr8_unr5_stage2_stallmux_q_0_

   PIN delay_mul_ln34_unr8_unr5_stage2_stallmux_q_12_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 181.15 0.51 181.25 ;
      END
   END delay_mul_ln34_unr8_unr5_stage2_stallmux_q_12_

   PIN delay_mul_ln34_unr8_unr5_stage2_stallmux_q_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 186.95 310.8 187.05 ;
      END
   END delay_mul_ln34_unr8_unr5_stage2_stallmux_q_13_

   PIN delay_mul_ln34_unr8_unr5_stage2_stallmux_q_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 184.95 310.8 185.05 ;
      END
   END delay_mul_ln34_unr8_unr5_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr8_unr5_stage2_stallmux_q_1_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 80.35 0.51 80.45 ;
      END
   END delay_mul_ln34_unr8_unr5_stage2_stallmux_q_1_

   PIN delay_mul_ln34_unr8_unr5_stage2_stallmux_q_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 55.95 0.51 56.05 ;
      END
   END delay_mul_ln34_unr8_unr5_stage2_stallmux_q_2_

   PIN delay_mul_ln34_unr8_unr5_stage2_stallmux_q_3_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 124.95 0.51 125.05 ;
      END
   END delay_mul_ln34_unr8_unr5_stage2_stallmux_q_3_

   PIN delay_mul_ln34_unr8_unr5_stage2_stallmux_q_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 55.85 0 55.95 0.51 ;
      END
   END delay_mul_ln34_unr8_unr5_stage2_stallmux_q_4_

   PIN delay_mul_ln34_unr8_unr5_stage2_stallmux_q_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 93.05 335.49 93.15 336 ;
      END
   END delay_mul_ln34_unr8_unr5_stage2_stallmux_q_5_

   PIN delay_mul_ln34_unr8_unr5_stage2_stallmux_q_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 103.95 310.8 104.05 ;
      END
   END delay_mul_ln34_unr8_unr5_stage2_stallmux_q_6_

   PIN delay_mul_ln34_unr8_unr5_stage2_stallmux_q_8_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 150.95 0.51 151.05 ;
      END
   END delay_mul_ln34_unr8_unr5_stage2_stallmux_q_8_

   PIN delay_mul_ln34_unr8_unr8_stage2_stallmux_q_0_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 283.85 0 283.95 0.51 ;
      END
   END delay_mul_ln34_unr8_unr8_stage2_stallmux_q_0_

   PIN delay_mul_ln34_unr8_unr8_stage2_stallmux_q_1_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 199.85 0 199.95 0.51 ;
      END
   END delay_mul_ln34_unr8_unr8_stage2_stallmux_q_1_

   PIN delay_mul_ln34_unr8_unr8_stage2_stallmux_q_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 211.85 0 211.95 0.51 ;
      END
   END delay_mul_ln34_unr8_unr8_stage2_stallmux_q_2_

   PIN delay_mul_ln34_unr8_unr8_stage2_stallmux_q_3_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 247.85 0 247.95 0.51 ;
      END
   END delay_mul_ln34_unr8_unr8_stage2_stallmux_q_3_

   PIN delay_mul_ln34_unr8_unr8_stage2_stallmux_q_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 247.65 0 247.75 0.51 ;
      END
   END delay_mul_ln34_unr8_unr8_stage2_stallmux_q_4_

   PIN delay_mul_ln34_unr8_unr8_stage2_stallmux_q_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 247.45 0 247.55 0.51 ;
      END
   END delay_mul_ln34_unr8_unr8_stage2_stallmux_q_5_

   PIN delay_mul_ln34_unr9_unr5_stage2_stallmux_q_0_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 230.95 0.51 231.05 ;
      END
   END delay_mul_ln34_unr9_unr5_stage2_stallmux_q_0_

   PIN delay_mul_ln34_unr9_unr5_stage2_stallmux_z_11_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 274.95 0.51 275.05 ;
      END
   END delay_mul_ln34_unr9_unr5_stage2_stallmux_z_11_

   PIN ispd_clk
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 68.05 0 68.15 0.51 ;
      END
   END ispd_clk

   PIN mul_4731_72_n_174
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 223.35 0.51 223.45 ;
      END
   END mul_4731_72_n_174

   PIN mul_4731_72_n_176
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 261.55 0.51 261.65 ;
      END
   END mul_4731_72_n_176

   PIN n_100254
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 10.15 0.51 10.25 ;
      END
   END n_100254

   PIN n_104153
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 261.95 0.51 262.05 ;
      END
   END n_104153

   PIN n_104383
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 3.75 0.51 3.85 ;
      END
   END n_104383

   PIN n_104960
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 20.35 0.51 20.45 ;
      END
   END n_104960

   PIN n_106245
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 3.75 0.51 3.85 ;
      END
   END n_106245

   PIN n_107448
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 32.05 0 32.15 0.51 ;
      END
   END n_107448

   PIN n_11190
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 115.75 0.51 115.85 ;
      END
   END n_11190

   PIN n_11199
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 222.95 0.51 223.05 ;
      END
   END n_11199

   PIN n_115952
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 249.35 0.51 249.45 ;
      END
   END n_115952

   PIN n_116008
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 248.95 0.51 249.05 ;
      END
   END n_116008

   PIN n_119100
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 211.75 0.51 211.85 ;
      END
   END n_119100

   PIN n_123852
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 249.95 0.51 250.05 ;
      END
   END n_123852

   PIN n_137677
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 80.15 0.51 80.25 ;
      END
   END n_137677

   PIN n_137679
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 115.55 0.51 115.65 ;
      END
   END n_137679

   PIN n_137732
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 146.95 310.8 147.05 ;
      END
   END n_137732

   PIN n_137734
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 136.95 310.8 137.05 ;
      END
   END n_137734

   PIN n_137750
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 283.95 0.51 284.05 ;
      END
   END n_137750

   PIN n_137752
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 64.95 0.51 65.05 ;
      END
   END n_137752

   PIN n_137754
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 94.15 0.51 94.25 ;
      END
   END n_137754

   PIN n_137812
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 128.15 310.8 128.25 ;
      END
   END n_137812

   PIN n_137819
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 163.35 0.51 163.45 ;
      END
   END n_137819

   PIN n_137834
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 271.55 0.51 271.65 ;
      END
   END n_137834

   PIN n_137848
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 283.75 0.51 283.85 ;
      END
   END n_137848

   PIN n_137853
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 68.15 0.51 68.25 ;
      END
   END n_137853

   PIN n_137861
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 24.55 0.51 24.65 ;
      END
   END n_137861

   PIN n_137863
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 127.55 0.51 127.65 ;
      END
   END n_137863

   PIN n_137869
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 79.95 310.8 80.05 ;
      END
   END n_137869

   PIN n_143924
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 52.05 0 52.15 0.51 ;
      END
   END n_143924

   PIN n_144146
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 14.95 0.51 15.05 ;
      END
   END n_144146

   PIN n_144150
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 19.15 0.51 19.25 ;
      END
   END n_144150

   PIN n_18035
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 103.25 0 103.35 0.51 ;
      END
   END n_18035

   PIN n_18900
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 7.05 0 7.15 0.51 ;
      END
   END n_18900

   PIN n_19304
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 104.65 0 104.75 0.51 ;
      END
   END n_19304

   PIN n_19335
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 20.05 0 20.15 0.51 ;
      END
   END n_19335

   PIN n_21912
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 106.65 0 106.75 0.51 ;
      END
   END n_21912

   PIN n_22782
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 112.85 0 112.95 0.51 ;
      END
   END n_22782

   PIN n_23039
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 132.95 0.51 133.05 ;
      END
   END n_23039

   PIN n_23380
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 127.05 0 127.15 0.51 ;
      END
   END n_23380

   PIN n_24049
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 163.25 0 163.35 0.51 ;
      END
   END n_24049

   PIN n_24052
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 107.95 0.51 108.05 ;
      END
   END n_24052

   PIN n_24067
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 104.65 0 104.75 0.51 ;
      END
   END n_24067

   PIN n_24075
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 20.45 0 20.55 0.51 ;
      END
   END n_24075

   PIN n_24451
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 156.25 0 156.35 0.51 ;
      END
   END n_24451

   PIN n_24681
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 139.55 0.51 139.65 ;
      END
   END n_24681

   PIN n_24728
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 157.85 0 157.95 0.51 ;
      END
   END n_24728

   PIN n_25378
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 6.45 0 6.55 0.51 ;
      END
   END n_25378

   PIN n_25389
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 101.25 0 101.35 0.51 ;
      END
   END n_25389

   PIN n_25428
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 150.45 0 150.55 0.51 ;
      END
   END n_25428

   PIN n_25497
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 251.65 0 251.75 0.51 ;
      END
   END n_25497

   PIN n_26008
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 148.95 0.51 149.05 ;
      END
   END n_26008

   PIN n_26018
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 98.45 0 98.55 0.51 ;
      END
   END n_26018

   PIN n_26060
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 146.25 0 146.35 0.51 ;
      END
   END n_26060

   PIN n_26293
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 153.95 0.51 154.05 ;
      END
   END n_26293

   PIN n_26654
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 94.65 0 94.75 0.51 ;
      END
   END n_26654

   PIN n_26694
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 142.65 0 142.75 0.51 ;
      END
   END n_26694

   PIN n_26911
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 158.95 0.51 159.05 ;
      END
   END n_26911

   PIN n_27078
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 131.45 0 131.55 0.51 ;
      END
   END n_27078

   PIN n_27222
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 283.85 0 283.95 0.51 ;
      END
   END n_27222

   PIN n_27243
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 92.45 0 92.55 0.51 ;
      END
   END n_27243

   PIN n_27301
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 80.15 0.51 80.25 ;
      END
   END n_27301

   PIN n_27353
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 134.65 0 134.75 0.51 ;
      END
   END n_27353

   PIN n_27538
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 165.15 0.51 165.25 ;
      END
   END n_27538

   PIN n_27569
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 90.25 0 90.35 0.51 ;
      END
   END n_27569

   PIN n_27604
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 15.25 0 15.35 0.51 ;
      END
   END n_27604

   PIN n_27697
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 139.25 0 139.35 0.51 ;
      END
   END n_27697

   PIN n_27935
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 125.65 0 125.75 0.51 ;
      END
   END n_27935

   PIN n_28103
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 170.95 0.51 171.05 ;
      END
   END n_28103

   PIN n_28131
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 79.05 0 79.15 0.51 ;
      END
   END n_28131

   PIN n_28235
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 124.85 0 124.95 0.51 ;
      END
   END n_28235

   PIN n_28622
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 134.95 0.51 135.05 ;
      END
   END n_28622

   PIN n_28635
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 174.95 0.51 175.05 ;
      END
   END n_28635

   PIN n_28669
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 79.45 0 79.55 0.51 ;
      END
   END n_28669

   PIN n_29117
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 180.95 0.51 181.05 ;
      END
   END n_29117

   PIN n_29147
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 66.25 0 66.35 0.51 ;
      END
   END n_29147

   PIN n_29434
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 115.05 0 115.15 0.51 ;
      END
   END n_29434

   PIN n_29508
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 39.25 0 39.35 0.51 ;
      END
   END n_29508

   PIN n_29509
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 36.45 0 36.55 0.51 ;
      END
   END n_29509

   PIN n_29548
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 10.25 0 10.35 0.51 ;
      END
   END n_29548

   PIN n_29575
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 26.25 0 26.35 0.51 ;
      END
   END n_29575

   PIN n_29577
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 61.45 0 61.55 0.51 ;
      END
   END n_29577

   PIN n_29615
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 139.55 310.8 139.65 ;
      END
   END n_29615

   PIN n_29650
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 40.65 0 40.75 0.51 ;
      END
   END n_29650

   PIN n_29942
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 200.95 0.51 201.05 ;
      END
   END n_29942

   PIN n_29972
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 22.85 0 22.95 0.51 ;
      END
   END n_29972

   PIN n_30014
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 187.95 310.8 188.05 ;
      END
   END n_30014

   PIN n_30028
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 216.95 310.8 217.05 ;
      END
   END n_30028

   PIN n_30271
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 197.95 0.51 198.05 ;
      END
   END n_30271

   PIN n_30292
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 20.45 0 20.55 0.51 ;
      END
   END n_30292

   PIN n_30345
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 258.95 310.8 259.05 ;
      END
   END n_30345

   PIN n_31042
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 310.29 240.95 310.8 241.05 ;
      END
   END n_31042

   PIN n_31092
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 163.65 0 163.75 0.51 ;
      END
   END n_31092

   PIN n_31487
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 211.35 0.51 211.45 ;
      END
   END n_31487

   PIN n_42338
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 10.35 0.51 10.45 ;
      END
   END n_42338

   PIN n_42471
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 9.75 0.51 9.85 ;
      END
   END n_42471

   PIN n_42480
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 211.95 0.51 212.05 ;
      END
   END n_42480

   PIN n_42529
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 212.95 0.51 213.05 ;
      END
   END n_42529

   PIN n_42530
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 213.95 0.51 214.05 ;
      END
   END n_42530

   PIN n_42652
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 221.95 0.51 222.05 ;
      END
   END n_42652

   PIN n_42729
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 229.15 0.51 229.25 ;
      END
   END n_42729

   PIN n_42730
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 228.95 0.51 229.05 ;
      END
   END n_42730

   PIN n_42791
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 213.75 0.51 213.85 ;
      END
   END n_42791

   PIN n_42798
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 116.55 0.51 116.65 ;
      END
   END n_42798

   PIN n_42801
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 237.95 0.51 238.05 ;
      END
   END n_42801

   PIN n_42843
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 127.95 0.51 128.05 ;
      END
   END n_42843

   PIN n_42847
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 214.95 0.51 215.05 ;
      END
   END n_42847

   PIN n_42872
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 116.35 0.51 116.45 ;
      END
   END n_42872

   PIN n_42953
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 247.15 0.51 247.25 ;
      END
   END n_42953

   PIN n_43001
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 229.35 0.51 229.45 ;
      END
   END n_43001

   PIN n_43074
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 236.95 0.51 237.05 ;
      END
   END n_43074

   PIN n_43167
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 127.75 0.51 127.85 ;
      END
   END n_43167

   PIN n_43681
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 13.15 0.51 13.25 ;
      END
   END n_43681

   PIN n_44033
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 226.95 0.51 227.05 ;
      END
   END n_44033

   PIN n_44061
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 225.55 0.51 225.65 ;
      END
   END n_44061

   PIN n_44522
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 224.95 0.51 225.05 ;
      END
   END n_44522

   PIN n_44523
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 226.35 0.51 226.45 ;
      END
   END n_44523

   PIN n_4772
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 149.25 0 149.35 0.51 ;
      END
   END n_4772

   PIN n_49431
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 55.75 0.51 55.85 ;
      END
   END n_49431

   PIN n_49913
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 211.55 0.51 211.65 ;
      END
   END n_49913

   PIN n_50250
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 66.45 0 66.55 0.51 ;
      END
   END n_50250

   PIN n_50281
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 20.15 0.51 20.25 ;
      END
   END n_50281

   PIN n_50308
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 3.55 0.51 3.65 ;
      END
   END n_50308

   PIN n_50379
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 217.15 0.51 217.25 ;
      END
   END n_50379

   PIN n_50454
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 199.55 0.51 199.65 ;
      END
   END n_50454

   PIN n_52028
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 67.95 0.51 68.05 ;
      END
   END n_52028

   PIN n_52512
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 104.15 0.51 104.25 ;
      END
   END n_52512

   PIN n_52572
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 12.95 0.51 13.05 ;
      END
   END n_52572

   PIN n_52708
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 128.35 0.51 128.45 ;
      END
   END n_52708

   PIN n_53209
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 216.95 0.51 217.05 ;
      END
   END n_53209

   PIN n_54797
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 247.55 0.51 247.65 ;
      END
   END n_54797

   PIN n_54849
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 24.75 0.51 24.85 ;
      END
   END n_54849

   PIN n_54877
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 32.15 0.51 32.25 ;
      END
   END n_54877

   PIN n_54956
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 19.95 0.51 20.05 ;
      END
   END n_54956

   PIN n_54970
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 31.75 0.51 31.85 ;
      END
   END n_54970

   PIN n_54980
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 220.95 0.51 221.05 ;
      END
   END n_54980

   PIN n_55005
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 235.35 0.51 235.45 ;
      END
   END n_55005

   PIN n_55011
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 241.15 0.51 241.25 ;
      END
   END n_55011

   PIN n_55098
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 31.55 0.51 31.65 ;
      END
   END n_55098

   PIN n_55101
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 70.25 0 70.35 0.51 ;
      END
   END n_55101

   PIN n_55136
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 31.25 0 31.35 0.51 ;
      END
   END n_55136

   PIN n_55151
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 70.45 0 70.55 0.51 ;
      END
   END n_55151

   PIN n_56232
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 15.15 0.51 15.25 ;
      END
   END n_56232

   PIN n_56234
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 14.95 0.51 15.05 ;
      END
   END n_56234

   PIN n_57438
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 56.45 0 56.55 0.51 ;
      END
   END n_57438

   PIN n_57499
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 76.25 0 76.35 0.51 ;
      END
   END n_57499

   PIN n_57501
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 75.05 0 75.15 0.51 ;
      END
   END n_57501

   PIN n_57508
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 19.85 0 19.95 0.51 ;
      END
   END n_57508

   PIN n_57682
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 3.15 0.51 3.25 ;
      END
   END n_57682

   PIN n_57709
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 261.35 0.51 261.45 ;
      END
   END n_57709

   PIN n_57710
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 261.15 0.51 261.25 ;
      END
   END n_57710

   PIN n_57792
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 236.55 0.51 236.65 ;
      END
   END n_57792

   PIN n_57799
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 43.95 0.51 44.05 ;
      END
   END n_57799

   PIN n_57875
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 31.35 0.51 31.45 ;
      END
   END n_57875

   PIN n_57882
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 18.95 0.51 19.05 ;
      END
   END n_57882

   PIN n_57917
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 31.55 0.51 31.65 ;
      END
   END n_57917

   PIN n_58050
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 221.75 0.51 221.85 ;
      END
   END n_58050

   PIN n_58096
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 5.15 0.51 5.25 ;
      END
   END n_58096

   PIN n_58458
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 31.95 0.51 32.05 ;
      END
   END n_58458

   PIN n_58653
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 2.95 0.51 3.05 ;
      END
   END n_58653

   PIN n_58825
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 231.95 0.51 232.05 ;
      END
   END n_58825

   PIN n_58842
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 163.95 0.51 164.05 ;
      END
   END n_58842

   PIN n_58893
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 261.75 0.51 261.85 ;
      END
   END n_58893

   PIN n_58929
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 10.95 0.51 11.05 ;
      END
   END n_58929

   PIN n_58997
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 32.45 0 32.55 0.51 ;
      END
   END n_58997

   PIN n_58998
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 55.45 0 55.55 0.51 ;
      END
   END n_58998

   PIN n_59262
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 31.95 0.51 32.05 ;
      END
   END n_59262

   PIN n_59928
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 60.05 0 60.15 0.51 ;
      END
   END n_59928

   PIN n_60313
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 65.25 0 65.35 0.51 ;
      END
   END n_60313

   PIN n_60331
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 58.65 0 58.75 0.51 ;
      END
   END n_60331

   PIN n_60641
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 21.15 0.51 21.25 ;
      END
   END n_60641

   PIN n_60716
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 260.95 0.51 261.05 ;
      END
   END n_60716

   PIN n_60751
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 20.95 0.51 21.05 ;
      END
   END n_60751

   PIN n_61044
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 3.15 0.51 3.25 ;
      END
   END n_61044

   PIN n_61084
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 31.05 0 31.15 0.51 ;
      END
   END n_61084

   PIN n_61701
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 31.75 0.51 31.85 ;
      END
   END n_61701

   PIN n_62186
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 256.95 0.51 257.05 ;
      END
   END n_62186

   PIN n_62600
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 32.55 0.51 32.65 ;
      END
   END n_62600

   PIN n_62607
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 32.35 0.51 32.45 ;
      END
   END n_62607

   PIN n_63108
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 4.85 0 4.95 0.51 ;
      END
   END n_63108

   PIN n_63353
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 45.25 0 45.35 0.51 ;
      END
   END n_63353

   PIN n_63538
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 243.75 0.51 243.85 ;
      END
   END n_63538

   PIN n_63691
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 127.35 0.51 127.45 ;
      END
   END n_63691

   PIN n_65307
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 43.55 0.51 43.65 ;
      END
   END n_65307

   PIN n_6646
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 92.25 0 92.35 0.51 ;
      END
   END n_6646

   PIN n_71288
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 57.65 0 57.75 0.51 ;
      END
   END n_71288

   PIN n_71418
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 44.15 0.51 44.25 ;
      END
   END n_71418

   PIN n_71433
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 43.95 0.51 44.05 ;
      END
   END n_71433

   PIN n_7178
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 103.75 0.51 103.85 ;
      END
   END n_7178

   PIN n_71966
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 67.55 0.51 67.65 ;
      END
   END n_71966

   PIN n_81058
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 60.45 0 60.55 0.51 ;
      END
   END n_81058

   PIN n_8266
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 50.95 0.51 51.05 ;
      END
   END n_8266

   PIN n_83289
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 45.85 0 45.95 0.51 ;
      END
   END n_83289

   PIN n_83679
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 51.85 0 51.95 0.51 ;
      END
   END n_83679

   PIN n_8374
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 100.95 0.51 101.05 ;
      END
   END n_8374

   PIN n_8393
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 115.35 0.51 115.45 ;
      END
   END n_8393

   PIN n_85475
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 42.05 0 42.15 0.51 ;
      END
   END n_85475

   PIN n_85700
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 24.95 0.51 25.05 ;
      END
   END n_85700

   PIN n_85705
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 24.95 0.51 25.05 ;
      END
   END n_85705

   PIN n_89145
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 48.45 0 48.55 0.51 ;
      END
   END n_89145

   PIN n_89166
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 45.25 0 45.35 0.51 ;
      END
   END n_89166

   PIN n_89167
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 46.05 0 46.15 0.51 ;
      END
   END n_89167

   PIN n_91981
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 23.95 0.51 24.05 ;
      END
   END n_91981

   PIN n_92794
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 3.35 0.51 3.45 ;
      END
   END n_92794

   PIN n_92795
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 33.65 0 33.75 0.51 ;
      END
   END n_92795

   PIN n_94774
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 2.45 0 2.55 0.51 ;
      END
   END n_94774

   PIN n_94777
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 2.25 0 2.35 0.51 ;
      END
   END n_94777

   PIN n_95516
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 42.25 0 42.35 0.51 ;
      END
   END n_95516

   PIN n_95527
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 36.85 0 36.95 0.51 ;
      END
   END n_95527

   PIN n_95530
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 37.05 0 37.15 0.51 ;
      END
   END n_95530

   PIN n_95531
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 20.25 0 20.35 0.51 ;
      END
   END n_95531

   PIN n_95538
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 3.55 0.51 3.65 ;
      END
   END n_95538

   PIN n_95542
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 3.35 0.51 3.45 ;
      END
   END n_95542

   PIN n_97281
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 80.65 0 80.75 0.51 ;
      END
   END n_97281

   PIN n_97761
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 43.75 0.51 43.85 ;
      END
   END n_97761

   PIN n_99215
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 36.65 0 36.75 0.51 ;
      END
   END n_99215

   OBS
      LAYER via1 ;
         RECT 0 0 310.8 336 ;
      LAYER metal5 ;
         RECT 0.63 0.00 310.17 336 ;
      LAYER metal4 ;
         RECT 0.00 0.63 310.8 335.37 ;
      LAYER metal3 ;
         RECT 0.63 0.00 310.17 336 ;
      LAYER metal2 ;
         RECT 0.00 0.63 310.8 335.37 ;
      LAYER metal1 ;
         RECT 0.00 0.00 310.8 336 ;
   END
END h8

MACRO h7
   CLASS BLOCK ;
   FOREIGN h7 ;
   ORIGIN 0 0 ;
   SIZE 430.6 BY 114 ;
   SYMMETRY X Y R90 ;
   PIN FE_OCPN15487_FE_OFN12404_n_112269
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 326.65 113.49 326.75 114 ;
      END
   END FE_OCPN15487_FE_OFN12404_n_112269

   PIN FE_OCPN15496_FE_OFN13305_n_143019
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 350.85 113.49 350.95 114 ;
      END
   END FE_OCPN15496_FE_OFN13305_n_143019

   PIN FE_OCPN15502_n_111893
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 339.25 113.49 339.35 114 ;
      END
   END FE_OCPN15502_n_111893

   PIN FE_OCPN15568_FE_OFN11385_n_210
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 374.05 113.49 374.15 114 ;
      END
   END FE_OCPN15568_FE_OFN11385_n_210

   PIN FE_OCPN15572_FE_OFN12407_n_143087
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 313.05 113.49 313.15 114 ;
      END
   END FE_OCPN15572_FE_OFN12407_n_143087

   PIN FE_OCPN15750_FE_OFN13746_n_143074
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 340.45 113.49 340.55 114 ;
      END
   END FE_OCPN15750_FE_OFN13746_n_143074

   PIN FE_OFN10392_b_1_1_6
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 359.05 113.49 359.15 114 ;
      END
   END FE_OFN10392_b_1_1_6

   PIN FE_OFN10397_b_1_1_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 362.85 113.49 362.95 114 ;
      END
   END FE_OFN10397_b_1_1_4

   PIN FE_OFN10398_b_1_1_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 372.45 113.49 372.55 114 ;
      END
   END FE_OFN10398_b_1_1_4

   PIN FE_OFN10400_b_1_1_3
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 353.25 113.49 353.35 114 ;
      END
   END FE_OFN10400_b_1_1_3

   PIN FE_OFN10402_b_1_1_2
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 369.6 113.745 369.8 114 ;
      END
   END FE_OFN10402_b_1_1_2

   PIN FE_OFN10409_b_1_1_0
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 331.8 113.745 332 114 ;
      END
   END FE_OFN10409_b_1_1_0

   PIN FE_OFN11381_n_142891
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 324.85 113.49 324.95 114 ;
      END
   END FE_OFN11381_n_142891

   PIN FE_OFN11476_n_143637
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 408.45 113.49 408.55 114 ;
      END
   END FE_OFN11476_n_143637

   PIN FE_OFN11985_n_143017
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 386.45 113.49 386.55 114 ;
      END
   END FE_OFN11985_n_143017

   PIN FE_OFN11987_n_143017
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 399.05 113.49 399.15 114 ;
      END
   END FE_OFN11987_n_143017

   PIN FE_OFN11988_n_143017
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 430.09 105.55 430.6 105.65 ;
      END
   END FE_OFN11988_n_143017

   PIN FE_OFN12353_n_112222
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 328.25 113.49 328.35 114 ;
      END
   END FE_OFN12353_n_112222

   PIN FE_OFN12404_n_112269
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 348.25 113.49 348.35 114 ;
      END
   END FE_OFN12404_n_112269

   PIN FE_OFN12662_n_142936
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 372.65 113.49 372.75 114 ;
      END
   END FE_OFN12662_n_142936

   PIN FE_OFN12694_n_142879
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 341.25 113.49 341.35 114 ;
      END
   END FE_OFN12694_n_142879

   PIN FE_OFN12697_n_142879
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 340.25 113.49 340.35 114 ;
      END
   END FE_OFN12697_n_142879

   PIN FE_OFN12701_n_142878
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 342.05 113.49 342.15 114 ;
      END
   END FE_OFN12701_n_142878

   PIN FE_OFN12702_n_142878
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 341.65 113.49 341.75 114 ;
      END
   END FE_OFN12702_n_142878

   PIN FE_OFN12703_n_142878
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 348.05 113.49 348.15 114 ;
      END
   END FE_OFN12703_n_142878

   PIN FE_OFN12708_n_142877
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 337.45 113.49 337.55 114 ;
      END
   END FE_OFN12708_n_142877

   PIN FE_OFN12741_n_143073
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 410.85 113.49 410.95 114 ;
      END
   END FE_OFN12741_n_143073

   PIN FE_OFN12742_n_143073
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 279.05 113.49 279.15 114 ;
      END
   END FE_OFN12742_n_143073

   PIN FE_OFN13304_n_143019
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 366.05 113.49 366.15 114 ;
      END
   END FE_OFN13304_n_143019

   PIN FE_OFN13307_n_143018
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 370.25 113.49 370.35 114 ;
      END
   END FE_OFN13307_n_143018

   PIN FE_OFN13496_n_111726
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 390.65 113.49 390.75 114 ;
      END
   END FE_OFN13496_n_111726

   PIN FE_OFN13571_n_143090
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 326.25 113.49 326.35 114 ;
      END
   END FE_OFN13571_n_143090

   PIN FE_OFN13575_n_143090
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 301.45 113.49 301.55 114 ;
      END
   END FE_OFN13575_n_143090

   PIN FE_OFN13593_n_142824
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 349.45 113.49 349.55 114 ;
      END
   END FE_OFN13593_n_142824

   PIN FE_OFN13605_n_142822
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 363.45 113.49 363.55 114 ;
      END
   END FE_OFN13605_n_142822

   PIN FE_OFN13648_n_143638
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 369.65 113.49 369.75 114 ;
      END
   END FE_OFN13648_n_143638

   PIN FE_OFN13649_n_143638
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 372.65 113.49 372.75 114 ;
      END
   END FE_OFN13649_n_143638

   PIN FE_OFN14250_n_140259
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 411.05 113.49 411.15 114 ;
      END
   END FE_OFN14250_n_140259

   PIN FE_OFN14252_n_140259
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 371.85 113.49 371.95 114 ;
      END
   END FE_OFN14252_n_140259

   PIN FE_OFN14255_n_140259
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 370.85 113.49 370.95 114 ;
      END
   END FE_OFN14255_n_140259

   PIN FE_OFN14256_n_140259
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 364.65 113.49 364.75 114 ;
      END
   END FE_OFN14256_n_140259

   PIN FE_OFN14257_n_140259
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 398.65 113.49 398.75 114 ;
      END
   END FE_OFN14257_n_140259

   PIN FE_OFN14259_n_140259
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 364.05 113.49 364.15 114 ;
      END
   END FE_OFN14259_n_140259

   PIN FE_OFN14394_n_142835
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 359.85 113.49 359.95 114 ;
      END
   END FE_OFN14394_n_142835

   PIN FE_OFN14886_n_590
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 373.25 113.49 373.35 114 ;
      END
   END FE_OFN14886_n_590

   PIN FE_OFN15897_n_143087
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 379.05 113.49 379.15 114 ;
      END
   END FE_OFN15897_n_143087

   PIN FE_OFN16418_b_1_1_3
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 343.85 113.49 343.95 114 ;
      END
   END FE_OFN16418_b_1_1_3

   PIN FE_OFN16622_delay_add_ln34_unr2_unr9_stage2_stallmux_z_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 9.05 113.49 9.15 114 ;
      END
   END FE_OFN16622_delay_add_ln34_unr2_unr9_stage2_stallmux_z_14_

   PIN FE_OFN16914_n_19194
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 170.85 0 170.95 0.51 ;
      END
   END FE_OFN16914_n_19194

   PIN FE_OFN17087_n_142823
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 385.85 113.49 385.95 114 ;
      END
   END FE_OFN17087_n_142823

   PIN FE_OFN17137_n_15473
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 411.05 113.49 411.15 114 ;
      END
   END FE_OFN17137_n_15473

   PIN FE_OFN18629_b_1_1_5
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 341.05 113.49 341.15 114 ;
      END
   END FE_OFN18629_b_1_1_5

   PIN FE_OFN18763_n_142881
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 332.25 113.49 332.35 114 ;
      END
   END FE_OFN18763_n_142881

   PIN FE_OFN18849_n_142838
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 359.25 113.49 359.35 114 ;
      END
   END FE_OFN18849_n_142838

   PIN FE_OFN1973_n_17469
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 386.65 113.49 386.75 114 ;
      END
   END FE_OFN1973_n_17469

   PIN FE_OFN2297_n_142894
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 359.45 113.49 359.55 114 ;
      END
   END FE_OFN2297_n_142894

   PIN FE_OFN2689_n_142837
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 313.25 113.49 313.35 114 ;
      END
   END FE_OFN2689_n_142837

   PIN FE_OFN2744_n_123691
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 301.65 113.49 301.75 114 ;
      END
   END FE_OFN2744_n_123691

   PIN FE_OFN2832_n_142934
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 374.25 113.49 374.35 114 ;
      END
   END FE_OFN2832_n_142934

   PIN FE_OFN2833_n_142934
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 398.85 113.49 398.95 114 ;
      END
   END FE_OFN2833_n_142934

   PIN FE_OFN2851_n_111724
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 422.85 113.49 422.95 114 ;
      END
   END FE_OFN2851_n_111724

   PIN delay_add_ln34_unr2_unr4_stage2_stallmux_q_0_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 37.25 113.49 37.35 114 ;
      END
   END delay_add_ln34_unr2_unr4_stage2_stallmux_q_0_

   PIN delay_add_ln34_unr2_unr4_stage2_stallmux_q_1_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 54.05 113.49 54.15 114 ;
      END
   END delay_add_ln34_unr2_unr4_stage2_stallmux_q_1_

   PIN delay_add_ln34_unr2_unr4_stage2_stallmux_q_2_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 60.65 113.49 60.75 114 ;
      END
   END delay_add_ln34_unr2_unr4_stage2_stallmux_q_2_

   PIN delay_add_ln34_unr2_unr4_stage2_stallmux_q_3_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 59.05 113.49 59.15 114 ;
      END
   END delay_add_ln34_unr2_unr4_stage2_stallmux_q_3_

   PIN delay_add_ln34_unr2_unr4_stage2_stallmux_q_4_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 26.85 113.49 26.95 114 ;
      END
   END delay_add_ln34_unr2_unr4_stage2_stallmux_q_4_

   PIN delay_add_ln34_unr2_unr4_stage2_stallmux_q_5_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 45.65 113.49 45.75 114 ;
      END
   END delay_add_ln34_unr2_unr4_stage2_stallmux_q_5_

   PIN delay_add_ln34_unr2_unr4_stage2_stallmux_q_6_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 26.85 113.49 26.95 114 ;
      END
   END delay_add_ln34_unr2_unr4_stage2_stallmux_q_6_

   PIN delay_add_ln34_unr2_unr4_stage2_stallmux_q_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 10.05 113.49 10.15 114 ;
      END
   END delay_add_ln34_unr2_unr4_stage2_stallmux_q_7_

   PIN mul_4376_72_n_153
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 319.05 113.49 319.15 114 ;
      END
   END mul_4376_72_n_153

   PIN mul_4376_72_n_154
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 328.45 113.49 328.55 114 ;
      END
   END mul_4376_72_n_154

   PIN mul_4376_72_n_275
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 364.65 113.49 364.75 114 ;
      END
   END mul_4376_72_n_275

   PIN mul_4376_72_n_282
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 366.25 113.49 366.35 114 ;
      END
   END mul_4376_72_n_282

   PIN mul_4376_72_n_287
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 383.45 113.49 383.55 114 ;
      END
   END mul_4376_72_n_287

   PIN mul_4376_72_n_288
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 379.25 113.49 379.35 114 ;
      END
   END mul_4376_72_n_288

   PIN mul_4376_72_n_290
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 360.85 113.49 360.95 114 ;
      END
   END mul_4376_72_n_290

   PIN mul_4379_72_n_336
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 325.65 113.49 325.75 114 ;
      END
   END mul_4379_72_n_336

   PIN mul_4384_72_n_309
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 377.25 113.49 377.35 114 ;
      END
   END mul_4384_72_n_309

   PIN mul_4385_72_n_188
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 327.45 113.49 327.55 114 ;
      END
   END mul_4385_72_n_188

   PIN mul_4385_72_n_196
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 321.45 113.49 321.55 114 ;
      END
   END mul_4385_72_n_196

   PIN mul_4385_72_n_197
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 307.45 113.49 307.55 114 ;
      END
   END mul_4385_72_n_197

   PIN mul_4385_72_n_198
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 325.05 113.49 325.15 114 ;
      END
   END mul_4385_72_n_198

   PIN mul_4385_72_n_226
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 332.65 113.49 332.75 114 ;
      END
   END mul_4385_72_n_226

   PIN mul_4385_72_n_228
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 301.85 113.49 301.95 114 ;
      END
   END mul_4385_72_n_228

   PIN mul_4385_72_n_253
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 289.45 113.49 289.55 114 ;
      END
   END mul_4385_72_n_253

   PIN mul_4385_72_n_258
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 308.45 113.49 308.55 114 ;
      END
   END mul_4385_72_n_258

   PIN mul_4385_72_n_291
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 362.05 113.49 362.15 114 ;
      END
   END mul_4385_72_n_291

   PIN mul_4385_72_n_293
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 278.85 113.49 278.95 114 ;
      END
   END mul_4385_72_n_293

   PIN mul_4385_72_n_297
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 290.05 113.49 290.15 114 ;
      END
   END mul_4385_72_n_297

   PIN n_111895
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 360.25 113.49 360.35 114 ;
      END
   END n_111895

   PIN n_112002
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 365.45 113.49 365.55 114 ;
      END
   END n_112002

   PIN n_112222
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 319.4 113.745 319.6 114 ;
      END
   END n_112222

   PIN n_114682
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 343.45 113.49 343.55 114 ;
      END
   END n_114682

   PIN n_114776
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 347.85 113.49 347.95 114 ;
      END
   END n_114776

   PIN n_114795
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 375.85 113.49 375.95 114 ;
      END
   END n_114795

   PIN n_115233
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 380.45 113.49 380.55 114 ;
      END
   END n_115233

   PIN n_115252
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 301.45 113.49 301.55 114 ;
      END
   END n_115252

   PIN n_115271
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 377.45 113.49 377.55 114 ;
      END
   END n_115271

   PIN n_115828
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 283.65 113.49 283.75 114 ;
      END
   END n_115828

   PIN n_116358
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 354.25 113.49 354.35 114 ;
      END
   END n_116358

   PIN n_116509
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 353.85 113.49 353.95 114 ;
      END
   END n_116509

   PIN n_116701
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 352.65 113.49 352.75 114 ;
      END
   END n_116701

   PIN n_116804
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 354.05 113.49 354.15 114 ;
      END
   END n_116804

   PIN n_116835
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 353.45 113.49 353.55 114 ;
      END
   END n_116835

   PIN n_118255
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 298.45 113.49 298.55 114 ;
      END
   END n_118255

   PIN n_118393
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 321.45 113.49 321.55 114 ;
      END
   END n_118393

   PIN n_118706
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 351.45 113.49 351.55 114 ;
      END
   END n_118706

   PIN n_120518
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 351.65 113.49 351.75 114 ;
      END
   END n_120518

   PIN n_121402
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 327.85 113.49 327.95 114 ;
      END
   END n_121402

   PIN n_121961
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 295.05 113.49 295.15 114 ;
      END
   END n_121961

   PIN n_122290
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 341.25 113.49 341.35 114 ;
      END
   END n_122290

   PIN n_122291
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 341.65 113.49 341.75 114 ;
      END
   END n_122291

   PIN n_122325
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 341.45 113.49 341.55 114 ;
      END
   END n_122325

   PIN n_122457
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 324.45 113.49 324.55 114 ;
      END
   END n_122457

   PIN n_123073
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 293.85 113.49 293.95 114 ;
      END
   END n_123073

   PIN n_123201
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 353.65 113.49 353.75 114 ;
      END
   END n_123201

   PIN n_123230
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 352.85 113.49 352.95 114 ;
      END
   END n_123230

   PIN n_123532
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 302.25 113.49 302.35 114 ;
      END
   END n_123532

   PIN n_123533
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 301.05 113.49 301.15 114 ;
      END
   END n_123533

   PIN n_123541
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 302.25 113.49 302.35 114 ;
      END
   END n_123541

   PIN n_123699
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 294.65 113.49 294.75 114 ;
      END
   END n_123699

   PIN n_123707
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 312.05 113.49 312.15 114 ;
      END
   END n_123707

   PIN n_123732
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 300.05 113.49 300.15 114 ;
      END
   END n_123732

   PIN n_124236
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 340.05 113.49 340.15 114 ;
      END
   END n_124236

   PIN n_124424
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 278.25 113.49 278.35 114 ;
      END
   END n_124424

   PIN n_124618
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 301.85 113.49 301.95 114 ;
      END
   END n_124618

   PIN n_124619
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 300.45 113.49 300.55 114 ;
      END
   END n_124619

   PIN n_124704
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 294.05 113.49 294.15 114 ;
      END
   END n_124704

   PIN n_124724
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 294.25 113.49 294.35 114 ;
      END
   END n_124724

   PIN n_124900
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 309.65 113.49 309.75 114 ;
      END
   END n_124900

   PIN n_124901
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 310.65 113.49 310.75 114 ;
      END
   END n_124901

   PIN n_125656
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 323.65 113.49 323.75 114 ;
      END
   END n_125656

   PIN n_125817
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 294.85 113.49 294.95 114 ;
      END
   END n_125817

   PIN n_127134
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 298.85 113.49 298.95 114 ;
      END
   END n_127134

   PIN n_127158
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.85 113.49 317.95 114 ;
      END
   END n_127158

   PIN n_127272
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 290.25 113.49 290.35 114 ;
      END
   END n_127272

   PIN n_127322
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 312.85 113.49 312.95 114 ;
      END
   END n_127322

   PIN n_127852
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 290.45 113.49 290.55 114 ;
      END
   END n_127852

   PIN n_127963
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 278.45 113.49 278.55 114 ;
      END
   END n_127963

   PIN n_128562
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 302.45 113.49 302.55 114 ;
      END
   END n_128562

   PIN n_128563
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 290.65 113.49 290.75 114 ;
      END
   END n_128563

   PIN n_128827
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 308.85 113.49 308.95 114 ;
      END
   END n_128827

   PIN n_128963
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 278.65 113.49 278.75 114 ;
      END
   END n_128963

   PIN n_129001
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 278.85 113.49 278.95 114 ;
      END
   END n_129001

   PIN n_129914
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 325.45 113.49 325.55 114 ;
      END
   END n_129914

   PIN n_131586
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 266.85 113.49 266.95 114 ;
      END
   END n_131586

   PIN n_131938
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 373.65 113.49 373.75 114 ;
      END
   END n_131938

   PIN n_142879
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 332.45 113.49 332.55 114 ;
      END
   END n_142879

   PIN n_142933
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 319.85 113.49 319.95 114 ;
      END
   END n_142933

   PIN n_142934
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 302.8 113.745 303 114 ;
      END
   END n_142934

   PIN n_142935
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 354.85 113.49 354.95 114 ;
      END
   END n_142935

   PIN n_143076
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 339.45 113.49 339.55 114 ;
      END
   END n_143076

   PIN n_143077
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 320.65 113.49 320.75 114 ;
      END
   END n_143077

   PIN n_143794
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 290.85 113.49 290.95 114 ;
      END
   END n_143794

   PIN n_143845
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 320.85 113.49 320.95 114 ;
      END
   END n_143845

   PIN n_16174
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 430.09 15.95 430.6 16.05 ;
      END
   END n_16174

   PIN n_16223
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 342.05 113.49 342.15 114 ;
      END
   END n_16223

   PIN n_16370
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 343.65 113.49 343.75 114 ;
      END
   END n_16370

   PIN n_16624
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 347.65 113.49 347.75 114 ;
      END
   END n_16624

   PIN n_17775
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 341.85 113.49 341.95 114 ;
      END
   END n_17775

   PIN n_18083
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 348.45 113.49 348.55 114 ;
      END
   END n_18083

   PIN n_19629
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 62.85 0 62.95 0.51 ;
      END
   END n_19629

   PIN n_2592
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 381.25 113.49 381.35 114 ;
      END
   END n_2592

   PIN n_31935
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 362.65 113.49 362.75 114 ;
      END
   END n_31935

   PIN n_32008
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 349.25 113.49 349.35 114 ;
      END
   END n_32008

   PIN n_32014
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 340.05 113.49 340.15 114 ;
      END
   END n_32014

   PIN n_32066
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 345.85 113.49 345.95 114 ;
      END
   END n_32066

   PIN n_32240
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 348.85 113.49 348.95 114 ;
      END
   END n_32240

   PIN n_32283
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 363.25 113.49 363.35 114 ;
      END
   END n_32283

   PIN n_32342
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 348.45 113.49 348.55 114 ;
      END
   END n_32342

   PIN n_32407
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 337.85 113.49 337.95 114 ;
      END
   END n_32407

   PIN n_32494
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 325.25 113.49 325.35 114 ;
      END
   END n_32494

   PIN n_32869
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 291.05 113.49 291.15 114 ;
      END
   END n_32869

   PIN n_32877
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 289.85 113.49 289.95 114 ;
      END
   END n_32877

   PIN n_33394
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 364.85 113.49 364.95 114 ;
      END
   END n_33394

   PIN n_33847
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 334.45 113.49 334.55 114 ;
      END
   END n_33847

   PIN n_34034
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 312.25 113.49 312.35 114 ;
      END
   END n_34034

   PIN n_34107
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 340.65 113.49 340.75 114 ;
      END
   END n_34107

   PIN n_34672
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 349.05 113.49 349.15 114 ;
      END
   END n_34672

   PIN n_34854
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 340.85 113.49 340.95 114 ;
      END
   END n_34854

   PIN n_34945
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 328.65 113.49 328.75 114 ;
      END
   END n_34945

   PIN n_35146
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 348.65 113.49 348.75 114 ;
      END
   END n_35146

   PIN n_35659
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 325.85 113.49 325.95 114 ;
      END
   END n_35659

   PIN n_35677
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 295.65 113.49 295.75 114 ;
      END
   END n_35677

   PIN n_35915
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 318.85 113.49 318.95 114 ;
      END
   END n_35915

   PIN n_35916
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 313.85 113.49 313.95 114 ;
      END
   END n_35916

   PIN n_36035
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 295.85 113.49 295.95 114 ;
      END
   END n_36035

   PIN n_36226
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 305.25 113.49 305.35 114 ;
      END
   END n_36226

   PIN n_36445
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 292.45 113.49 292.55 114 ;
      END
   END n_36445

   PIN n_36448
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 306.85 113.49 306.95 114 ;
      END
   END n_36448

   PIN n_36459
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 290.25 113.49 290.35 114 ;
      END
   END n_36459

   PIN n_36620
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 291.25 113.49 291.35 114 ;
      END
   END n_36620

   PIN n_36625
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 289.65 113.49 289.75 114 ;
      END
   END n_36625

   PIN n_36656
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 304.45 113.49 304.55 114 ;
      END
   END n_36656

   PIN n_47622
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 314.05 113.49 314.15 114 ;
      END
   END n_47622

   PIN n_47691
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 313.05 113.49 313.15 114 ;
      END
   END n_47691

   PIN n_48142
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 306.05 113.49 306.15 114 ;
      END
   END n_48142

   PIN n_49325
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 302.05 113.49 302.15 114 ;
      END
   END n_49325

   PIN n_49408
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 307.85 113.49 307.95 114 ;
      END
   END n_49408

   PIN n_49409
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 308.05 113.49 308.15 114 ;
      END
   END n_49409

   PIN n_4967
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 346.05 113.49 346.15 114 ;
      END
   END n_4967

   PIN n_58898
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 368.25 113.49 368.35 114 ;
      END
   END n_58898

   PIN n_64452
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 365.65 113.49 365.75 114 ;
      END
   END n_64452

   PIN n_64453
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 363.05 113.49 363.15 114 ;
      END
   END n_64453

   PIN n_7726
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 430.09 76.15 430.6 76.25 ;
      END
   END n_7726

   PIN FE_OCPN15495_n_143017
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 386.85 113.49 386.95 114 ;
      END
   END FE_OCPN15495_n_143017

   PIN FE_OCPN15497_FE_OFN13305_n_143019
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 349.45 113.49 349.55 114 ;
      END
   END FE_OCPN15497_FE_OFN13305_n_143019

   PIN FE_OCPN15516_FE_OFN13305_n_143019
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 325.05 113.49 325.15 114 ;
      END
   END FE_OCPN15516_FE_OFN13305_n_143019

   PIN FE_OCPN15545_n_143577
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 359.65 113.49 359.75 114 ;
      END
   END FE_OCPN15545_n_143577

   PIN FE_OCPN15594_FE_OFN11474_n_143637
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 362.45 113.49 362.55 114 ;
      END
   END FE_OCPN15594_FE_OFN11474_n_143637

   PIN FE_OCPN15605_n_142891
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 365.25 113.49 365.35 114 ;
      END
   END FE_OCPN15605_n_142891

   PIN FE_OCPN15647_n_142835
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 373.25 113.49 373.35 114 ;
      END
   END FE_OCPN15647_n_142835

   PIN FE_OCPN15669_FE_OFN13856_n_142821
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.65 113.49 317.75 114 ;
      END
   END FE_OCPN15669_FE_OFN13856_n_142821

   PIN FE_OFN10378_b_1_4_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 319.25 113.49 319.35 114 ;
      END
   END FE_OFN10378_b_1_4_1

   PIN FE_OFN10380_b_1_4_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 360.65 113.49 360.75 114 ;
      END
   END FE_OFN10380_b_1_4_0

   PIN FE_OFN10407_b_1_1_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 364.25 113.49 364.35 114 ;
      END
   END FE_OFN10407_b_1_1_1

   PIN FE_OFN10408_b_1_1_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 329.65 113.49 329.75 114 ;
      END
   END FE_OFN10408_b_1_1_0

   PIN FE_OFN10414_b_1_0_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 346.45 113.49 346.55 114 ;
      END
   END FE_OFN10414_b_1_0_7

   PIN FE_OFN10416_b_1_0_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 311.65 113.49 311.75 114 ;
      END
   END FE_OFN10416_b_1_0_5

   PIN FE_OFN10420_b_1_0_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 329.05 113.49 329.15 114 ;
      END
   END FE_OFN10420_b_1_0_3

   PIN FE_OFN10424_b_1_0_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 306.25 113.49 306.35 114 ;
      END
   END FE_OFN10424_b_1_0_0

   PIN FE_OFN11379_n_142891
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 324.65 113.49 324.75 114 ;
      END
   END FE_OFN11379_n_142891

   PIN FE_OFN11389_n_210
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 379.85 113.49 379.95 114 ;
      END
   END FE_OFN11389_n_210

   PIN FE_OFN11473_n_143637
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 408.65 113.49 408.75 114 ;
      END
   END FE_OFN11473_n_143637

   PIN FE_OFN11539_n_111724
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 365.65 113.49 365.75 114 ;
      END
   END FE_OFN11539_n_111724

   PIN FE_OFN11540_n_111724
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 373.85 113.49 373.95 114 ;
      END
   END FE_OFN11540_n_111724

   PIN FE_OFN11952_n_143577
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 372.25 113.49 372.35 114 ;
      END
   END FE_OFN11952_n_143577

   PIN FE_OFN11983_n_143017
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 370.45 113.49 370.55 114 ;
      END
   END FE_OFN11983_n_143017

   PIN FE_OFN12403_n_112269
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 399.05 113.49 399.15 114 ;
      END
   END FE_OFN12403_n_112269

   PIN FE_OFN12406_n_143087
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 365.85 113.49 365.95 114 ;
      END
   END FE_OFN12406_n_143087

   PIN FE_OFN12407_n_143087
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 346.25 113.49 346.35 114 ;
      END
   END FE_OFN12407_n_143087

   PIN FE_OFN12658_n_142936
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 361.65 113.49 361.75 114 ;
      END
   END FE_OFN12658_n_142936

   PIN FE_OFN12659_n_142936
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 346.25 113.49 346.35 114 ;
      END
   END FE_OFN12659_n_142936

   PIN FE_OFN12669_n_142934
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 368.45 113.49 368.55 114 ;
      END
   END FE_OFN12669_n_142934

   PIN FE_OFN12678_n_142893
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 335.85 113.49 335.95 114 ;
      END
   END FE_OFN12678_n_142893

   PIN FE_OFN12691_n_142880
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 388.25 113.49 388.35 114 ;
      END
   END FE_OFN12691_n_142880

   PIN FE_OFN12705_n_142877
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 340.45 113.49 340.55 114 ;
      END
   END FE_OFN12705_n_142877

   PIN FE_OFN12740_n_143073
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 430.09 105.75 430.6 105.85 ;
      END
   END FE_OFN12740_n_143073

   PIN FE_OFN12748_n_143115
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 365.2 113.745 365.4 114 ;
      END
   END FE_OFN12748_n_143115

   PIN FE_OFN13299_n_143020
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 333.45 113.49 333.55 114 ;
      END
   END FE_OFN13299_n_143020

   PIN FE_OFN13305_n_143019
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 351.25 113.49 351.35 114 ;
      END
   END FE_OFN13305_n_143019

   PIN FE_OFN13311_n_143018
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 381.45 113.49 381.55 114 ;
      END
   END FE_OFN13311_n_143018

   PIN FE_OFN13320_n_142976
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 373.45 113.49 373.55 114 ;
      END
   END FE_OFN13320_n_142976

   PIN FE_OFN13322_n_142976
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 352.65 113.49 352.75 114 ;
      END
   END FE_OFN13322_n_142976

   PIN FE_OFN13323_n_142975
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 359.25 113.49 359.35 114 ;
      END
   END FE_OFN13323_n_142975

   PIN FE_OFN13325_n_142975
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 337.65 113.49 337.75 114 ;
      END
   END FE_OFN13325_n_142975

   PIN FE_OFN13334_n_142837
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 351.25 113.49 351.35 114 ;
      END
   END FE_OFN13334_n_142837

   PIN FE_OFN13341_n_142836
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 386.05 113.49 386.15 114 ;
      END
   END FE_OFN13341_n_142836

   PIN FE_OFN13494_n_111726
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 390.85 113.49 390.95 114 ;
      END
   END FE_OFN13494_n_111726

   PIN FE_OFN13569_n_143090
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 355.45 113.49 355.55 114 ;
      END
   END FE_OFN13569_n_143090

   PIN FE_OFN13578_n_143089
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 361.85 113.49 361.95 114 ;
      END
   END FE_OFN13578_n_143089

   PIN FE_OFN13583_n_143088
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 343.05 113.49 343.15 114 ;
      END
   END FE_OFN13583_n_143088

   PIN FE_OFN13590_n_142824
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 361.25 113.49 361.35 114 ;
      END
   END FE_OFN13590_n_142824

   PIN FE_OFN13601_n_142823
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 339.65 113.49 339.75 114 ;
      END
   END FE_OFN13601_n_142823

   PIN FE_OFN13734_n_143076
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 324.85 113.49 324.95 114 ;
      END
   END FE_OFN13734_n_143076

   PIN FE_OFN13740_n_143075
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 373.05 113.49 373.15 114 ;
      END
   END FE_OFN13740_n_143075

   PIN FE_OFN13746_n_143074
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 339.45 113.49 339.55 114 ;
      END
   END FE_OFN13746_n_143074

   PIN FE_OFN13753_n_142978
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 345.85 113.49 345.95 114 ;
      END
   END FE_OFN13753_n_142978

   PIN FE_OFN13913_n_111944
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 353.45 113.49 353.55 114 ;
      END
   END FE_OFN13913_n_111944

   PIN FE_OFN14283_n_144177
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 385.85 113.49 385.95 114 ;
      END
   END FE_OFN14283_n_144177

   PIN FE_OFN14445_n_143580
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 314.25 113.49 314.35 114 ;
      END
   END FE_OFN14445_n_143580

   PIN FE_OFN14884_n_590
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 430.09 104.95 430.6 105.05 ;
      END
   END FE_OFN14884_n_590

   PIN FE_OFN16411_b_1_4_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 326.05 113.49 326.15 114 ;
      END
   END FE_OFN16411_b_1_4_3

   PIN FE_OFN16414_b_1_4_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 324.05 113.49 324.15 114 ;
      END
   END FE_OFN16414_b_1_4_2

   PIN FE_OFN16657_n_8260
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 27.95 0.51 28.05 ;
      END
   END FE_OFN16657_n_8260

   PIN FE_OFN16659_n_6874
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 60.65 0 60.75 0.51 ;
      END
   END FE_OFN16659_n_6874

   PIN FE_OFN16661_n_8311
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 58.25 0 58.35 0.51 ;
      END
   END FE_OFN16661_n_8311

   PIN FE_OFN16665_n_6760
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 55.05 0 55.15 0.51 ;
      END
   END FE_OFN16665_n_6760

   PIN FE_OFN18760_n_142881
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 331.85 113.49 331.95 114 ;
      END
   END FE_OFN18760_n_142881

   PIN FE_OFN18846_n_142838
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 357.85 113.49 357.95 114 ;
      END
   END FE_OFN18846_n_142838

   PIN FE_OFN19317_b_1_0_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 347.05 113.49 347.15 114 ;
      END
   END FE_OFN19317_b_1_0_8

   PIN FE_OFN2291_n_142893
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 386.25 113.49 386.35 114 ;
      END
   END FE_OFN2291_n_142893

   PIN FE_OFN2305_n_142891
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 361.05 113.49 361.15 114 ;
      END
   END FE_OFN2305_n_142891

   PIN FE_OFN2501_n_111905
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 351.05 113.49 351.15 114 ;
      END
   END FE_OFN2501_n_111905

   PIN FE_OFN2681_n_111726
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 354.45 113.49 354.55 114 ;
      END
   END FE_OFN2681_n_111726

   PIN FE_OFN2697_n_142838
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 343.45 113.49 343.55 114 ;
      END
   END FE_OFN2697_n_142838

   PIN FE_OFN2707_n_142835
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 360.05 113.49 360.15 114 ;
      END
   END FE_OFN2707_n_142835

   PIN FE_OFN2766_n_142822
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 348.65 113.49 348.75 114 ;
      END
   END FE_OFN2766_n_142822

   PIN FE_OFN2827_n_142933
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 380.05 113.49 380.15 114 ;
      END
   END FE_OFN2827_n_142933

   PIN FE_OFN2887_n_143090
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 351.85 113.49 351.95 114 ;
      END
   END FE_OFN2887_n_143090

   PIN FE_OFN3030_n_143115
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 306.05 113.49 306.15 114 ;
      END
   END FE_OFN3030_n_143115

   PIN FE_OFN3049_n_143311
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 305.85 113.49 305.95 114 ;
      END
   END FE_OFN3049_n_143311

   PIN FE_OFN3057_n_143311
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 386.45 113.49 386.55 114 ;
      END
   END FE_OFN3057_n_143311

   PIN FE_OFN558_n_11188
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 16.15 0.51 16.25 ;
      END
   END FE_OFN558_n_11188

   PIN FE_OFN564_n_8310
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 15.95 0.51 16.05 ;
      END
   END FE_OFN564_n_8310

   PIN FE_OFN584_n_6873
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 38.65 113.49 38.75 114 ;
      END
   END FE_OFN584_n_6873

   PIN FE_OFN934_n_5008
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 39.85 0 39.95 0.51 ;
      END
   END FE_OFN934_n_5008

   PIN b_1_0_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 350.45 113.49 350.55 114 ;
      END
   END b_1_0_0

   PIN b_1_0_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 311.85 113.49 311.95 114 ;
      END
   END b_1_0_1

   PIN b_1_0_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 352.45 113.49 352.55 114 ;
      END
   END b_1_0_10

   PIN b_1_0_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 352.25 113.49 352.35 114 ;
      END
   END b_1_0_4

   PIN b_1_0_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 318.05 113.49 318.15 114 ;
      END
   END b_1_0_6

   PIN b_1_0_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 358.85 113.49 358.95 114 ;
      END
   END b_1_0_9

   PIN b_1_1_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 364.85 113.49 364.95 114 ;
      END
   END b_1_1_10

   PIN b_1_1_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 361.45 113.49 361.55 114 ;
      END
   END b_1_1_11

   PIN b_1_1_12
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 363.85 113.49 363.95 114 ;
      END
   END b_1_1_12

   PIN b_1_1_14
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 430.09 64.15 430.6 64.25 ;
      END
   END b_1_1_14

   PIN b_1_1_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 353.05 113.49 353.15 114 ;
      END
   END b_1_1_2

   PIN b_1_1_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 374.65 113.49 374.75 114 ;
      END
   END b_1_1_3

   PIN b_1_1_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 430.09 52.15 430.6 52.25 ;
      END
   END b_1_1_4

   PIN b_1_1_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 385.65 113.49 385.75 114 ;
      END
   END b_1_1_5

   PIN b_1_1_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 390.05 113.49 390.15 114 ;
      END
   END b_1_1_6

   PIN b_1_1_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 410.85 113.49 410.95 114 ;
      END
   END b_1_1_7

   PIN b_1_1_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 398.85 113.49 398.95 114 ;
      END
   END b_1_1_8

   PIN b_1_1_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 379.45 113.49 379.55 114 ;
      END
   END b_1_1_9

   PIN b_1_3_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 422.85 113.49 422.95 114 ;
      END
   END b_1_3_8

   PIN b_1_4_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 360.65 113.49 360.75 114 ;
      END
   END b_1_4_10

   PIN b_1_4_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 320.2 113.745 320.4 114 ;
      END
   END b_1_4_4

   PIN b_1_4_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 339.65 113.49 339.75 114 ;
      END
   END b_1_4_5

   PIN b_1_4_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 324.25 113.49 324.35 114 ;
      END
   END b_1_4_6

   PIN b_1_4_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 327.45 113.49 327.55 114 ;
      END
   END b_1_4_7

   PIN b_1_4_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 336.25 113.49 336.35 114 ;
      END
   END b_1_4_8

   PIN b_1_4_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 339.05 113.49 339.15 114 ;
      END
   END b_1_4_9

   PIN b_1_9_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 387 113.745 387.2 114 ;
      END
   END b_1_9_4

   PIN b_1_9_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 430.09 105.15 430.6 105.25 ;
      END
   END b_1_9_6

   PIN b_1_9_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 386.65 113.49 386.75 114 ;
      END
   END b_1_9_9

   PIN delay_add_ln34_unr2_unr9_stage2_stallmux_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 40.95 0.51 41.05 ;
      END
   END delay_add_ln34_unr2_unr9_stage2_stallmux_z_14_

   PIN ispd_clk
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 10.4 113.745 10.6 114 ;
      END
   END ispd_clk

   PIN mul_4376_72_n_334
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 368.45 113.49 368.55 114 ;
      END
   END mul_4376_72_n_334

   PIN mul_4376_72_n_336
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 369.05 113.49 369.15 114 ;
      END
   END mul_4376_72_n_336

   PIN mul_4376_72_n_337
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 367.85 113.49 367.95 114 ;
      END
   END mul_4376_72_n_337

   PIN mul_4376_72_n_766
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 285.25 113.49 285.35 114 ;
      END
   END mul_4376_72_n_766

   PIN mul_4376_72_n_771
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 283.85 113.49 283.95 114 ;
      END
   END mul_4376_72_n_771

   PIN mul_4379_72_n_329
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 324.45 113.49 324.55 114 ;
      END
   END mul_4379_72_n_329

   PIN mul_4385_72_n_185
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 322.85 113.49 322.95 114 ;
      END
   END mul_4385_72_n_185

   PIN mul_4385_72_n_218
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 304.05 113.49 304.15 114 ;
      END
   END mul_4385_72_n_218

   PIN mul_4385_72_n_288
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 350.65 113.49 350.75 114 ;
      END
   END mul_4385_72_n_288

   PIN mul_4385_72_n_290
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 348.85 113.49 348.95 114 ;
      END
   END mul_4385_72_n_290

   PIN mul_4385_72_n_331
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 289.65 113.49 289.75 114 ;
      END
   END mul_4385_72_n_331

   PIN n_10918
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 289.85 113.49 289.95 114 ;
      END
   END n_10918

   PIN n_111893
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 430.09 87.95 430.6 88.05 ;
      END
   END n_111893

   PIN n_114202
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 347.45 113.49 347.55 114 ;
      END
   END n_114202

   PIN n_114322
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 332.85 113.49 332.95 114 ;
      END
   END n_114322

   PIN n_115476
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 360.45 113.49 360.55 114 ;
      END
   END n_115476

   PIN n_116062
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.25 113.49 317.35 114 ;
      END
   END n_116062

   PIN n_116078
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 342.45 113.49 342.55 114 ;
      END
   END n_116078

   PIN n_116171
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 322.05 113.49 322.15 114 ;
      END
   END n_116171

   PIN n_116178
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 372.85 113.49 372.95 114 ;
      END
   END n_116178

   PIN n_118837
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 342.25 113.49 342.35 114 ;
      END
   END n_118837

   PIN n_120395
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 321.85 113.49 321.95 114 ;
      END
   END n_120395

   PIN n_120396
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 321.25 113.49 321.35 114 ;
      END
   END n_120396

   PIN n_121024
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 300.65 113.49 300.75 114 ;
      END
   END n_121024

   PIN n_121960
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 294.45 113.49 294.55 114 ;
      END
   END n_121960

   PIN n_123542
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 299.45 113.49 299.55 114 ;
      END
   END n_123542

   PIN n_124237
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 339.85 113.49 339.95 114 ;
      END
   END n_124237

   PIN n_128028
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 324.65 113.49 324.75 114 ;
      END
   END n_128028

   PIN n_129300
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 326.05 113.49 326.15 114 ;
      END
   END n_129300

   PIN n_129536
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 325.25 113.49 325.35 114 ;
      END
   END n_129536

   PIN n_140259
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 430.09 105.35 430.6 105.45 ;
      END
   END n_140259

   PIN n_142822
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 363.65 113.49 363.75 114 ;
      END
   END n_142822

   PIN n_142894
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 358.25 113.49 358.35 114 ;
      END
   END n_142894

   PIN n_143018
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 369.45 113.49 369.55 114 ;
      END
   END n_143018

   PIN n_143019
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 366.25 113.49 366.35 114 ;
      END
   END n_143019

   PIN n_143638
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 369.85 113.49 369.95 114 ;
      END
   END n_143638

   PIN n_14520
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 345.65 113.49 345.75 114 ;
      END
   END n_14520

   PIN n_15473
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 303.25 113.49 303.35 114 ;
      END
   END n_15473

   PIN n_17469
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 379.65 113.49 379.75 114 ;
      END
   END n_17469

   PIN n_19194
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 222.25 113.49 222.35 114 ;
      END
   END n_19194

   PIN n_276
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 347.45 113.49 347.55 114 ;
      END
   END n_276

   PIN n_31708
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 328.05 113.49 328.15 114 ;
      END
   END n_31708

   PIN n_31960
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 327.05 113.49 327.15 114 ;
      END
   END n_31960

   PIN n_31969
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 331.25 113.49 331.35 114 ;
      END
   END n_31969

   PIN n_32248
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 338.25 113.49 338.35 114 ;
      END
   END n_32248

   PIN n_32393
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 313.85 113.49 313.95 114 ;
      END
   END n_32393

   PIN n_32609
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 365.05 113.49 365.15 114 ;
      END
   END n_32609

   PIN n_33345
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 362.85 113.49 362.95 114 ;
      END
   END n_33345

   PIN n_33709
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 332.05 113.49 332.15 114 ;
      END
   END n_33709

   PIN n_35162
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 335.65 113.49 335.75 114 ;
      END
   END n_35162

   PIN n_35163
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 335.45 113.49 335.55 114 ;
      END
   END n_35163

   PIN n_36227
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 304.65 113.49 304.75 114 ;
      END
   END n_36227

   PIN n_36447
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 305.05 113.49 305.15 114 ;
      END
   END n_36447

   PIN n_36460
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 290.05 113.49 290.15 114 ;
      END
   END n_36460

   PIN n_36901
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 386.25 113.49 386.35 114 ;
      END
   END n_36901

   PIN n_37985
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 384.85 113.49 384.95 114 ;
      END
   END n_37985

   PIN n_3815
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 386.05 113.49 386.15 114 ;
      END
   END n_3815

   PIN n_4222
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 368.05 113.49 368.15 114 ;
      END
   END n_4222

   PIN n_48966
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 364.45 113.49 364.55 114 ;
      END
   END n_48966

   PIN n_49396
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 326.45 113.49 326.55 114 ;
      END
   END n_49396

   PIN n_54005
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 369.25 113.49 369.35 114 ;
      END
   END n_54005

   PIN n_6591
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 398.45 113.49 398.55 114 ;
      END
   END n_6591

   PIN n_7713
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 361.65 113.49 361.75 114 ;
      END
   END n_7713

   PIN n_7789
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 289.25 113.49 289.35 114 ;
      END
   END n_7789

   PIN n_7790
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 345.05 113.49 345.15 114 ;
      END
   END n_7790

   PIN n_8356
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 341.85 113.49 341.95 114 ;
      END
   END n_8356

   OBS
      LAYER via1 ;
         RECT 0 0 430.6 114 ;
      LAYER metal5 ;
         RECT 0.63 0.00 429.97 114 ;
      LAYER metal4 ;
         RECT 0.00 0.63 430.60 113.37 ;
      LAYER metal3 ;
         RECT 0.63 0.00 429.97 114 ;
      LAYER metal2 ;
         RECT 0.00 0.63 430.60 113.37 ;
      LAYER metal1 ;
         RECT 0.00 0.00 430.60 114 ;
   END
END h7

MACRO h6
   CLASS BLOCK ;
   FOREIGN h6 ;
   ORIGIN 0 0 ;
   SIZE 345.6 BY 364 ;
   SYMMETRY X Y R90 ;
   PIN FE_OCPN15477_n_143101
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 329.05 363.49 329.15 364 ;
      END
   END FE_OCPN15477_n_143101

   PIN FE_OCPN15479_n_143101
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 321.05 363.49 321.15 364 ;
      END
   END FE_OCPN15479_n_143101

   PIN FE_OFN10194_b_2_8_3
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 324.65 363.49 324.75 364 ;
      END
   END FE_OFN10194_b_2_8_3

   PIN FE_OFN10197_b_2_8_1
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 334.05 363.49 334.15 364 ;
      END
   END FE_OFN10197_b_2_8_1

   PIN FE_OFN10200_b_2_8_0
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 332.45 363.49 332.55 364 ;
      END
   END FE_OFN10200_b_2_8_0

   PIN FE_OFN11317_n_143101
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 356.55 345.6 356.65 ;
      END
   END FE_OFN11317_n_143101

   PIN FE_OFN11341_n_142989
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 331.45 363.49 331.55 364 ;
      END
   END FE_OFN11341_n_142989

   PIN FE_OFN11351_n_140257
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 344.95 345.6 345.05 ;
      END
   END FE_OFN11351_n_140257

   PIN FE_OFN11511_n_143549
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 344.75 345.6 344.85 ;
      END
   END FE_OFN11511_n_143549

   PIN FE_OFN11514_n_143549
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 354.75 345.6 354.85 ;
      END
   END FE_OFN11514_n_143549

   PIN FE_OFN11516_n_143549
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 334.95 345.6 335.05 ;
      END
   END FE_OFN11516_n_143549

   PIN FE_OFN11593_n_143231
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 354.55 345.6 354.65 ;
      END
   END FE_OFN11593_n_143231

   PIN FE_OFN11596_n_112428
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 279.75 345.6 279.85 ;
      END
   END FE_OFN11596_n_112428

   PIN FE_OFN11598_n_112428
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 332.95 345.6 333.05 ;
      END
   END FE_OFN11598_n_112428

   PIN FE_OFN11811_n_111876
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 331.85 363.49 331.95 364 ;
      END
   END FE_OFN11811_n_111876

   PIN FE_OFN11812_n_111876
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 355.55 345.6 355.65 ;
      END
   END FE_OFN11812_n_111876

   PIN FE_OFN11859_n_143243
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 310.25 363.49 310.35 364 ;
      END
   END FE_OFN11859_n_143243

   PIN FE_OFN11863_n_143230
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 320.05 363.49 320.15 364 ;
      END
   END FE_OFN11863_n_143230

   PIN FE_OFN11864_n_143230
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 311.05 363.49 311.15 364 ;
      END
   END FE_OFN11864_n_143230

   PIN FE_OFN11886_n_143104
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 335.15 345.6 335.25 ;
      END
   END FE_OFN11886_n_143104

   PIN FE_OFN11887_n_143104
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 332.45 363.49 332.55 364 ;
      END
   END FE_OFN11887_n_143104

   PIN FE_OFN11888_n_143104
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 330.75 345.6 330.85 ;
      END
   END FE_OFN11888_n_143104

   PIN FE_OFN11889_n_143104
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 267.75 345.6 267.85 ;
      END
   END FE_OFN11889_n_143104

   PIN FE_OFN11892_n_143103
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 332.25 363.49 332.35 364 ;
      END
   END FE_OFN11892_n_143103

   PIN FE_OFN11893_n_143103
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 354.35 345.6 354.45 ;
      END
   END FE_OFN11893_n_143103

   PIN FE_OFN11898_n_143062
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 350.15 345.6 350.25 ;
      END
   END FE_OFN11898_n_143062

   PIN FE_OFN11900_n_143062
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 360.35 345.6 360.45 ;
      END
   END FE_OFN11900_n_143062

   PIN FE_OFN11901_n_143062
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 323.05 363.49 323.15 364 ;
      END
   END FE_OFN11901_n_143062

   PIN FE_OFN11905_n_143061
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 339.95 345.6 340.05 ;
      END
   END FE_OFN11905_n_143061

   PIN FE_OFN11906_n_143061
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 316.55 345.6 316.65 ;
      END
   END FE_OFN11906_n_143061

   PIN FE_OFN11907_n_143060
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 328.95 345.6 329.05 ;
      END
   END FE_OFN11907_n_143060

   PIN FE_OFN11913_n_143060
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 305.85 363.49 305.95 364 ;
      END
   END FE_OFN11913_n_143060

   PIN FE_OFN11920_n_143047
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 267.75 345.6 267.85 ;
      END
   END FE_OFN11920_n_143047

   PIN FE_OFN11921_n_143047
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 332.25 363.49 332.35 364 ;
      END
   END FE_OFN11921_n_143047

   PIN FE_OFN12307_n_111875
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 331.15 345.6 331.25 ;
      END
   END FE_OFN12307_n_111875

   PIN FE_OFN12308_n_111875
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 307.45 363.49 307.55 364 ;
      END
   END FE_OFN12308_n_111875

   PIN FE_OFN12310_n_111875
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 306.05 363.49 306.15 364 ;
      END
   END FE_OFN12310_n_111875

   PIN FE_OFN12312_n_111877
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 320.85 363.49 320.95 364 ;
      END
   END FE_OFN12312_n_111877

   PIN FE_OFN12313_n_111877
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 319.25 363.49 319.35 364 ;
      END
   END FE_OFN12313_n_111877

   PIN FE_OFN12320_n_112427
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 351.95 345.6 352.05 ;
      END
   END FE_OFN12320_n_112427

   PIN FE_OFN12323_n_112427
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 321.05 363.49 321.15 364 ;
      END
   END FE_OFN12323_n_112427

   PIN FE_OFN12325_n_112470
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 352.75 345.6 352.85 ;
      END
   END FE_OFN12325_n_112470

   PIN FE_OFN12331_n_137473
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 331.25 363.49 331.35 364 ;
      END
   END FE_OFN12331_n_137473

   PIN FE_OFN12332_n_137473
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 352.55 345.6 352.65 ;
      END
   END FE_OFN12332_n_137473

   PIN FE_OFN12335_n_137268
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 318.95 345.6 319.05 ;
      END
   END FE_OFN12335_n_137268

   PIN FE_OFN12344_n_142992
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 319.85 363.49 319.95 364 ;
      END
   END FE_OFN12344_n_142992

   PIN FE_OFN12357_n_142922
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 267.55 345.6 267.65 ;
      END
   END FE_OFN12357_n_142922

   PIN FE_OFN12358_n_142922
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 289.55 345.6 289.65 ;
      END
   END FE_OFN12358_n_142922

   PIN FE_OFN12360_n_142922
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 345.15 345.6 345.25 ;
      END
   END FE_OFN12360_n_142922

   PIN FE_OFN12361_n_142922
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 319.25 363.49 319.35 364 ;
      END
   END FE_OFN12361_n_142922

   PIN FE_OFN12365_n_142921
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 316.95 345.6 317.05 ;
      END
   END FE_OFN12365_n_142921

   PIN FE_OFN12366_n_142921
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.345 345.3 345.6 345.5 ;
      END
   END FE_OFN12366_n_142921

   PIN FE_OFN12377_n_142908
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 330.85 363.49 330.95 364 ;
      END
   END FE_OFN12377_n_142908

   PIN FE_OFN12378_n_142908
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 267.95 345.6 268.05 ;
      END
   END FE_OFN12378_n_142908

   PIN FE_OFN12379_n_142908
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 349.95 345.6 350.05 ;
      END
   END FE_OFN12379_n_142908

   PIN FE_OFN12380_n_142907
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 329.45 363.49 329.55 364 ;
      END
   END FE_OFN12380_n_142907

   PIN FE_OFN12381_n_142907
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 319.15 345.6 319.25 ;
      END
   END FE_OFN12381_n_142907

   PIN FE_OFN12387_n_142906
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 334.95 345.6 335.05 ;
      END
   END FE_OFN12387_n_142906

   PIN FE_OFN12388_n_142906
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 269.15 345.6 269.25 ;
      END
   END FE_OFN12388_n_142906

   PIN FE_OFN12416_n_143396
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 332.55 345.6 332.65 ;
      END
   END FE_OFN12416_n_143396

   PIN FE_OFN12598_n_111738
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 331.35 345.6 331.45 ;
      END
   END FE_OFN12598_n_111738

   PIN FE_OFN12600_n_111738
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 342.95 345.6 343.05 ;
      END
   END FE_OFN12600_n_111738

   PIN FE_OFN12601_n_111738
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 341.35 345.6 341.45 ;
      END
   END FE_OFN12601_n_111738

   PIN FE_OFN12602_n_111738
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 320.25 363.49 320.35 364 ;
      END
   END FE_OFN12602_n_111738

   PIN FE_OFN12607_n_112606
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 345.75 345.6 345.85 ;
      END
   END FE_OFN12607_n_112606

   PIN FE_OFN12608_n_112606
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 319.05 363.49 319.15 364 ;
      END
   END FE_OFN12608_n_112606

   PIN FE_OFN12614_n_112689
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 320.45 363.49 320.55 364 ;
      END
   END FE_OFN12614_n_112689

   PIN FE_OFN12615_n_112689
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 334.65 363.49 334.75 364 ;
      END
   END FE_OFN12615_n_112689

   PIN FE_OFN12620_n_112690
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 324.45 363.49 324.55 364 ;
      END
   END FE_OFN12620_n_112690

   PIN FE_OFN12621_n_112690
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 337.95 345.6 338.05 ;
      END
   END FE_OFN12621_n_112690

   PIN FE_OFN12626_n_143646
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 305.25 363.49 305.35 364 ;
      END
   END FE_OFN12626_n_143646

   PIN FE_OFN12653_n_111913
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 355.95 345.6 356.05 ;
      END
   END FE_OFN12653_n_111913

   PIN FE_OFN12654_n_111913
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 332.05 363.49 332.15 364 ;
      END
   END FE_OFN12654_n_111913

   PIN FE_OFN12655_n_111913
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 352.35 345.6 352.45 ;
      END
   END FE_OFN12655_n_111913

   PIN FE_OFN13022_n_142949
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 335.95 345.6 336.05 ;
      END
   END FE_OFN13022_n_142949

   PIN FE_OFN13026_n_142948
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 311.35 345.6 311.45 ;
      END
   END FE_OFN13026_n_142948

   PIN FE_OFN13027_n_142948
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 279.95 345.6 280.05 ;
      END
   END FE_OFN13027_n_142948

   PIN FE_OFN13028_n_142948
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 308.25 363.49 308.35 364 ;
      END
   END FE_OFN13028_n_142948

   PIN FE_OFN13554_n_143397
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 327.15 345.6 327.25 ;
      END
   END FE_OFN13554_n_143397

   PIN FE_OFN13555_n_143397
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 341.15 345.6 341.25 ;
      END
   END FE_OFN13555_n_143397

   PIN FE_OFN13556_n_143397
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 339.35 345.6 339.45 ;
      END
   END FE_OFN13556_n_143397

   PIN FE_OFN15932_n_143241
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 330.65 363.49 330.75 364 ;
      END
   END FE_OFN15932_n_143241

   PIN FE_OFN17143_n_21437
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 330.45 363.49 330.55 364 ;
      END
   END FE_OFN17143_n_21437

   PIN FE_OFN17204_n_16278
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 329.85 363.49 329.95 364 ;
      END
   END FE_OFN17204_n_16278

   PIN FE_OFN17229_n_142990
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 320.95 345.6 321.05 ;
      END
   END FE_OFN17229_n_142990

   PIN FE_OFN17234_n_142989
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 359.15 345.6 359.25 ;
      END
   END FE_OFN17234_n_142989

   PIN FE_OFN18945_n_112470
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 348.75 345.6 348.85 ;
      END
   END FE_OFN18945_n_112470

   PIN FE_OFN3348_n_14460
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 301.75 345.6 301.85 ;
      END
   END FE_OFN3348_n_14460

   PIN FE_OFN3417_n_112606
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 338.75 345.6 338.85 ;
      END
   END FE_OFN3417_n_112606

   PIN FE_OFN3476_n_142921
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 335.05 363.49 335.15 364 ;
      END
   END FE_OFN3476_n_142921

   PIN FE_OFN3535_n_140257
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 314.65 363.49 314.75 364 ;
      END
   END FE_OFN3535_n_140257

   PIN FE_OFN3615_n_112427
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 333.85 363.49 333.95 364 ;
      END
   END FE_OFN3615_n_112427

   PIN FE_OFN3639_n_143227
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 332.85 363.49 332.95 364 ;
      END
   END FE_OFN3639_n_143227

   PIN FE_OFN3650_n_143231
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 351.55 345.6 351.65 ;
      END
   END FE_OFN3650_n_143231

   PIN FE_OFN3718_n_143243
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 323.85 363.49 323.95 364 ;
      END
   END FE_OFN3718_n_143243

   PIN FE_OFN3731_n_143397
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 346.95 345.6 347.05 ;
      END
   END FE_OFN3731_n_143397

   PIN FE_OFN3754_n_143549
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 336.35 345.6 336.45 ;
      END
   END FE_OFN3754_n_143549

   PIN FE_OFN3755_n_143549
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 314.35 345.6 314.45 ;
      END
   END FE_OFN3755_n_143549

   PIN mul_4665_72_n_303
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 292.95 345.6 293.05 ;
      END
   END mul_4665_72_n_303

   PIN mul_4665_72_n_305
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 312.95 345.6 313.05 ;
      END
   END mul_4665_72_n_305

   PIN mul_4665_72_n_317
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 295.15 345.6 295.25 ;
      END
   END mul_4665_72_n_317

   PIN mul_4665_72_n_318
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 295.35 345.6 295.45 ;
      END
   END mul_4665_72_n_318

   PIN mul_4665_72_n_327
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 301.95 345.6 302.05 ;
      END
   END mul_4665_72_n_327

   PIN mul_4665_72_n_328
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 300.35 345.6 300.45 ;
      END
   END mul_4665_72_n_328

   PIN mul_4666_72_n_308
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 346.95 345.6 347.05 ;
      END
   END mul_4666_72_n_308

   PIN mul_4666_72_n_309
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 340.15 345.6 340.25 ;
      END
   END mul_4666_72_n_309

   PIN mul_4666_72_n_848
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 330.05 363.49 330.15 364 ;
      END
   END mul_4666_72_n_848

   PIN mul_4668_72_n_57
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 292.65 363.49 292.75 364 ;
      END
   END mul_4668_72_n_57

   PIN mul_4668_72_n_73
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 292.45 363.49 292.55 364 ;
      END
   END mul_4668_72_n_73

   PIN mul_4668_72_n_767
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 293.25 363.49 293.35 364 ;
      END
   END mul_4668_72_n_767

   PIN mul_4671_72_n_151
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 320.25 363.49 320.35 364 ;
      END
   END mul_4671_72_n_151

   PIN mul_4671_72_n_170
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 319.45 363.49 319.55 364 ;
      END
   END mul_4671_72_n_170

   PIN mul_4671_72_n_225
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 285.05 363.49 285.15 364 ;
      END
   END mul_4671_72_n_225

   PIN mul_4671_72_n_251
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 283.45 363.49 283.55 364 ;
      END
   END mul_4671_72_n_251

   PIN mul_4671_72_n_338
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 285.85 363.49 285.95 364 ;
      END
   END mul_4671_72_n_338

   PIN mul_4671_72_n_340
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 286.25 363.49 286.35 364 ;
      END
   END mul_4671_72_n_340

   PIN n_1080
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 287.35 345.6 287.45 ;
      END
   END n_1080

   PIN n_1081
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 286.95 345.6 287.05 ;
      END
   END n_1081

   PIN n_1116
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 287.55 345.6 287.65 ;
      END
   END n_1116

   PIN n_1117
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 287.75 345.6 287.85 ;
      END
   END n_1117

   PIN n_111877
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 348.55 345.6 348.65 ;
      END
   END n_111877

   PIN n_111878
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 359.35 345.6 359.45 ;
      END
   END n_111878

   PIN n_11193
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 359.55 345.6 359.65 ;
      END
   END n_11193

   PIN n_112427
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 339.15 345.6 339.25 ;
      END
   END n_112427

   PIN n_112752
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 350.35 345.6 350.45 ;
      END
   END n_112752

   PIN n_112920
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 335.85 363.49 335.95 364 ;
      END
   END n_112920

   PIN n_113005
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 320.65 363.49 320.75 364 ;
      END
   END n_113005

   PIN n_113236
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 322.05 363.49 322.15 364 ;
      END
   END n_113236

   PIN n_113311
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 301.25 363.49 301.35 364 ;
      END
   END n_113311

   PIN n_113414
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 287.25 363.49 287.35 364 ;
      END
   END n_113414

   PIN n_113566
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 309.45 363.49 309.55 364 ;
      END
   END n_113566

   PIN n_113666
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 356.15 345.6 356.25 ;
      END
   END n_113666

   PIN n_113667
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 331.85 363.49 331.95 364 ;
      END
   END n_113667

   PIN n_113813
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 327.05 363.49 327.15 364 ;
      END
   END n_113813

   PIN n_113885
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 334.45 363.49 334.55 364 ;
      END
   END n_113885

   PIN n_113886
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 350.75 345.6 350.85 ;
      END
   END n_113886

   PIN n_113889
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 319.65 363.49 319.75 364 ;
      END
   END n_113889

   PIN n_113928
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 325.15 345.6 325.25 ;
      END
   END n_113928

   PIN n_113988
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 310.85 363.49 310.95 364 ;
      END
   END n_113988

   PIN n_113989
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 329.65 363.49 329.75 364 ;
      END
   END n_113989

   PIN n_114186
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 333.45 363.49 333.55 364 ;
      END
   END n_114186

   PIN n_114247
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 313.55 345.6 313.65 ;
      END
   END n_114247

   PIN n_114413
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 299.65 363.49 299.75 364 ;
      END
   END n_114413

   PIN n_114864
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 359.75 345.6 359.85 ;
      END
   END n_114864

   PIN n_115329
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 305.85 363.49 305.95 364 ;
      END
   END n_115329

   PIN n_115463
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 329.75 345.6 329.85 ;
      END
   END n_115463

   PIN n_115978
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 295.75 345.6 295.85 ;
      END
   END n_115978

   PIN n_116236
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 331.45 363.49 331.55 364 ;
      END
   END n_116236

   PIN n_118055
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 310.05 363.49 310.15 364 ;
      END
   END n_118055

   PIN n_118083
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 333.25 363.49 333.35 364 ;
      END
   END n_118083

   PIN n_118092
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 300.05 363.49 300.15 364 ;
      END
   END n_118092

   PIN n_118139
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 325.35 345.6 325.45 ;
      END
   END n_118139

   PIN n_118170
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 326.05 363.49 326.15 364 ;
      END
   END n_118170

   PIN n_118357
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 306.45 363.49 306.55 364 ;
      END
   END n_118357

   PIN n_119785
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 328.65 363.49 328.75 364 ;
      END
   END n_119785

   PIN n_119984
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 347.15 345.6 347.25 ;
      END
   END n_119984

   PIN n_120014
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 300.45 363.49 300.55 364 ;
      END
   END n_120014

   PIN n_120034
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 312.45 363.49 312.55 364 ;
      END
   END n_120034

   PIN n_120415
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 318.95 345.6 319.05 ;
      END
   END n_120415

   PIN n_120432
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 299.45 363.49 299.55 364 ;
      END
   END n_120432

   PIN n_120820
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 306.25 363.49 306.35 364 ;
      END
   END n_120820

   PIN n_121838
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 347.35 345.6 347.45 ;
      END
   END n_121838

   PIN n_121898
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 322.95 345.6 323.05 ;
      END
   END n_121898

   PIN n_122243
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 325.55 345.6 325.65 ;
      END
   END n_122243

   PIN n_122244
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 325.75 345.6 325.85 ;
      END
   END n_122244

   PIN n_122366
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 308.45 363.49 308.55 364 ;
      END
   END n_122366

   PIN n_122676
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 329.25 363.49 329.35 364 ;
      END
   END n_122676

   PIN n_123562
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 286.65 363.49 286.75 364 ;
      END
   END n_123562

   PIN n_123563
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 285.25 363.49 285.35 364 ;
      END
   END n_123563

   PIN n_123583
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 315.55 345.6 315.65 ;
      END
   END n_123583

   PIN n_123660
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 326.35 345.6 326.45 ;
      END
   END n_123660

   PIN n_123664
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 326.55 345.6 326.65 ;
      END
   END n_123664

   PIN n_123911
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 307.85 363.49 307.95 364 ;
      END
   END n_123911

   PIN n_12563
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 315.15 345.6 315.25 ;
      END
   END n_12563

   PIN n_125637
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 315.95 345.6 316.05 ;
      END
   END n_125637

   PIN n_126034
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 294.45 363.49 294.55 364 ;
      END
   END n_126034

   PIN n_12651
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 330.15 345.6 330.25 ;
      END
   END n_12651

   PIN n_126615
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 326.95 345.6 327.05 ;
      END
   END n_126615

   PIN n_126616
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 329.15 345.6 329.25 ;
      END
   END n_126616

   PIN n_126766
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 283.65 363.49 283.75 364 ;
      END
   END n_126766

   PIN n_127005
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 291.45 363.49 291.55 364 ;
      END
   END n_127005

   PIN n_128115
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 305.65 363.49 305.75 364 ;
      END
   END n_128115

   PIN n_129077
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 282.25 363.49 282.35 364 ;
      END
   END n_129077

   PIN n_129225
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 290.45 363.49 290.55 364 ;
      END
   END n_129225

   PIN n_129226
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 290.85 363.49 290.95 364 ;
      END
   END n_129226

   PIN n_129237
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 359.95 345.6 360.05 ;
      END
   END n_129237

   PIN n_130207
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 305.35 345.6 305.45 ;
      END
   END n_130207

   PIN n_130208
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 305.55 345.6 305.65 ;
      END
   END n_130208

   PIN n_131285
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 293.35 345.6 293.45 ;
      END
   END n_131285

   PIN n_131287
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 314.75 345.6 314.85 ;
      END
   END n_131287

   PIN n_131292
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 287.45 363.49 287.55 364 ;
      END
   END n_131292

   PIN n_131450
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 279.45 363.49 279.55 364 ;
      END
   END n_131450

   PIN n_133179
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 303.55 345.6 303.65 ;
      END
   END n_133179

   PIN n_133200
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 319.15 345.6 319.25 ;
      END
   END n_133200

   PIN n_133250
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 282.05 363.49 282.15 364 ;
      END
   END n_133250

   PIN n_133423
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 299.25 363.49 299.35 364 ;
      END
   END n_133423

   PIN n_133476
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 313.75 345.6 313.85 ;
      END
   END n_133476

   PIN n_134206
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 301.55 345.6 301.65 ;
      END
   END n_134206

   PIN n_134263
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 275.85 363.49 275.95 364 ;
      END
   END n_134263

   PIN n_135022
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 276.05 363.49 276.15 364 ;
      END
   END n_135022

   PIN n_13640
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 244.15 345.6 244.25 ;
      END
   END n_13640

   PIN n_142908
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 331.05 363.49 331.15 364 ;
      END
   END n_142908

   PIN n_142909
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 353.75 345.6 353.85 ;
      END
   END n_142909

   PIN n_142949
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 338.55 345.6 338.65 ;
      END
   END n_142949

   PIN n_142990
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 330.95 345.6 331.05 ;
      END
   END n_142990

   PIN n_143047
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 332.95 345.6 333.05 ;
      END
   END n_143047

   PIN n_143103
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 317.15 345.6 317.25 ;
      END
   END n_143103

   PIN n_143105
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 334.85 363.49 334.95 364 ;
      END
   END n_143105

   PIN n_143227
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.345 348.1 345.6 348.3 ;
      END
   END n_143227

   PIN n_143230
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 303.55 345.6 303.65 ;
      END
   END n_143230

   PIN n_143399
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 343.35 345.6 343.45 ;
      END
   END n_143399

   PIN n_144318
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 195.95 345.6 196.05 ;
      END
   END n_144318

   PIN n_144319
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 325.05 363.49 325.15 364 ;
      END
   END n_144319

   PIN n_14458
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 308.95 345.6 309.05 ;
      END
   END n_14458

   PIN n_14498
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 302.15 345.6 302.25 ;
      END
   END n_14498

   PIN n_14596
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 310.95 345.6 311.05 ;
      END
   END n_14596

   PIN n_14610
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 279.35 345.6 279.45 ;
      END
   END n_14610

   PIN n_15054
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 255.75 345.6 255.85 ;
      END
   END n_15054

   PIN n_16295
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 317.35 345.6 317.45 ;
      END
   END n_16295

   PIN n_16449
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 293.15 345.6 293.25 ;
      END
   END n_16449

   PIN n_16450
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 295.95 345.6 296.05 ;
      END
   END n_16450

   PIN n_16451
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 295.55 345.6 295.65 ;
      END
   END n_16451

   PIN n_17519
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 278.95 345.6 279.05 ;
      END
   END n_17519

   PIN n_17521
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 280.95 345.6 281.05 ;
      END
   END n_17521

   PIN n_18074
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 268.95 345.6 269.05 ;
      END
   END n_18074

   PIN n_18268
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 290.95 345.6 291.05 ;
      END
   END n_18268

   PIN n_18269
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 291.55 345.6 291.65 ;
      END
   END n_18269

   PIN n_18270
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 291.75 345.6 291.85 ;
      END
   END n_18270

   PIN n_18271
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 281.15 345.6 281.25 ;
      END
   END n_18271

   PIN n_20858
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 332.85 363.49 332.95 364 ;
      END
   END n_20858

   PIN n_20869
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 333.65 363.49 333.75 364 ;
      END
   END n_20869

   PIN n_2993
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 326.75 345.6 326.85 ;
      END
   END n_2993

   PIN n_3080
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 353.55 345.6 353.65 ;
      END
   END n_3080

   PIN n_3081
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 353.15 345.6 353.25 ;
      END
   END n_3081

   PIN n_32762
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 319.45 363.49 319.55 364 ;
      END
   END n_32762

   PIN n_33403
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 353.35 345.6 353.45 ;
      END
   END n_33403

   PIN n_33960
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 315.25 363.49 315.35 364 ;
      END
   END n_33960

   PIN n_34015
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 316.05 363.49 316.15 364 ;
      END
   END n_34015

   PIN n_34242
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.85 363.49 317.95 364 ;
      END
   END n_34242

   PIN n_3519
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 337.75 345.6 337.85 ;
      END
   END n_3519

   PIN n_3543
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 347.55 345.6 347.65 ;
      END
   END n_3543

   PIN n_3620
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 349.35 345.6 349.45 ;
      END
   END n_3620

   PIN n_372
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 303.75 345.6 303.85 ;
      END
   END n_372

   PIN n_3728
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 336.25 363.49 336.35 364 ;
      END
   END n_3728

   PIN n_3823
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 355.75 345.6 355.85 ;
      END
   END n_3823

   PIN n_3824
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 355.35 345.6 355.45 ;
      END
   END n_3824

   PIN n_3915
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 300.95 345.6 301.05 ;
      END
   END n_3915

   PIN n_39274
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 336.55 345.6 336.65 ;
      END
   END n_39274

   PIN n_5066
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 338.35 345.6 338.45 ;
      END
   END n_5066

   PIN n_5085
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 334.05 363.49 334.15 364 ;
      END
   END n_5085

   PIN n_5164
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 345.35 345.6 345.45 ;
      END
   END n_5164

   PIN n_5958
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 256.35 345.6 256.45 ;
      END
   END n_5958

   PIN n_6550
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 337.95 345.6 338.05 ;
      END
   END n_6550

   PIN n_6837
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 312.45 363.49 312.55 364 ;
      END
   END n_6837

   PIN n_6937
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 183.95 345.6 184.05 ;
      END
   END n_6937

   PIN n_8246
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 349.55 345.6 349.65 ;
      END
   END n_8246

   PIN n_8247
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 184.15 345.6 184.25 ;
      END
   END n_8247

   PIN n_8251
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 332.15 345.6 332.25 ;
      END
   END n_8251

   PIN n_8256
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 338.95 345.6 339.05 ;
      END
   END n_8256

   PIN n_8312
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 338.15 345.6 338.25 ;
      END
   END n_8312

   PIN n_8343
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 196.15 345.6 196.25 ;
      END
   END n_8343

   PIN n_8481
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 264.95 345.6 265.05 ;
      END
   END n_8481

   PIN n_8788
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 339.75 345.6 339.85 ;
      END
   END n_8788

   PIN n_8789
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 343.15 345.6 343.25 ;
      END
   END n_8789

   PIN n_976
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 291.15 345.6 291.25 ;
      END
   END n_976

   PIN FE_OFN10190_b_2_9_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 332.05 363.49 332.15 364 ;
      END
   END FE_OFN10190_b_2_9_2

   PIN FE_OFN10235_b_2_5_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 319.85 363.49 319.95 364 ;
      END
   END FE_OFN10235_b_2_5_6

   PIN FE_OFN10237_b_2_5_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 315.65 363.49 315.75 364 ;
      END
   END FE_OFN10237_b_2_5_5

   PIN FE_OFN10240_b_2_5_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 314.85 363.49 314.95 364 ;
      END
   END FE_OFN10240_b_2_5_4

   PIN FE_OFN10242_b_2_5_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 315.05 363.49 315.15 364 ;
      END
   END FE_OFN10242_b_2_5_3

   PIN FE_OFN10244_b_2_5_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 318.65 363.49 318.75 364 ;
      END
   END FE_OFN10244_b_2_5_2

   PIN FE_OFN10247_b_2_5_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 333.45 363.49 333.55 364 ;
      END
   END FE_OFN10247_b_2_5_1

   PIN FE_OFN10252_b_2_5_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 351.75 345.6 351.85 ;
      END
   END FE_OFN10252_b_2_5_0

   PIN FE_OFN10253_b_2_5_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 311.25 363.49 311.35 364 ;
      END
   END FE_OFN10253_b_2_5_0

   PIN FE_OFN10286_b_2_3_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 348.95 345.6 349.05 ;
      END
   END FE_OFN10286_b_2_3_1

   PIN FE_OFN10288_b_2_3_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 338.95 345.6 339.05 ;
      END
   END FE_OFN10288_b_2_3_0

   PIN FE_OFN10295_b_2_2_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 303.35 345.6 303.45 ;
      END
   END FE_OFN10295_b_2_2_2

   PIN FE_OFN10302_b_2_1_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 256.15 345.6 256.25 ;
      END
   END FE_OFN10302_b_2_1_6

   PIN FE_OFN10304_b_2_1_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 256.55 345.6 256.65 ;
      END
   END FE_OFN10304_b_2_1_5

   PIN FE_OFN10306_b_2_1_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 269.35 345.6 269.45 ;
      END
   END FE_OFN10306_b_2_1_4

   PIN FE_OFN10308_b_2_1_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 281.95 345.6 282.05 ;
      END
   END FE_OFN10308_b_2_1_3

   PIN FE_OFN10312_b_2_1_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 287.15 345.6 287.25 ;
      END
   END FE_OFN10312_b_2_1_1

   PIN FE_OFN10314_b_2_1_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 288.95 345.6 289.05 ;
      END
   END FE_OFN10314_b_2_1_0

   PIN FE_OFN11316_n_143101
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 358.95 345.6 359.05 ;
      END
   END FE_OFN11316_n_143101

   PIN FE_OFN11338_n_143645
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 316.15 345.6 316.25 ;
      END
   END FE_OFN11338_n_143645

   PIN FE_OFN11339_n_142989
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 329.25 363.49 329.35 364 ;
      END
   END FE_OFN11339_n_142989

   PIN FE_OFN11365_n_112550
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 335.65 363.49 335.75 364 ;
      END
   END FE_OFN11365_n_112550

   PIN FE_OFN11397_n_140245
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 337.55 345.6 337.65 ;
      END
   END FE_OFN11397_n_140245

   PIN FE_OFN11428_n_142905
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 330.05 363.49 330.15 364 ;
      END
   END FE_OFN11428_n_142905

   PIN FE_OFN11429_n_142905
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 350.95 345.6 351.05 ;
      END
   END FE_OFN11429_n_142905

   PIN FE_OFN11435_n_142919
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 353.75 345.6 353.85 ;
      END
   END FE_OFN11435_n_142919

   PIN FE_OFN11706_n_142947
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 304.45 363.49 304.55 364 ;
      END
   END FE_OFN11706_n_142947

   PIN FE_OFN11857_n_143243
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 313.35 345.6 313.45 ;
      END
   END FE_OFN11857_n_143243

   PIN FE_OFN11871_n_143229
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 360.75 345.6 360.85 ;
      END
   END FE_OFN11871_n_143229

   PIN FE_OFN11875_n_143227
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 303.35 345.6 303.45 ;
      END
   END FE_OFN11875_n_143227

   PIN FE_OFN11876_n_143227
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.345 288.3 345.6 288.5 ;
      END
   END FE_OFN11876_n_143227

   PIN FE_OFN11896_n_143102
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 353.55 345.6 353.65 ;
      END
   END FE_OFN11896_n_143102

   PIN FE_OFN11903_n_143061
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 353.95 345.6 354.05 ;
      END
   END FE_OFN11903_n_143061

   PIN FE_OFN11917_n_143048
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 268.95 345.6 269.05 ;
      END
   END FE_OFN11917_n_143048

   PIN FE_OFN11923_n_143047
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 321.65 363.49 321.75 364 ;
      END
   END FE_OFN11923_n_143047

   PIN FE_OFN12333_n_137473
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 348.95 345.6 349.05 ;
      END
   END FE_OFN12333_n_137473

   PIN FE_OFN12336_n_137268
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.345 283.9 345.6 284.1 ;
      END
   END FE_OFN12336_n_137268

   PIN FE_OFN12343_n_142992
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 358.75 345.6 358.85 ;
      END
   END FE_OFN12343_n_142992

   PIN FE_OFN12348_n_142991
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 353.35 345.6 353.45 ;
      END
   END FE_OFN12348_n_142991

   PIN FE_OFN12349_n_142991
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 344.35 345.6 344.45 ;
      END
   END FE_OFN12349_n_142991

   PIN FE_OFN12350_n_142991
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 284.95 345.6 285.05 ;
      END
   END FE_OFN12350_n_142991

   PIN FE_OFN12369_n_142920
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 360.55 345.6 360.65 ;
      END
   END FE_OFN12369_n_142920

   PIN FE_OFN12371_n_142920
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 281.75 345.6 281.85 ;
      END
   END FE_OFN12371_n_142920

   PIN FE_OFN12374_n_142920
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 344.15 345.6 344.25 ;
      END
   END FE_OFN12374_n_142920

   PIN FE_OFN12384_n_142907
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 266.95 345.6 267.05 ;
      END
   END FE_OFN12384_n_142907

   PIN FE_OFN12385_n_142906
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 332.35 345.6 332.45 ;
      END
   END FE_OFN12385_n_142906

   PIN FE_OFN12399_n_620
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 299.15 345.6 299.25 ;
      END
   END FE_OFN12399_n_620

   PIN FE_OFN12401_n_694
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.345 352.9 345.6 353.1 ;
      END
   END FE_OFN12401_n_694

   PIN FE_OFN12595_n_111737
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 339.55 345.6 339.65 ;
      END
   END FE_OFN12595_n_111737

   PIN FE_OFN12612_n_112608
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.345 310.9 345.6 311.1 ;
      END
   END FE_OFN12612_n_112608

   PIN FE_OFN12625_n_143646
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 279.15 345.6 279.25 ;
      END
   END FE_OFN12625_n_143646

   PIN FE_OFN13015_n_142950
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 302.35 345.6 302.45 ;
      END
   END FE_OFN13015_n_142950

   PIN FE_OFN13019_n_142949
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 316.75 345.6 316.85 ;
      END
   END FE_OFN13019_n_142949

   PIN FE_OFN13021_n_142949
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 291.35 345.6 291.45 ;
      END
   END FE_OFN13021_n_142949

   PIN FE_OFN14267_n_140244
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 291.55 345.6 291.65 ;
      END
   END FE_OFN14267_n_140244

   PIN FE_OFN14364_n_372
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 278.95 345.6 279.05 ;
      END
   END FE_OFN14364_n_372

   PIN FE_OFN14471_n_143059
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 308.45 363.49 308.55 364 ;
      END
   END FE_OFN14471_n_143059

   PIN FE_OFN14925_n_142989
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 282.95 345.6 283.05 ;
      END
   END FE_OFN14925_n_142989

   PIN FE_OFN14959_n_142989
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 314.25 363.49 314.35 364 ;
      END
   END FE_OFN14959_n_142989

   PIN FE_OFN15931_n_143241
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 358.55 345.6 358.65 ;
      END
   END FE_OFN15931_n_143241

   PIN FE_OFN17142_n_21437
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 358.35 345.6 358.45 ;
      END
   END FE_OFN17142_n_21437

   PIN FE_OFN17225_n_140257
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 334.45 363.49 334.55 364 ;
      END
   END FE_OFN17225_n_140257

   PIN FE_OFN17260_n_140245
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 330.55 345.6 330.65 ;
      END
   END FE_OFN17260_n_140245

   PIN FE_OFN17262_n_140245
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 311.25 363.49 311.35 364 ;
      END
   END FE_OFN17262_n_140245

   PIN FE_OFN18609_b_2_2_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 299.75 345.6 299.85 ;
      END
   END FE_OFN18609_b_2_2_0

   PIN FE_OFN18613_b_2_1_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 288.95 345.6 289.05 ;
      END
   END FE_OFN18613_b_2_1_2

   PIN FE_OFN19151_n_140244
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 324.95 345.6 325.05 ;
      END
   END FE_OFN19151_n_140244

   PIN FE_OFN19152_n_890
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 350.95 345.6 351.05 ;
      END
   END FE_OFN19152_n_890

   PIN FE_OFN2212_n_19616
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 329.65 363.49 329.75 364 ;
      END
   END FE_OFN2212_n_19616

   PIN FE_OFN2267_n_19602
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 333.25 363.49 333.35 364 ;
      END
   END FE_OFN2267_n_19602

   PIN FE_OFN3491_n_142919
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 315.45 363.49 315.55 364 ;
      END
   END FE_OFN3491_n_142919

   PIN FE_OFN3531_n_372
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 302.15 345.6 302.25 ;
      END
   END FE_OFN3531_n_372

   PIN FE_OFN3632_n_143045
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 314.15 345.6 314.25 ;
      END
   END FE_OFN3632_n_143045

   PIN FE_OFN3654_n_112550
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 303.45 363.49 303.55 364 ;
      END
   END FE_OFN3654_n_112550

   PIN FE_OFN3723_n_143241
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 345.75 345.6 345.85 ;
      END
   END FE_OFN3723_n_143241

   PIN FE_OFN3746_n_143551
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 312.65 363.49 312.75 364 ;
      END
   END FE_OFN3746_n_143551

   PIN FE_OFN3767_n_143645
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 306.95 345.6 307.05 ;
      END
   END FE_OFN3767_n_143645

   PIN b_2_2_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 336.15 345.6 336.25 ;
      END
   END b_2_2_10

   PIN b_2_2_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 334.65 0 334.75 0.51 ;
      END
   END b_2_2_11

   PIN b_2_2_12
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 315.35 345.6 315.45 ;
      END
   END b_2_2_12

   PIN b_2_2_13
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 331.05 0 331.15 0.51 ;
      END
   END b_2_2_13

   PIN b_2_2_14
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 331.05 0 331.15 0.51 ;
      END
   END b_2_2_14

   PIN b_2_2_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 307.35 345.6 307.45 ;
      END
   END b_2_2_3

   PIN b_2_2_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 208.15 345.6 208.25 ;
      END
   END b_2_2_5

   PIN b_2_2_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 315.75 345.6 315.85 ;
      END
   END b_2_2_6

   PIN b_2_2_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 305.15 345.6 305.25 ;
      END
   END b_2_2_7

   PIN b_2_2_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 308.95 345.6 309.05 ;
      END
   END b_2_2_8

   PIN b_2_2_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 297.35 345.6 297.45 ;
      END
   END b_2_2_9

   PIN b_2_3_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 339.15 345.6 339.25 ;
      END
   END b_2_3_2

   PIN b_2_3_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 330.95 345.6 331.05 ;
      END
   END b_2_3_3

   PIN b_2_3_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 351.15 345.6 351.25 ;
      END
   END b_2_3_4

   PIN b_2_3_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 336.95 345.6 337.05 ;
      END
   END b_2_3_5

   PIN b_2_3_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 331.65 363.49 331.75 364 ;
      END
   END b_2_3_9

   PIN b_2_5_12
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 356.75 345.6 356.85 ;
      END
   END b_2_5_12

   PIN b_2_5_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 299.55 345.6 299.65 ;
      END
   END b_2_5_8

   PIN b_2_8_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 307.45 363.49 307.55 364 ;
      END
   END b_2_8_0

   PIN b_2_8_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 308.25 363.49 308.35 364 ;
      END
   END b_2_8_1

   PIN b_2_8_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 303.95 345.6 304.05 ;
      END
   END b_2_8_10

   PIN b_2_8_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 300.25 363.49 300.35 364 ;
      END
   END b_2_8_11

   PIN b_2_8_12
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 319.25 0 319.35 0.51 ;
      END
   END b_2_8_12

   PIN b_2_8_13
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 319.25 0 319.35 0.51 ;
      END
   END b_2_8_13

   PIN b_2_8_14
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 319.05 0 319.15 0.51 ;
      END
   END b_2_8_14

   PIN b_2_8_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 321.45 363.49 321.55 364 ;
      END
   END b_2_8_2

   PIN b_2_8_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 299.85 363.49 299.95 364 ;
      END
   END b_2_8_3

   PIN b_2_8_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 313.95 345.6 314.05 ;
      END
   END b_2_8_4

   PIN b_2_8_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 323.4 363.745 323.6 364 ;
      END
   END b_2_8_5

   PIN b_2_8_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 306.65 363.49 306.75 364 ;
      END
   END b_2_8_6

   PIN b_2_8_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 321.25 363.49 321.35 364 ;
      END
   END b_2_8_7

   PIN b_2_8_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 305.05 363.49 305.15 364 ;
      END
   END b_2_8_8

   PIN b_2_8_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 318.85 0 318.95 0.51 ;
      END
   END b_2_8_9

   PIN b_2_9_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 332.65 363.49 332.75 364 ;
      END
   END b_2_9_10

   PIN b_2_9_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.345 302.9 345.6 303.1 ;
      END
   END b_2_9_3

   PIN b_2_9_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.345 357.7 345.6 357.9 ;
      END
   END b_2_9_4

   PIN b_2_9_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 357.35 345.6 357.45 ;
      END
   END b_2_9_6

   PIN b_2_9_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 304.95 345.6 305.05 ;
      END
   END b_2_9_7

   PIN b_2_9_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 349.15 345.6 349.25 ;
      END
   END b_2_9_9

   PIN mul_4665_72_n_306
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 313.15 345.6 313.25 ;
      END
   END mul_4665_72_n_306

   PIN mul_4665_72_n_326
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 301.35 345.6 301.45 ;
      END
   END mul_4665_72_n_326

   PIN mul_4665_72_n_332
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 316.35 345.6 316.45 ;
      END
   END mul_4665_72_n_332

   PIN mul_4665_72_n_334
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 303.15 345.6 303.25 ;
      END
   END mul_4665_72_n_334

   PIN mul_4666_72_n_73
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 331.05 363.49 331.15 364 ;
      END
   END mul_4666_72_n_73

   PIN mul_4671_72_n_319
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 308.05 363.49 308.15 364 ;
      END
   END mul_4671_72_n_319

   PIN n_1001
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 291.35 345.6 291.45 ;
      END
   END n_1001

   PIN n_10204
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 255.95 345.6 256.05 ;
      END
   END n_10204

   PIN n_10206
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 267.35 345.6 267.45 ;
      END
   END n_10206

   PIN n_1038
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 287.95 345.6 288.05 ;
      END
   END n_1038

   PIN n_10399
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 296.95 345.6 297.05 ;
      END
   END n_10399

   PIN n_10464
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 298.95 345.6 299.05 ;
      END
   END n_10464

   PIN n_1075
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 276.35 345.6 276.45 ;
      END
   END n_1075

   PIN n_1099
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 275.75 345.6 275.85 ;
      END
   END n_1099

   PIN n_111913
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 345.55 345.6 345.65 ;
      END
   END n_111913

   PIN n_112428
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 307.15 345.6 307.25 ;
      END
   END n_112428

   PIN n_112607
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.345 331.7 345.6 331.9 ;
      END
   END n_112607

   PIN n_112689
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 340.35 345.6 340.45 ;
      END
   END n_112689

   PIN n_113107
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 305.45 363.49 305.55 364 ;
      END
   END n_113107

   PIN n_113124
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 327.25 363.49 327.35 364 ;
      END
   END n_113124

   PIN n_113125
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 326.25 363.49 326.35 364 ;
      END
   END n_113125

   PIN n_113149
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 342.35 345.6 342.45 ;
      END
   END n_113149

   PIN n_113413
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 314.55 345.6 314.65 ;
      END
   END n_113413

   PIN n_113987
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 311.05 363.49 311.15 364 ;
      END
   END n_113987

   PIN n_114013
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 319.65 363.49 319.75 364 ;
      END
   END n_114013

   PIN n_114266
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 332.35 345.6 332.45 ;
      END
   END n_114266

   PIN n_115328
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 306.05 363.49 306.15 364 ;
      END
   END n_115328

   PIN n_115332
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 305.05 363.49 305.15 364 ;
      END
   END n_115332

   PIN n_116920
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 330.35 345.6 330.45 ;
      END
   END n_116920

   PIN n_118138
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 281.45 363.49 281.55 364 ;
      END
   END n_118138

   PIN n_118140
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 323.95 345.6 324.05 ;
      END
   END n_118140

   PIN n_119676
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 314.95 345.6 315.05 ;
      END
   END n_119676

   PIN n_119760
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 329.35 345.6 329.45 ;
      END
   END n_119760

   PIN n_119922
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 301.65 363.49 301.75 364 ;
      END
   END n_119922

   PIN n_119923
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 305.45 363.49 305.55 364 ;
      END
   END n_119923

   PIN n_121953
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 294.85 363.49 294.95 364 ;
      END
   END n_121953

   PIN n_122725
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 299.05 363.49 299.15 364 ;
      END
   END n_122725

   PIN n_12357
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 360.15 345.6 360.25 ;
      END
   END n_12357

   PIN n_123790
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 333.85 363.49 333.95 364 ;
      END
   END n_123790

   PIN n_123797
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 326.15 345.6 326.25 ;
      END
   END n_123797

   PIN n_123901
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 284.25 363.49 284.35 364 ;
      END
   END n_123901

   PIN n_124234
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 294.65 363.49 294.75 364 ;
      END
   END n_124234

   PIN n_124239
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 297.45 363.49 297.55 364 ;
      END
   END n_124239

   PIN n_124242
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 297.85 363.49 297.95 364 ;
      END
   END n_124242

   PIN n_124243
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 296.25 363.49 296.35 364 ;
      END
   END n_124243

   PIN n_124266
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 355.15 345.6 355.25 ;
      END
   END n_124266

   PIN n_124799
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 280.85 363.49 280.95 364 ;
      END
   END n_124799

   PIN n_125460
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 354.95 345.6 355.05 ;
      END
   END n_125460

   PIN n_126110
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 294.25 363.49 294.35 364 ;
      END
   END n_126110

   PIN n_127002
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 291.05 363.49 291.15 364 ;
      END
   END n_127002

   PIN n_127003
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 291.65 363.49 291.75 364 ;
      END
   END n_127003

   PIN n_127585
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 352.95 345.6 353.05 ;
      END
   END n_127585

   PIN n_129236
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 358.15 345.6 358.25 ;
      END
   END n_129236

   PIN n_131286
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 316.95 345.6 317.05 ;
      END
   END n_131286

   PIN n_132107
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 294.95 345.6 295.05 ;
      END
   END n_132107

   PIN n_133429
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 287.05 363.49 287.15 364 ;
      END
   END n_133429

   PIN n_134203
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 299.35 345.6 299.45 ;
      END
   END n_134203

   PIN n_134205
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 301.15 345.6 301.25 ;
      END
   END n_134205

   PIN n_134261
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 280.05 363.49 280.15 364 ;
      END
   END n_134261

   PIN n_134791
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 276.25 363.49 276.35 364 ;
      END
   END n_134791

   PIN n_142907
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 357.15 345.6 357.25 ;
      END
   END n_142907

   PIN n_142993
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 328.05 363.49 328.15 364 ;
      END
   END n_142993

   PIN n_143060
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 340.95 345.6 341.05 ;
      END
   END n_143060

   PIN n_143063
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 330.85 363.49 330.95 364 ;
      END
   END n_143063

   PIN n_143101
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 331.25 363.49 331.35 364 ;
      END
   END n_143101

   PIN n_143231
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 332.65 363.49 332.75 364 ;
      END
   END n_143231

   PIN n_143396
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 335.95 345.6 336.05 ;
      END
   END n_143396

   PIN n_143549
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 329.05 363.49 329.15 364 ;
      END
   END n_143549

   PIN n_143646
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 302.95 345.6 303.05 ;
      END
   END n_143646

   PIN n_14374
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 335.45 363.49 335.55 364 ;
      END
   END n_14374

   PIN n_16043
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 333.05 363.49 333.15 364 ;
      END
   END n_16043

   PIN n_1610
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 269.55 345.6 269.65 ;
      END
   END n_1610

   PIN n_16278
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 356.95 345.6 357.05 ;
      END
   END n_16278

   PIN n_16346
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 344.55 345.6 344.65 ;
      END
   END n_16346

   PIN n_3153
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 232.15 345.6 232.25 ;
      END
   END n_3153

   PIN n_3207
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 337.35 345.6 337.45 ;
      END
   END n_3207

   PIN n_3208
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 337.15 345.6 337.25 ;
      END
   END n_3208

   PIN n_32761
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.45 363.49 317.55 364 ;
      END
   END n_32761

   PIN n_3404
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 345.09 295.95 345.6 296.05 ;
      END
   END n_3404

   PIN n_3447
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 231.95 345.6 232.05 ;
      END
   END n_3447

   PIN n_3489
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 335.75 345.6 335.85 ;
      END
   END n_3489

   PIN n_3490
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 335.55 345.6 335.65 ;
      END
   END n_3490

   PIN n_3813
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 335.35 345.6 335.45 ;
      END
   END n_3813

   PIN n_3814
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 335.15 345.6 335.25 ;
      END
   END n_3814

   PIN n_3916
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 296.95 345.6 297.05 ;
      END
   END n_3916

   PIN n_3946
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 297.15 345.6 297.25 ;
      END
   END n_3946

   PIN n_5163
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 345.09 344.95 345.6 345.05 ;
      END
   END n_5163

   OBS
      LAYER via1 ;
         RECT 0 0 345.6 364 ;
      LAYER metal5 ;
         RECT 0.63 0.00 344.83 364 ;
      LAYER metal4 ;
         RECT 0.00 0.63 345.6 363.37 ;
      LAYER metal3 ;
         RECT 0.63 0.00 344.83 364 ;
      LAYER metal2 ;
         RECT 0.00 0.63 345.6 363.37 ;
      LAYER metal1 ;
         RECT 0.00 0.00 345.6 364 ;
   END
END h6

MACRO h2
   CLASS BLOCK ;
   FOREIGN h2 ;
   ORIGIN 0 0 ;
   SIZE 780.6 BY 368 ;
   SYMMETRY X Y R90 ;
   PIN FE_OFN10016_b_4_4_7
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 160.45 0 160.55 0.51 ;
      END
   END FE_OFN10016_b_4_4_7

   PIN FE_OFN10107_b_4_2_1
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 188.85 0 188.95 0.51 ;
      END
   END FE_OFN10107_b_4_2_1

   PIN FE_OFN11689_n_140213
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 48.55 780.6 48.65 ;
      END
   END FE_OFN11689_n_140213

   PIN FE_OFN11938_n_142850
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 300.25 0 300.35 0.51 ;
      END
   END FE_OFN11938_n_142850

   PIN FE_OFN12338_n_41013
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 152.15 780.6 152.25 ;
      END
   END FE_OFN12338_n_41013

   PIN FE_OFN12341_n_41013
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 96.75 780.6 96.85 ;
      END
   END FE_OFN12341_n_41013

   PIN FE_OFN12622_n_143670
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 128.55 780.6 128.65 ;
      END
   END FE_OFN12622_n_143670

   PIN FE_OFN12767_n_41734
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 166.95 780.6 167.05 ;
      END
   END FE_OFN12767_n_41734

   PIN FE_OFN12972_n_41962
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 119.75 780.6 119.85 ;
      END
   END FE_OFN12972_n_41962

   PIN FE_OFN13039_n_40828
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 71.35 780.6 71.45 ;
      END
   END FE_OFN13039_n_40828

   PIN FE_OFN13195_n_137475
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 57.95 780.6 58.05 ;
      END
   END FE_OFN13195_n_137475

   PIN FE_OFN13196_n_137475
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 203.15 780.6 203.25 ;
      END
   END FE_OFN13196_n_137475

   PIN FE_OFN13200_n_137235
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 25.75 780.6 25.85 ;
      END
   END FE_OFN13200_n_137235

   PIN FE_OFN13211_n_143630
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 25.95 780.6 26.05 ;
      END
   END FE_OFN13211_n_143630

   PIN FE_OFN13228_n_143481
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 180.35 780.6 180.45 ;
      END
   END FE_OFN13228_n_143481

   PIN FE_OFN13229_n_143481
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 215.95 780.6 216.05 ;
      END
   END FE_OFN13229_n_143481

   PIN FE_OFN13244_n_41374
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 168.35 780.6 168.45 ;
      END
   END FE_OFN13244_n_41374

   PIN FE_OFN13247_n_143370
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 84.35 780.6 84.45 ;
      END
   END FE_OFN13247_n_143370

   PIN FE_OFN13354_n_41014
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 172.35 780.6 172.45 ;
      END
   END FE_OFN13354_n_41014

   PIN FE_OFN13387_n_41612
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 143.75 780.6 143.85 ;
      END
   END FE_OFN13387_n_41612

   PIN FE_OFN13390_n_41612
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 94.75 780.6 94.85 ;
      END
   END FE_OFN13390_n_41612

   PIN FE_OFN13420_n_41709
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 191.15 780.6 191.25 ;
      END
   END FE_OFN13420_n_41709

   PIN FE_OFN13421_n_41709
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 71.55 780.6 71.65 ;
      END
   END FE_OFN13421_n_41709

   PIN FE_OFN13527_n_137233
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 47.15 780.6 47.25 ;
      END
   END FE_OFN13527_n_137233

   PIN FE_OFN13530_n_137233
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 83.55 780.6 83.65 ;
      END
   END FE_OFN13530_n_137233

   PIN FE_OFN13619_n_41963
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 71.75 780.6 71.85 ;
      END
   END FE_OFN13619_n_41963

   PIN FE_OFN13620_n_41963
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 253.15 780.6 253.25 ;
      END
   END FE_OFN13620_n_41963

   PIN FE_OFN13621_n_41963
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 12.95 780.6 13.05 ;
      END
   END FE_OFN13621_n_41963

   PIN FE_OFN13687_n_143426
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 36.75 780.6 36.85 ;
      END
   END FE_OFN13687_n_143426

   PIN FE_OFN13692_n_41993
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 179.35 780.6 179.45 ;
      END
   END FE_OFN13692_n_41993

   PIN FE_OFN14071_n_142964
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 77.65 0 77.75 0.51 ;
      END
   END FE_OFN14071_n_142964

   PIN FE_OFN14164_n_31516
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 136.65 367.49 136.75 368 ;
      END
   END FE_OFN14164_n_31516

   PIN FE_OFN14397_n_140213
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 242.15 780.6 242.25 ;
      END
   END FE_OFN14397_n_140213

   PIN FE_OFN14901_n_140203
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 73.35 780.6 73.45 ;
      END
   END FE_OFN14901_n_140203

   PIN FE_OFN15072_n_29125
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 424.25 367.49 424.35 368 ;
      END
   END FE_OFN15072_n_29125

   PIN FE_OFN15106_n_30279
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 436.45 367.49 436.55 368 ;
      END
   END FE_OFN15106_n_30279

   PIN FE_OFN15135_n_30145
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 580.45 367.49 580.55 368 ;
      END
   END FE_OFN15135_n_30145

   PIN FE_OFN15329_n_29953
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 412.45 367.49 412.55 368 ;
      END
   END FE_OFN15329_n_29953

   PIN FE_OFN15343_n_30559
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 448.05 367.49 448.15 368 ;
      END
   END FE_OFN15343_n_30559

   PIN FE_OFN16079_n_41709
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 81.75 780.6 81.85 ;
      END
   END FE_OFN16079_n_41709

   PIN FE_OFN16087_n_41993
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 172.15 780.6 172.25 ;
      END
   END FE_OFN16087_n_41993

   PIN FE_OFN16127_n_66979
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 167.15 780.6 167.25 ;
      END
   END FE_OFN16127_n_66979

   PIN FE_OFN16313_b_7_6_9
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 150.95 780.6 151.05 ;
      END
   END FE_OFN16313_b_7_6_9

   PIN FE_OFN17006_n_58282
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 389.25 367.49 389.35 368 ;
      END
   END FE_OFN17006_n_58282

   PIN FE_OFN17423_n_8249
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 712.65 0 712.75 0.51 ;
      END
   END FE_OFN17423_n_8249

   PIN FE_OFN17844_n_81895
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 251.95 780.6 252.05 ;
      END
   END FE_OFN17844_n_81895

   PIN FE_OFN17850_n_66751
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 262.75 780.6 262.85 ;
      END
   END FE_OFN17850_n_66751

   PIN FE_OFN17864_n_71795
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 94.95 780.6 95.05 ;
      END
   END FE_OFN17864_n_71795

   PIN FE_OFN17908_n_55576
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 155.35 780.6 155.45 ;
      END
   END FE_OFN17908_n_55576

   PIN FE_OFN18784_n_31306
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 348.85 367.49 348.95 368 ;
      END
   END FE_OFN18784_n_31306

   PIN FE_OFN19276_n_28640
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 448.25 367.49 448.35 368 ;
      END
   END FE_OFN19276_n_28640

   PIN FE_OFN2321_delay_mul_ln34_unr9_unr7_stage2_stallmux_z_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 448.65 367.49 448.75 368 ;
      END
   END FE_OFN2321_delay_mul_ln34_unr9_unr7_stage2_stallmux_z_14_

   PIN FE_OFN2322_delay_mul_ln34_unr9_unr7_stage2_stallmux_z_13_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 460.65 367.49 460.75 368 ;
      END
   END FE_OFN2322_delay_mul_ln34_unr9_unr7_stage2_stallmux_z_13_

   PIN FE_OFN4459_delay_mul_ln34_unr4_unr2_stage2_stallmux_z_12_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 444.85 0 444.95 0.51 ;
      END
   END FE_OFN4459_delay_mul_ln34_unr4_unr2_stage2_stallmux_z_12_

   PIN FE_OFN4762_n_137230
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 243.8 0 244 0.255 ;
      END
   END FE_OFN4762_n_137230

   PIN FE_OFN4815_n_143202
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 208.45 0 208.55 0.51 ;
      END
   END FE_OFN4815_n_143202

   PIN FE_OFN6162_delay_mul_ln34_unr7_unr8_stage2_stallmux_z_13_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 550.45 0 550.55 0.51 ;
      END
   END FE_OFN6162_delay_mul_ln34_unr7_unr8_stage2_stallmux_z_13_

   PIN FE_OFN6326_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 127.35 780.6 127.45 ;
      END
   END FE_OFN6326_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_7_

   PIN FE_OFN6445_n_64478
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 227.75 780.6 227.85 ;
      END
   END FE_OFN6445_n_64478

   PIN FE_OFN6458_n_59534
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 131.15 780.6 131.25 ;
      END
   END FE_OFN6458_n_59534

   PIN FE_OFN6491_n_41960
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 20.95 780.6 21.05 ;
      END
   END FE_OFN6491_n_41960

   PIN FE_OFN6549_n_41963
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 229.15 780.6 229.25 ;
      END
   END FE_OFN6549_n_41963

   PIN FE_OFN6605_n_140234
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 203.35 780.6 203.45 ;
      END
   END FE_OFN6605_n_140234

   PIN FE_OFN6626_n_41612
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 143.55 780.6 143.65 ;
      END
   END FE_OFN6626_n_41612

   PIN FE_OFN6749_n_41995
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 105.35 780.6 105.45 ;
      END
   END FE_OFN6749_n_41995

   PIN FE_OFN6841_n_41015
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 83.75 780.6 83.85 ;
      END
   END FE_OFN6841_n_41015

   PIN FE_OFN6859_n_143629
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 119.15 780.6 119.25 ;
      END
   END FE_OFN6859_n_143629

   PIN FE_OFN8170_n_26637
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 268.45 367.49 268.55 368 ;
      END
   END FE_OFN8170_n_26637

   PIN FE_OFN8330_n_31307
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 566.85 367.49 566.95 368 ;
      END
   END FE_OFN8330_n_31307

   PIN FE_OFN8366_n_31480
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 52.65 367.49 52.75 368 ;
      END
   END FE_OFN8366_n_31480

   PIN FE_OFN8464_n_25371
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 640.45 367.49 640.55 368 ;
      END
   END FE_OFN8464_n_25371

   PIN FE_OFN8492_n_29557
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 412.85 367.49 412.95 368 ;
      END
   END FE_OFN8492_n_29557

   PIN FE_OFN8498_n_28380
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 436.65 367.49 436.75 368 ;
      END
   END FE_OFN8498_n_28380

   PIN FE_OFN8499_n_27857
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 388.45 367.49 388.55 368 ;
      END
   END FE_OFN8499_n_27857

   PIN FE_OFN8578_n_29968
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 12.55 780.6 12.65 ;
      END
   END FE_OFN8578_n_29968

   PIN FE_OFN8704_n_31118
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 323.95 780.6 324.05 ;
      END
   END FE_OFN8704_n_31118

   PIN FE_OFN8719_n_25376
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 288.55 780.6 288.65 ;
      END
   END FE_OFN8719_n_25376

   PIN FE_OFN9239_delay_add_ln34_unr2_unr1_stage2_stallmux_q_15_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 324.15 780.6 324.25 ;
      END
   END FE_OFN9239_delay_add_ln34_unr2_unr1_stage2_stallmux_q_15_

   PIN FE_OFN9472_b_7_8_8
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 84.55 780.6 84.65 ;
      END
   END FE_OFN9472_b_7_8_8

   PIN FE_OFN9474_b_7_8_7
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 120.15 780.6 120.25 ;
      END
   END FE_OFN9474_b_7_8_7

   PIN FE_OFN9536_b_7_6_15
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 191.75 780.6 191.85 ;
      END
   END FE_OFN9536_b_7_6_15

   PIN FE_OFN9540_b_7_6_14
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 311.75 780.6 311.85 ;
      END
   END FE_OFN9540_b_7_6_14

   PIN FE_OFN9548_b_7_6_11
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 181.55 780.6 181.65 ;
      END
   END FE_OFN9548_b_7_6_11

   PIN FE_OFN9549_b_7_6_10
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 180.75 780.6 180.85 ;
      END
   END FE_OFN9549_b_7_6_10

   PIN FE_OFN9558_b_7_6_6
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 171.55 780.6 171.65 ;
      END
   END FE_OFN9558_b_7_6_6

   PIN FE_OFN9564_b_7_6_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 276.55 780.6 276.65 ;
      END
   END FE_OFN9564_b_7_6_4

   PIN FE_OFN9577_b_7_6_1
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.345 154.3 780.6 154.5 ;
      END
   END FE_OFN9577_b_7_6_1

   PIN FE_OFN9879_b_4_8_3
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 298.05 0 298.15 0.51 ;
      END
   END FE_OFN9879_b_4_8_3

   PIN delay_mul_ln34_unr4_unr2_stage2_stallmux_q_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 455.85 0 455.95 0.51 ;
      END
   END delay_mul_ln34_unr4_unr2_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr4_unr2_stage2_stallmux_z_4_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 205.65 0 205.75 0.51 ;
      END
   END delay_mul_ln34_unr4_unr2_stage2_stallmux_z_4_

   PIN delay_mul_ln34_unr4_unr4_stage2_stallmux_q_15_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 353.45 0 353.55 0.51 ;
      END
   END delay_mul_ln34_unr4_unr4_stage2_stallmux_q_15_

   PIN delay_mul_ln34_unr4_unr6_stage2_stallmux_z_5_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 392.05 0 392.15 0.51 ;
      END
   END delay_mul_ln34_unr4_unr6_stage2_stallmux_z_5_

   PIN delay_mul_ln34_unr4_unr6_stage2_stallmux_z_8_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 358.25 0 358.35 0.51 ;
      END
   END delay_mul_ln34_unr4_unr6_stage2_stallmux_z_8_

   PIN delay_mul_ln34_unr7_unr0_stage2_stallmux_q_12_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 266.55 780.6 266.65 ;
      END
   END delay_mul_ln34_unr7_unr0_stage2_stallmux_q_12_

   PIN delay_mul_ln34_unr7_unr8_stage2_stallmux_z_12_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 481.85 0 481.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr8_stage2_stallmux_z_12_

   PIN delay_mul_ln34_unr9_unr7_stage2_stallmux_q_2_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 364.45 367.49 364.55 368 ;
      END
   END delay_mul_ln34_unr9_unr7_stage2_stallmux_q_2_

   PIN delay_mul_ln34_unr9_unr7_stage2_stallmux_q_3_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 376.45 367.49 376.55 368 ;
      END
   END delay_mul_ln34_unr9_unr7_stage2_stallmux_q_3_

   PIN delay_mul_ln34_unr9_unr7_stage2_stallmux_z_12_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 652.65 367.49 652.75 368 ;
      END
   END delay_mul_ln34_unr9_unr7_stage2_stallmux_z_12_

   PIN delay_mul_ln34_unr9_unr7_stage2_stallmux_z_4_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 376.65 367.49 376.75 368 ;
      END
   END delay_mul_ln34_unr9_unr7_stage2_stallmux_z_4_

   PIN mul_4647_72_n_200
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 12.85 0 12.95 0.51 ;
      END
   END mul_4647_72_n_200

   PIN mul_4647_72_n_224
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 88.45 0 88.55 0.51 ;
      END
   END mul_4647_72_n_224

   PIN mul_4647_72_n_227
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 64.25 0 64.35 0.51 ;
      END
   END mul_4647_72_n_227

   PIN mul_4647_72_n_230
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 63.05 0 63.15 0.51 ;
      END
   END mul_4647_72_n_230

   PIN mul_4647_72_n_252
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 124.45 0 124.55 0.51 ;
      END
   END mul_4647_72_n_252

   PIN mul_4647_72_n_323
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 115.25 0 115.35 0.51 ;
      END
   END mul_4647_72_n_323

   PIN mul_4647_72_n_71
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 40.65 0 40.75 0.51 ;
      END
   END mul_4647_72_n_71

   PIN mul_4649_72_n_77
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 364.85 0 364.95 0.51 ;
      END
   END mul_4649_72_n_77

   PIN mul_4651_72_n_290
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 245.05 0 245.15 0.51 ;
      END
   END mul_4651_72_n_290

   PIN mul_4651_72_n_316
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 208.25 0 208.35 0.51 ;
      END
   END mul_4651_72_n_316

   PIN mul_4651_72_n_322
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 220.05 0 220.15 0.51 ;
      END
   END mul_4651_72_n_322

   PIN mul_4651_72_n_323
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 221.45 0 221.55 0.51 ;
      END
   END mul_4651_72_n_323

   PIN mul_4651_72_n_324
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 222.85 0 222.95 0.51 ;
      END
   END mul_4651_72_n_324

   PIN mul_4664_72_n_213
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 100.45 0 100.55 0.51 ;
      END
   END mul_4664_72_n_213

   PIN mul_4664_72_n_214
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 100.65 0 100.75 0.51 ;
      END
   END mul_4664_72_n_214

   PIN mul_4664_72_n_285
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 88.85 0 88.95 0.51 ;
      END
   END mul_4664_72_n_285

   PIN mul_4664_72_n_55
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 80.05 0 80.15 0.51 ;
      END
   END mul_4664_72_n_55

   PIN mul_4664_72_n_71
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 79.85 0 79.95 0.51 ;
      END
   END mul_4664_72_n_71

   PIN mul_4664_72_n_773
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 100.25 0 100.35 0.51 ;
      END
   END mul_4664_72_n_773

   PIN mul_4698_72_n_117
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 119.35 780.6 119.45 ;
      END
   END mul_4698_72_n_117

   PIN mul_4700_72_n_53
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 13.15 780.6 13.25 ;
      END
   END mul_4700_72_n_53

   PIN mul_4700_72_n_69
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 13.35 780.6 13.45 ;
      END
   END mul_4700_72_n_69

   PIN n_100733
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 616.45 367.49 616.55 368 ;
      END
   END n_100733

   PIN n_100744
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 592.85 367.49 592.95 368 ;
      END
   END n_100744

   PIN n_102607
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 191.35 780.6 191.45 ;
      END
   END n_102607

   PIN n_102890
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 472.85 0 472.95 0.51 ;
      END
   END n_102890

   PIN n_103077
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 616.65 367.49 616.75 368 ;
      END
   END n_103077

   PIN n_103482
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 664.65 367.49 664.75 368 ;
      END
   END n_103482

   PIN n_105239
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 664.85 367.49 664.95 368 ;
      END
   END n_105239

   PIN n_106473
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 592.25 367.49 592.35 368 ;
      END
   END n_106473

   PIN n_107990
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 129.05 0 129.15 0.51 ;
      END
   END n_107990

   PIN n_108077
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 571.05 367.49 571.15 368 ;
      END
   END n_108077

   PIN n_108091
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 628.65 367.49 628.75 368 ;
      END
   END n_108091

   PIN n_108970
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 127.05 0 127.15 0.51 ;
      END
   END n_108970

   PIN n_109766
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 636.45 367.49 636.55 368 ;
      END
   END n_109766

   PIN n_110534
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 575.05 367.49 575.15 368 ;
      END
   END n_110534

   PIN n_110678
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 203.55 780.6 203.65 ;
      END
   END n_110678

   PIN n_110705
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 564.65 367.49 564.75 368 ;
      END
   END n_110705

   PIN n_11212
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 46.85 0 46.95 0.51 ;
      END
   END n_11212

   PIN n_11214
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 155.55 780.6 155.65 ;
      END
   END n_11214

   PIN n_114514
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 101.05 0 101.15 0.51 ;
      END
   END n_114514

   PIN n_115085
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 110.05 0 110.15 0.51 ;
      END
   END n_115085

   PIN n_115534
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 169.65 367.49 169.75 368 ;
      END
   END n_115534

   PIN n_115535
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 152.65 367.49 152.75 368 ;
      END
   END n_115535

   PIN n_115594
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 65.05 0 65.15 0.51 ;
      END
   END n_115594

   PIN n_115658
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 160.25 0 160.35 0.51 ;
      END
   END n_115658

   PIN n_116050
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 137.65 0 137.75 0.51 ;
      END
   END n_116050

   PIN n_116051
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 137.65 0 137.75 0.51 ;
      END
   END n_116051

   PIN n_116348
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 148.05 0 148.15 0.51 ;
      END
   END n_116348

   PIN n_116462
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 11.65 0 11.75 0.51 ;
      END
   END n_116462

   PIN n_116511
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 172.05 0 172.15 0.51 ;
      END
   END n_116511

   PIN n_116767
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 100.65 0 100.75 0.51 ;
      END
   END n_116767

   PIN n_116839
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 130.85 0 130.95 0.51 ;
      END
   END n_116839

   PIN n_118700
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 10.85 0 10.95 0.51 ;
      END
   END n_118700

   PIN n_118762
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 69.65 0 69.75 0.51 ;
      END
   END n_118762

   PIN n_118773
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 15.85 0 15.95 0.51 ;
      END
   END n_118773

   PIN n_118968
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 52.25 0 52.35 0.51 ;
      END
   END n_118968

   PIN n_118969
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 40.05 0 40.15 0.51 ;
      END
   END n_118969

   PIN n_118970
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 40.85 0 40.95 0.51 ;
      END
   END n_118970

   PIN n_119000
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 137.25 0 137.35 0.51 ;
      END
   END n_119000

   PIN n_119073
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 31.45 367.49 31.55 368 ;
      END
   END n_119073

   PIN n_119481
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 58.05 0 58.15 0.51 ;
      END
   END n_119481

   PIN n_119509
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 148.65 0 148.75 0.51 ;
      END
   END n_119509

   PIN n_120297
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 33.85 0 33.95 0.51 ;
      END
   END n_120297

   PIN n_120453
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 100.85 0 100.95 0.51 ;
      END
   END n_120453

   PIN n_120804
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 151.25 0 151.35 0.51 ;
      END
   END n_120804

   PIN n_120838
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 11.05 0 11.15 0.51 ;
      END
   END n_120838

   PIN n_120840
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 59.45 0 59.55 0.51 ;
      END
   END n_120840

   PIN n_121307
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 244.45 0 244.55 0.51 ;
      END
   END n_121307

   PIN n_121492
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 88.65 0 88.75 0.51 ;
      END
   END n_121492

   PIN n_121670
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 232.05 0 232.15 0.51 ;
      END
   END n_121670

   PIN n_121988
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 76.45 0 76.55 0.51 ;
      END
   END n_121988

   PIN n_122043
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 10.85 367.49 10.95 368 ;
      END
   END n_122043

   PIN n_122081
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 77.05 0 77.15 0.51 ;
      END
   END n_122081

   PIN n_122221
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 15.05 0 15.15 0.51 ;
      END
   END n_122221

   PIN n_122483
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 24.15 0.51 24.25 ;
      END
   END n_122483

   PIN n_122484
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 172.95 0.51 173.05 ;
      END
   END n_122484

   PIN n_122506
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 26.05 367.49 26.15 368 ;
      END
   END n_122506

   PIN n_122507
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 15.05 367.49 15.15 368 ;
      END
   END n_122507

   PIN n_123326
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 28.65 0 28.75 0.51 ;
      END
   END n_123326

   PIN n_124275
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 16.85 0 16.95 0.51 ;
      END
   END n_124275

   PIN n_124317
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 64.05 0 64.15 0.51 ;
      END
   END n_124317

   PIN n_124544
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 118.25 367.49 118.35 368 ;
      END
   END n_124544

   PIN n_124640
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 162.45 367.49 162.55 368 ;
      END
   END n_124640

   PIN n_124871
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 64.45 0 64.55 0.51 ;
      END
   END n_124871

   PIN n_126137
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 124.45 367.49 124.55 368 ;
      END
   END n_126137

   PIN n_127194
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 40.25 0 40.35 0.51 ;
      END
   END n_127194

   PIN n_127226
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 112.45 367.49 112.55 368 ;
      END
   END n_127226

   PIN n_127725
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 11.25 0 11.35 0.51 ;
      END
   END n_127725

   PIN n_127726
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 17.45 0 17.55 0.51 ;
      END
   END n_127726

   PIN n_128154
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 89.65 0 89.75 0.51 ;
      END
   END n_128154

   PIN n_128155
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 64.65 0 64.75 0.51 ;
      END
   END n_128155

   PIN n_128174
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 76.05 0 76.15 0.51 ;
      END
   END n_128174

   PIN n_128290
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 40.45 0 40.55 0.51 ;
      END
   END n_128290

   PIN n_128294
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 30.45 0 30.55 0.51 ;
      END
   END n_128294

   PIN n_129242
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 66.05 367.49 66.15 368 ;
      END
   END n_129242

   PIN n_129244
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 86.85 367.49 86.95 368 ;
      END
   END n_129244

   PIN n_129371
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 357.15 0.51 357.25 ;
      END
   END n_129371

   PIN n_129623
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 29.45 0 29.55 0.51 ;
      END
   END n_129623

   PIN n_129649
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 11.95 0.51 12.05 ;
      END
   END n_129649

   PIN n_129721
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 29.05 0 29.15 0.51 ;
      END
   END n_129721

   PIN n_130485
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 77.25 367.49 77.35 368 ;
      END
   END n_130485

   PIN n_131556
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 101.85 367.49 101.95 368 ;
      END
   END n_131556

   PIN n_133552
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 115.65 0 115.75 0.51 ;
      END
   END n_133552

   PIN n_134508
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 56.85 0 56.95 0.51 ;
      END
   END n_134508

   PIN n_135085
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 52.45 0 52.55 0.51 ;
      END
   END n_135085

   PIN n_137235
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 119.95 780.6 120.05 ;
      END
   END n_137235

   PIN n_137837
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 276.25 0 276.35 0.51 ;
      END
   END n_137837

   PIN n_143371
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 47.35 780.6 47.45 ;
      END
   END n_143371

   PIN n_143818
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 39.25 0 39.35 0.51 ;
      END
   END n_143818

   PIN n_24537
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 608.85 0 608.95 0.51 ;
      END
   END n_24537

   PIN n_24538
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 604.25 0 604.35 0.51 ;
      END
   END n_24538

   PIN n_25880
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 535.05 0 535.15 0.51 ;
      END
   END n_25880

   PIN n_25882
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 532.45 0 532.55 0.51 ;
      END
   END n_25882

   PIN n_26382
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 460.45 367.49 460.55 368 ;
      END
   END n_26382

   PIN n_26770
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 451.65 367.49 451.75 368 ;
      END
   END n_26770

   PIN n_26771
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 460.45 367.49 460.55 368 ;
      END
   END n_26771

   PIN n_26989
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 14.55 780.6 14.65 ;
      END
   END n_26989

   PIN n_27355
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 325.05 367.49 325.15 368 ;
      END
   END n_27355

   PIN n_28369
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 412.25 367.49 412.35 368 ;
      END
   END n_28369

   PIN n_2842
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 33.25 0 33.35 0.51 ;
      END
   END n_2842

   PIN n_28483
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 652.45 367.49 652.55 368 ;
      END
   END n_28483

   PIN n_28878
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 556.65 367.49 556.75 368 ;
      END
   END n_28878

   PIN n_29113
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 324.75 780.6 324.85 ;
      END
   END n_29113

   PIN n_2937
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 380.05 0 380.15 0.51 ;
      END
   END n_2937

   PIN n_29558
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 412.65 367.49 412.75 368 ;
      END
   END n_29558

   PIN n_32569
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 147.85 0 147.95 0.51 ;
      END
   END n_32569

   PIN n_32599
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 210.65 0 210.75 0.51 ;
      END
   END n_32599

   PIN n_32677
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 237.45 0 237.55 0.51 ;
      END
   END n_32677

   PIN n_32709
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 156.65 0 156.75 0.51 ;
      END
   END n_32709

   PIN n_32886
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 124.25 0 124.35 0.51 ;
      END
   END n_32886

   PIN n_33168
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 60.35 780.6 60.45 ;
      END
   END n_33168

   PIN n_33209
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 172.25 0 172.35 0.51 ;
      END
   END n_33209

   PIN n_33371
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 127.15 780.6 127.25 ;
      END
   END n_33371

   PIN n_34045
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 76.65 0 76.75 0.51 ;
      END
   END n_34045

   PIN n_34363
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 255.25 0 255.35 0.51 ;
      END
   END n_34363

   PIN n_34386
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 352.05 0 352.15 0.51 ;
      END
   END n_34386

   PIN n_34739
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 70.75 780.6 70.85 ;
      END
   END n_34739

   PIN n_35423
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 255.05 0 255.15 0.51 ;
      END
   END n_35423

   PIN n_36289
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 222.45 0 222.55 0.51 ;
      END
   END n_36289

   PIN n_36486
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 244.85 0 244.95 0.51 ;
      END
   END n_36486

   PIN n_36699
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 181.65 0 181.75 0.51 ;
      END
   END n_36699

   PIN n_36728
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 221.85 0 221.95 0.51 ;
      END
   END n_36728

   PIN n_36741
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 25.15 780.6 25.25 ;
      END
   END n_36741

   PIN n_36776
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 168.55 780.6 168.65 ;
      END
   END n_36776

   PIN n_36951
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 136.25 0 136.35 0.51 ;
      END
   END n_36951

   PIN n_37371
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 124.45 0 124.55 0.51 ;
      END
   END n_37371

   PIN n_37496
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 236.45 0 236.55 0.51 ;
      END
   END n_37496

   PIN n_37823
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 231.85 0 231.95 0.51 ;
      END
   END n_37823

   PIN n_38020
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 202.05 0 202.15 0.51 ;
      END
   END n_38020

   PIN n_38377
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 115.85 0 115.95 0.51 ;
      END
   END n_38377

   PIN n_39631
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 123.85 0 123.95 0.51 ;
      END
   END n_39631

   PIN n_40828
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 118.35 780.6 118.45 ;
      END
   END n_40828

   PIN n_40903
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 221.05 0 221.15 0.51 ;
      END
   END n_40903

   PIN n_43135
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 755.85 367.49 755.95 368 ;
      END
   END n_43135

   PIN n_43460
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 240.95 780.6 241.05 ;
      END
   END n_43460

   PIN n_43886
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 96.95 780.6 97.05 ;
      END
   END n_43886

   PIN n_43887
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 95.75 780.6 95.85 ;
      END
   END n_43887

   PIN n_43927
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 242.35 780.6 242.45 ;
      END
   END n_43927

   PIN n_43959
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 35.55 780.6 35.65 ;
      END
   END n_43959

   PIN n_44225
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 241.35 780.6 241.45 ;
      END
   END n_44225

   PIN n_44595
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 736.65 367.49 736.75 368 ;
      END
   END n_44595

   PIN n_44641
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 70.95 780.6 71.05 ;
      END
   END n_44641

   PIN n_44714
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 179.55 780.6 179.65 ;
      END
   END n_44714

   PIN n_44715
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 180.55 780.6 180.65 ;
      END
   END n_44715

   PIN n_44776
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 118.55 780.6 118.65 ;
      END
   END n_44776

   PIN n_44777
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 119.75 780.6 119.85 ;
      END
   END n_44777

   PIN n_45142
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 107.15 780.6 107.25 ;
      END
   END n_45142

   PIN n_45217
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 252.15 780.6 252.25 ;
      END
   END n_45217

   PIN n_45222
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 412.45 0 412.55 0.51 ;
      END
   END n_45222

   PIN n_45299
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 556.45 0 556.55 0.51 ;
      END
   END n_45299

   PIN n_45510
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 364.25 0 364.35 0.51 ;
      END
   END n_45510

   PIN n_45631
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 253.25 0 253.35 0.51 ;
      END
   END n_45631

   PIN n_45632
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 253.45 0 253.55 0.51 ;
      END
   END n_45632

   PIN n_45699
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 107.35 780.6 107.45 ;
      END
   END n_45699

   PIN n_45883
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 242.55 780.6 242.65 ;
      END
   END n_45883

   PIN n_46067
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 412.65 0 412.75 0.51 ;
      END
   END n_46067

   PIN n_46081
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 172.95 780.6 173.05 ;
      END
   END n_46081

   PIN n_46203
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 556.65 0 556.75 0.51 ;
      END
   END n_46203

   PIN n_46332
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 151.95 780.6 152.05 ;
      END
   END n_46332

   PIN n_46335
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 778.25 0 778.35 0.51 ;
      END
   END n_46335

   PIN n_46361
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 130.95 780.6 131.05 ;
      END
   END n_46361

   PIN n_46369
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 266.95 780.6 267.05 ;
      END
   END n_46369

   PIN n_46370
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 267.75 780.6 267.85 ;
      END
   END n_46370

   PIN n_46467
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 252.15 780.6 252.25 ;
      END
   END n_46467

   PIN n_46468
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 311.95 780.6 312.05 ;
      END
   END n_46468

   PIN n_46540
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 166.55 780.6 166.65 ;
      END
   END n_46540

   PIN n_46576
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 367.65 0 367.75 0.51 ;
      END
   END n_46576

   PIN n_46582
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 204.95 780.6 205.05 ;
      END
   END n_46582

   PIN n_46583
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 700.65 0 700.75 0.51 ;
      END
   END n_46583

   PIN n_46659
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 35.75 780.6 35.85 ;
      END
   END n_46659

   PIN n_46661
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 357.45 0 357.55 0.51 ;
      END
   END n_46661

   PIN n_46668
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 154.95 780.6 155.05 ;
      END
   END n_46668

   PIN n_46669
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 154.35 780.6 154.45 ;
      END
   END n_46669

   PIN n_46676
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 182.55 780.6 182.65 ;
      END
   END n_46676

   PIN n_46872
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 179.75 780.6 179.85 ;
      END
   END n_46872

   PIN n_46916
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 296.65 0 296.75 0.51 ;
      END
   END n_46916

   PIN n_46917
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 259.45 0 259.55 0.51 ;
      END
   END n_46917

   PIN n_47149
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 155.75 780.6 155.85 ;
      END
   END n_47149

   PIN n_47248
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 276.75 780.6 276.85 ;
      END
   END n_47248

   PIN n_47260
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 436.65 0 436.75 0.51 ;
      END
   END n_47260

   PIN n_47323
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 568.45 0 568.55 0.51 ;
      END
   END n_47323

   PIN n_47423
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 267.15 780.6 267.25 ;
      END
   END n_47423

   PIN n_47856
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 161.05 0 161.15 0.51 ;
      END
   END n_47856

   PIN n_47857
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 159.85 0 159.95 0.51 ;
      END
   END n_47857

   PIN n_49211
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 99.65 0 99.75 0.51 ;
      END
   END n_49211

   PIN n_49947
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 95.15 780.6 95.25 ;
      END
   END n_49947

   PIN n_50245
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 275.95 780.6 276.05 ;
      END
   END n_50245

   PIN n_50316
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 740.05 367.49 740.15 368 ;
      END
   END n_50316

   PIN n_50589
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 241.75 780.6 241.85 ;
      END
   END n_50589

   PIN n_50941
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 149.75 780.6 149.85 ;
      END
   END n_50941

   PIN n_51049
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 406.05 0 406.15 0.51 ;
      END
   END n_51049

   PIN n_51080
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 568.25 0 568.35 0.51 ;
      END
   END n_51080

   PIN n_51152
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 341.65 0 341.75 0.51 ;
      END
   END n_51152

   PIN n_51247
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 171.95 780.6 172.05 ;
      END
   END n_51247

   PIN n_52208
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 119.55 780.6 119.65 ;
      END
   END n_52208

   PIN n_52412
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 203.75 780.6 203.85 ;
      END
   END n_52412

   PIN n_52666
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 191.35 780.6 191.45 ;
      END
   END n_52666

   PIN n_52803
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 267.35 780.6 267.45 ;
      END
   END n_52803

   PIN n_52852
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 736.45 367.49 736.55 368 ;
      END
   END n_52852

   PIN n_53092
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 436.45 0 436.55 0.51 ;
      END
   END n_53092

   PIN n_53255
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 276.15 780.6 276.25 ;
      END
   END n_53255

   PIN n_53257
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 131.55 780.6 131.65 ;
      END
   END n_53257

   PIN n_53297
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 220.35 780.6 220.45 ;
      END
   END n_53297

   PIN n_53524
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 120.75 780.6 120.85 ;
      END
   END n_53524

   PIN n_53555
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 312.15 780.6 312.25 ;
      END
   END n_53555

   PIN n_53566
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 771.45 367.49 771.55 368 ;
      END
   END n_53566

   PIN n_53983
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 258.65 0 258.75 0.51 ;
      END
   END n_53983

   PIN n_53996
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 167.35 780.6 167.45 ;
      END
   END n_53996

   PIN n_54311
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 172.45 0 172.55 0.51 ;
      END
   END n_54311

   PIN n_54338
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 241.95 780.6 242.05 ;
      END
   END n_54338

   PIN n_54688
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 95.35 780.6 95.45 ;
      END
   END n_54688

   PIN n_54944
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 424.45 367.49 424.55 368 ;
      END
   END n_54944

   PIN n_54954
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 360.45 367.49 360.55 368 ;
      END
   END n_54954

   PIN n_54986
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 739.65 367.49 739.75 368 ;
      END
   END n_54986

   PIN n_55042
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 287.75 780.6 287.85 ;
      END
   END n_55042

   PIN n_55157
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 495.05 367.49 495.15 368 ;
      END
   END n_55157

   PIN n_55513
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 107.55 780.6 107.65 ;
      END
   END n_55513

   PIN n_5555
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 28.35 780.6 28.45 ;
      END
   END n_5555

   PIN n_55597
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 129.15 780.6 129.25 ;
      END
   END n_55597

   PIN n_55598
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 95.55 780.6 95.65 ;
      END
   END n_55598

   PIN n_55674
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 544.45 0 544.55 0.51 ;
      END
   END n_55674

   PIN n_55702
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 184.25 0 184.35 0.51 ;
      END
   END n_55702

   PIN n_55723
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 436.25 0 436.35 0.51 ;
      END
   END n_55723

   PIN n_55740
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 484.25 0 484.35 0.51 ;
      END
   END n_55740

   PIN n_55766
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 105.15 780.6 105.25 ;
      END
   END n_55766

   PIN n_56659
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 203.95 780.6 204.05 ;
      END
   END n_56659

   PIN n_56808
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 287.95 780.6 288.05 ;
      END
   END n_56808

   PIN n_56899
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 266.75 780.6 266.85 ;
      END
   END n_56899

   PIN n_57040
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 261.85 0 261.95 0.51 ;
      END
   END n_57040

   PIN n_57135
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 12.15 0.51 12.25 ;
      END
   END n_57135

   PIN n_57460
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 430.45 0 430.55 0.51 ;
      END
   END n_57460

   PIN n_57673
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 573.05 0 573.15 0.51 ;
      END
   END n_57673

   PIN n_57704
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 120.95 780.6 121.05 ;
      END
   END n_57704

   PIN n_57712
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 510.85 0 510.95 0.51 ;
      END
   END n_57712

   PIN n_57713
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 508.65 0 508.75 0.51 ;
      END
   END n_57713

   PIN n_57714
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 509.85 0 509.95 0.51 ;
      END
   END n_57714

   PIN n_57823
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 182.15 780.6 182.25 ;
      END
   END n_57823

   PIN n_57902
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 352.25 367.49 352.35 368 ;
      END
   END n_57902

   PIN n_57982
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 496.65 367.49 496.75 368 ;
      END
   END n_57982

   PIN n_58071
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 143.75 780.6 143.85 ;
      END
   END n_58071

   PIN n_58207
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 121.15 780.6 121.25 ;
      END
   END n_58207

   PIN n_58229
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 724.45 367.49 724.55 368 ;
      END
   END n_58229

   PIN n_58234
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 556.85 367.49 556.95 368 ;
      END
   END n_58234

   PIN n_58257
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 506.65 367.49 506.75 368 ;
      END
   END n_58257

   PIN n_58264
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 415.25 367.49 415.35 368 ;
      END
   END n_58264

   PIN n_58283
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 388.25 367.49 388.35 368 ;
      END
   END n_58283

   PIN n_58292
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 448.45 0 448.55 0.51 ;
      END
   END n_58292

   PIN n_58507
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 143.95 780.6 144.05 ;
      END
   END n_58507

   PIN n_59057
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 478.05 367.49 478.15 368 ;
      END
   END n_59057

   PIN n_59287
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 496.25 367.49 496.35 368 ;
      END
   END n_59287

   PIN n_59495
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 484.65 0 484.75 0.51 ;
      END
   END n_59495

   PIN n_59615
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 334.15 780.6 334.25 ;
      END
   END n_59615

   PIN n_59894
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 11.45 0 11.55 0.51 ;
      END
   END n_59894

   PIN n_60087
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 738.85 367.49 738.95 368 ;
      END
   END n_60087

   PIN n_60088
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 424.65 367.49 424.75 368 ;
      END
   END n_60088

   PIN n_60104
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 149.15 780.6 149.25 ;
      END
   END n_60104

   PIN n_60139
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 288.15 780.6 288.25 ;
      END
   END n_60139

   PIN n_60261
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 300.15 780.6 300.25 ;
      END
   END n_60261

   PIN n_60264
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 497.05 367.49 497.15 368 ;
      END
   END n_60264

   PIN n_60317
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 393.85 367.49 393.95 368 ;
      END
   END n_60317

   PIN n_60318
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 394.05 367.49 394.15 368 ;
      END
   END n_60318

   PIN n_60377
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 227.35 780.6 227.45 ;
      END
   END n_60377

   PIN n_60444
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 324.35 780.6 324.45 ;
      END
   END n_60444

   PIN n_60543
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 151.75 780.6 151.85 ;
      END
   END n_60543

   PIN n_60569
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 556.85 0 556.95 0.51 ;
      END
   END n_60569

   PIN n_60575
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 510.65 0 510.75 0.51 ;
      END
   END n_60575

   PIN n_60581
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 552.45 0 552.55 0.51 ;
      END
   END n_60581

   PIN n_60661
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 353.65 367.49 353.75 368 ;
      END
   END n_60661

   PIN n_60763
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 98.55 780.6 98.65 ;
      END
   END n_60763

   PIN n_60770
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 428.65 367.49 428.75 368 ;
      END
   END n_60770

   PIN n_61110
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 268.65 367.49 268.75 368 ;
      END
   END n_61110

   PIN n_61151
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 351.05 0 351.15 0.51 ;
      END
   END n_61151

   PIN n_61597
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 180.95 780.6 181.05 ;
      END
   END n_61597

   PIN n_61600
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 166.75 780.6 166.85 ;
      END
   END n_61600

   PIN n_61622
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 496.45 0 496.55 0.51 ;
      END
   END n_61622

   PIN n_61766
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 280.45 0 280.55 0.51 ;
      END
   END n_61766

   PIN n_61876
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 502.45 367.49 502.55 368 ;
      END
   END n_61876

   PIN n_61877
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 508.25 367.49 508.35 368 ;
      END
   END n_61877

   PIN n_61881
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 484.05 367.49 484.15 368 ;
      END
   END n_61881

   PIN n_61896
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 404.85 367.49 404.95 368 ;
      END
   END n_61896

   PIN n_62357
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 285.05 367.49 285.15 368 ;
      END
   END n_62357

   PIN n_62360
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 48.55 780.6 48.65 ;
      END
   END n_62360

   PIN n_62401
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 329.45 0 329.55 0.51 ;
      END
   END n_62401

   PIN n_62504
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 128.75 780.6 128.85 ;
      END
   END n_62504

   PIN n_62647
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 513.05 367.49 513.15 368 ;
      END
   END n_62647

   PIN n_62807
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 213.65 367.49 213.75 368 ;
      END
   END n_62807

   PIN n_62808
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 223.45 367.49 223.55 368 ;
      END
   END n_62808

   PIN n_62998
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 304.85 367.49 304.95 368 ;
      END
   END n_62998

   PIN n_63006
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 105.75 780.6 105.85 ;
      END
   END n_63006

   PIN n_63048
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 228.35 780.6 228.45 ;
      END
   END n_63048

   PIN n_63049
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 228.55 780.6 228.65 ;
      END
   END n_63049

   PIN n_63050
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 485.85 0 485.95 0.51 ;
      END
   END n_63050

   PIN n_63051
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 486.05 0 486.15 0.51 ;
      END
   END n_63051

   PIN n_63137
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 46.95 780.6 47.05 ;
      END
   END n_63137

   PIN n_63203
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 103.55 780.6 103.65 ;
      END
   END n_63203

   PIN n_63244
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 508.45 367.49 508.55 368 ;
      END
   END n_63244

   PIN n_63246
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 424.65 367.49 424.75 368 ;
      END
   END n_63246

   PIN n_63253
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 776.65 367.49 776.75 368 ;
      END
   END n_63253

   PIN n_63258
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 676.25 367.49 676.35 368 ;
      END
   END n_63258

   PIN n_63272
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 640.45 0 640.55 0.51 ;
      END
   END n_63272

   PIN n_63359
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 578.65 0 578.75 0.51 ;
      END
   END n_63359

   PIN n_63530
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 484.65 367.49 484.75 368 ;
      END
   END n_63530

   PIN n_63531
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 478.45 367.49 478.55 368 ;
      END
   END n_63531

   PIN n_63563
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 278.65 367.49 278.75 368 ;
      END
   END n_63563

   PIN n_6357
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 379.65 0 379.75 0.51 ;
      END
   END n_6357

   PIN n_63724
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 48.75 780.6 48.85 ;
      END
   END n_63724

   PIN n_64400
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 155.95 780.6 156.05 ;
      END
   END n_64400

   PIN n_64412
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 484.45 0 484.55 0.51 ;
      END
   END n_64412

   PIN n_64413
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 484.05 0 484.15 0.51 ;
      END
   END n_64413

   PIN n_64467
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 312.05 367.49 312.15 368 ;
      END
   END n_64467

   PIN n_64527
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 228.15 780.6 228.25 ;
      END
   END n_64527

   PIN n_64551
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 472.45 367.49 472.55 368 ;
      END
   END n_64551

   PIN n_64555
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 453.05 367.49 453.15 368 ;
      END
   END n_64555

   PIN n_64556
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 461.85 367.49 461.95 368 ;
      END
   END n_64556

   PIN n_64558
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 402.85 367.49 402.95 368 ;
      END
   END n_64558

   PIN n_64834
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 448.65 0 448.75 0.51 ;
      END
   END n_64834

   PIN n_64921
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 105.55 780.6 105.65 ;
      END
   END n_64921

   PIN n_64944
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 227.95 780.6 228.05 ;
      END
   END n_64944

   PIN n_64988
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 286.25 0 286.35 0.51 ;
      END
   END n_64988

   PIN n_65021
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 498.05 367.49 498.15 368 ;
      END
   END n_65021

   PIN n_65147
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 478.25 367.49 478.35 368 ;
      END
   END n_65147

   PIN n_65154
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 47.55 780.6 47.65 ;
      END
   END n_65154

   PIN n_65353
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 449.85 367.49 449.95 368 ;
      END
   END n_65353

   PIN n_65402
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 580.45 0 580.55 0.51 ;
      END
   END n_65402

   PIN n_65488
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 214.75 780.6 214.85 ;
      END
   END n_65488

   PIN n_65500
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 484.25 367.49 484.35 368 ;
      END
   END n_65500

   PIN n_65528
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 640.65 0 640.75 0.51 ;
      END
   END n_65528

   PIN n_65632
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 485.25 367.49 485.35 368 ;
      END
   END n_65632

   PIN n_65654
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 497.85 367.49 497.95 368 ;
      END
   END n_65654

   PIN n_65680
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 462.85 0 462.95 0.51 ;
      END
   END n_65680

   PIN n_65751
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 479.25 367.49 479.35 368 ;
      END
   END n_65751

   PIN n_65798
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 297.65 367.49 297.75 368 ;
      END
   END n_65798

   PIN n_65952
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 268.45 0 268.55 0.51 ;
      END
   END n_65952

   PIN n_65974
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 36.95 780.6 37.05 ;
      END
   END n_65974

   PIN n_66586
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 71.15 780.6 71.25 ;
      END
   END n_66586

   PIN n_66611
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 484.65 0 484.75 0.51 ;
      END
   END n_66611

   PIN n_66722
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 702.85 367.49 702.95 368 ;
      END
   END n_66722

   PIN n_66841
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 250.95 780.6 251.05 ;
      END
   END n_66841

   PIN n_67151
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 485.05 367.49 485.15 368 ;
      END
   END n_67151

   PIN n_67191
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 452.65 367.49 452.75 368 ;
      END
   END n_67191

   PIN n_71276
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 98.35 780.6 98.45 ;
      END
   END n_71276

   PIN n_71277
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 97.15 780.6 97.25 ;
      END
   END n_71277

   PIN n_71278
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 97.95 780.6 98.05 ;
      END
   END n_71278

   PIN n_71434
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 94.15 780.6 94.25 ;
      END
   END n_71434

   PIN n_71435
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 83.95 780.6 84.05 ;
      END
   END n_71435

   PIN n_71444
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 282.85 0 282.95 0.51 ;
      END
   END n_71444

   PIN n_71763
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 107.75 780.6 107.85 ;
      END
   END n_71763

   PIN n_71770
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 251.15 780.6 251.25 ;
      END
   END n_71770

   PIN n_72006
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 472.25 367.49 472.35 368 ;
      END
   END n_72006

   PIN n_72275
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 214.95 780.6 215.05 ;
      END
   END n_72275

   PIN n_77145
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 484.85 367.49 484.95 368 ;
      END
   END n_77145

   PIN n_77670
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 25.35 780.6 25.45 ;
      END
   END n_77670

   PIN n_77995
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 616.85 367.49 616.95 368 ;
      END
   END n_77995

   PIN n_78280
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 252.75 780.6 252.85 ;
      END
   END n_78280

   PIN n_78473
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 439.45 367.49 439.55 368 ;
      END
   END n_78473

   PIN n_8031
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 33.65 0 33.75 0.51 ;
      END
   END n_8031

   PIN n_82565
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 252.35 780.6 252.45 ;
      END
   END n_82565

   PIN n_83303
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 724.65 367.49 724.75 368 ;
      END
   END n_83303

   PIN n_8403
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 304.65 0 304.75 0.51 ;
      END
   END n_8403

   PIN n_84678
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 252.55 780.6 252.65 ;
      END
   END n_84678

   PIN n_85584
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 472.45 0 472.55 0.51 ;
      END
   END n_85584

   PIN n_88925
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 300.55 780.6 300.65 ;
      END
   END n_88925

   PIN n_91246
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 596.85 367.49 596.95 368 ;
      END
   END n_91246

   PIN n_91249
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 772.65 367.49 772.75 368 ;
      END
   END n_91249

   PIN n_91279
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 724.85 367.49 724.95 368 ;
      END
   END n_91279

   PIN n_91722
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 121.35 780.6 121.45 ;
      END
   END n_91722

   PIN n_91724
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 340.65 367.49 340.75 368 ;
      END
   END n_91724

   PIN n_92857
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 73.55 780.6 73.65 ;
      END
   END n_92857

   PIN n_94960
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 300.75 780.6 300.85 ;
      END
   END n_94960

   PIN n_96293
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 436.25 367.49 436.35 368 ;
      END
   END n_96293

   PIN n_97165
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 712.65 367.49 712.75 368 ;
      END
   END n_97165

   PIN n_97291
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 344.45 0 344.55 0.51 ;
      END
   END n_97291

   PIN FE_OFN10008_b_4_4_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 130.25 0 130.35 0.51 ;
      END
   END FE_OFN10008_b_4_4_11

   PIN FE_OFN10010_b_4_4_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 131.25 0 131.35 0.51 ;
      END
   END FE_OFN10010_b_4_4_10

   PIN FE_OFN10012_b_4_4_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 151.45 0 151.55 0.51 ;
      END
   END FE_OFN10012_b_4_4_9

   PIN FE_OFN10014_b_4_4_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 46.45 0 46.55 0.51 ;
      END
   END FE_OFN10014_b_4_4_8

   PIN FE_OFN10015_b_4_4_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 184.05 0 184.15 0.51 ;
      END
   END FE_OFN10015_b_4_4_7

   PIN FE_OFN10022_b_4_4_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 112.25 0 112.35 0.51 ;
      END
   END FE_OFN10022_b_4_4_5

   PIN FE_OFN10023_b_4_4_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 116.85 0 116.95 0.51 ;
      END
   END FE_OFN10023_b_4_4_5

   PIN FE_OFN10027_b_4_4_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 100.05 0 100.15 0.51 ;
      END
   END FE_OFN10027_b_4_4_3

   PIN FE_OFN10031_b_4_4_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 148.85 0 148.95 0.51 ;
      END
   END FE_OFN10031_b_4_4_2

   PIN FE_OFN10037_b_4_4_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 65.65 0 65.75 0.51 ;
      END
   END FE_OFN10037_b_4_4_0

   PIN FE_OFN10082_b_4_2_12
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 124.65 0 124.75 0.51 ;
      END
   END FE_OFN10082_b_4_2_12

   PIN FE_OFN10084_b_4_2_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 176.65 0 176.75 0.51 ;
      END
   END FE_OFN10084_b_4_2_11

   PIN FE_OFN10086_b_4_2_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 184.05 0 184.15 0.51 ;
      END
   END FE_OFN10086_b_4_2_10

   PIN FE_OFN10088_b_4_2_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 124.05 0 124.15 0.51 ;
      END
   END FE_OFN10088_b_4_2_9

   PIN FE_OFN10090_b_4_2_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 109.45 0 109.55 0.51 ;
      END
   END FE_OFN10090_b_4_2_8

   PIN FE_OFN10093_b_4_2_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 95.65 0 95.75 0.51 ;
      END
   END FE_OFN10093_b_4_2_7

   PIN FE_OFN10098_b_4_2_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 89 0 89.2 0.255 ;
      END
   END FE_OFN10098_b_4_2_5

   PIN FE_OFN10100_b_4_2_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 77.2 0 77.4 0.255 ;
      END
   END FE_OFN10100_b_4_2_4

   PIN FE_OFN10102_b_4_2_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 188.6 0 188.8 0.255 ;
      END
   END FE_OFN10102_b_4_2_3

   PIN FE_OFN10104_b_4_2_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 77.45 0 77.55 0.51 ;
      END
   END FE_OFN10104_b_4_2_2

   PIN FE_OFN10105_b_4_2_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 281.65 0 281.75 0.51 ;
      END
   END FE_OFN10105_b_4_2_2

   PIN FE_OFN10106_b_4_2_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 189.05 0 189.15 0.51 ;
      END
   END FE_OFN10106_b_4_2_1

   PIN FE_OFN10110_b_4_2_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 182 0 182.2 0.255 ;
      END
   END FE_OFN10110_b_4_2_0

   PIN FE_OFN11414_n_140210
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 196.75 780.6 196.85 ;
      END
   END FE_OFN11414_n_140210

   PIN FE_OFN11419_n_140210
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.345 48.1 780.6 48.3 ;
      END
   END FE_OFN11419_n_140210

   PIN FE_OFN11481_n_140205
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 59.55 780.6 59.65 ;
      END
   END FE_OFN11481_n_140205

   PIN FE_OFN11522_n_140234
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 151.55 780.6 151.65 ;
      END
   END FE_OFN11522_n_140234

   PIN FE_OFN11557_n_137230
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 160.05 0 160.15 0.51 ;
      END
   END FE_OFN11557_n_137230

   PIN FE_OFN11558_n_137230
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 70.25 0 70.35 0.51 ;
      END
   END FE_OFN11558_n_137230

   PIN FE_OFN11607_n_39244
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 220.25 0 220.35 0.51 ;
      END
   END FE_OFN11607_n_39244

   PIN FE_OFN11703_n_36821
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 171.85 0 171.95 0.51 ;
      END
   END FE_OFN11703_n_36821

   PIN FE_OFN11879_n_143202
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 232.25 0 232.35 0.51 ;
      END
   END FE_OFN11879_n_143202

   PIN FE_OFN11932_n_142850
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 300.45 0 300.55 0.51 ;
      END
   END FE_OFN11932_n_142850

   PIN FE_OFN12024_n_41611
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 36.55 780.6 36.65 ;
      END
   END FE_OFN12024_n_41611

   PIN FE_OFN12028_n_143507
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 229.65 0 229.75 0.51 ;
      END
   END FE_OFN12028_n_143507

   PIN FE_OFN12037_n_143629
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 120.55 780.6 120.65 ;
      END
   END FE_OFN12037_n_143629

   PIN FE_OFN12040_n_143629
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 770.05 0 770.15 0.51 ;
      END
   END FE_OFN12040_n_143629

   PIN FE_OFN12061_n_143423
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 172.55 780.6 172.65 ;
      END
   END FE_OFN12061_n_143423

   PIN FE_OFN12085_n_143619
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 304.25 0 304.35 0.51 ;
      END
   END FE_OFN12085_n_143619

   PIN FE_OFN12624_n_143670
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 155.15 780.6 155.25 ;
      END
   END FE_OFN12624_n_143670

   PIN FE_OFN12632_n_143496
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 57.75 780.6 57.85 ;
      END
   END FE_OFN12632_n_143496

   PIN FE_OFN12753_n_142961
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 156.85 0 156.95 0.51 ;
      END
   END FE_OFN12753_n_142961

   PIN FE_OFN12761_n_41012
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 57.55 780.6 57.65 ;
      END
   END FE_OFN12761_n_41012

   PIN FE_OFN12764_n_41015
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 83.35 780.6 83.45 ;
      END
   END FE_OFN12764_n_41015

   PIN FE_OFN12968_n_112030
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 159.45 0 159.55 0.51 ;
      END
   END FE_OFN12968_n_112030

   PIN FE_OFN13044_n_40829
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 179.15 780.6 179.25 ;
      END
   END FE_OFN13044_n_40829

   PIN FE_OFN13226_n_143481
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 48.35 780.6 48.45 ;
      END
   END FE_OFN13226_n_143481

   PIN FE_OFN13233_n_143479
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 128.35 780.6 128.45 ;
      END
   END FE_OFN13233_n_143479

   PIN FE_OFN13239_n_41374
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 148.95 780.6 149.05 ;
      END
   END FE_OFN13239_n_41374

   PIN FE_OFN13242_n_41374
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 143.35 780.6 143.45 ;
      END
   END FE_OFN13242_n_41374

   PIN FE_OFN13246_n_143370
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 144.15 780.6 144.25 ;
      END
   END FE_OFN13246_n_143370

   PIN FE_OFN13253_n_143369
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 128.15 780.6 128.25 ;
      END
   END FE_OFN13253_n_143369

   PIN FE_OFN13297_n_143032
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 220.05 0 220.15 0.51 ;
      END
   END FE_OFN13297_n_143032

   PIN FE_OFN13347_n_142796
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 135.85 0 135.95 0.51 ;
      END
   END FE_OFN13347_n_142796

   PIN FE_OFN13348_n_142796
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 184.45 0 184.55 0.51 ;
      END
   END FE_OFN13348_n_142796

   PIN FE_OFN13393_n_41612
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 73.15 780.6 73.25 ;
      END
   END FE_OFN13393_n_41612

   PIN FE_OFN13450_n_41900
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 195.35 780.6 195.45 ;
      END
   END FE_OFN13450_n_41900

   PIN FE_OFN13460_n_42034
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 287.55 780.6 287.65 ;
      END
   END FE_OFN13460_n_42034

   PIN FE_OFN13515_n_112357
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 109.05 0 109.15 0.51 ;
      END
   END FE_OFN13515_n_112357

   PIN FE_OFN13525_n_137232
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 160.45 0 160.55 0.51 ;
      END
   END FE_OFN13525_n_137232

   PIN FE_OFN13528_n_137233
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 48.15 780.6 48.25 ;
      END
   END FE_OFN13528_n_137233

   PIN FE_OFN13529_n_137233
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 94.55 780.6 94.65 ;
      END
   END FE_OFN13529_n_137233

   PIN FE_OFN13672_n_143509
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 163.85 0 163.95 0.51 ;
      END
   END FE_OFN13672_n_143509

   PIN FE_OFN13686_n_143426
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 59.75 780.6 59.85 ;
      END
   END FE_OFN13686_n_143426

   PIN FE_OFN13777_n_41686
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 172.25 0 172.35 0.51 ;
      END
   END FE_OFN13777_n_41686

   PIN FE_OFN13787_n_41960
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 12.75 780.6 12.85 ;
      END
   END FE_OFN13787_n_41960

   PIN FE_OFN13789_n_41995
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 42.95 780.6 43.05 ;
      END
   END FE_OFN13789_n_41995

   PIN FE_OFN13796_n_41995
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 96.55 780.6 96.65 ;
      END
   END FE_OFN13796_n_41995

   PIN FE_OFN13864_n_41964
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 127.15 780.6 127.25 ;
      END
   END FE_OFN13864_n_41964

   PIN FE_OFN14082_n_142962
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 202.25 0 202.35 0.51 ;
      END
   END FE_OFN14082_n_142962

   PIN FE_OFN14361_n_143300
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 244.4 0 244.6 0.255 ;
      END
   END FE_OFN14361_n_143300

   PIN FE_OFN14401_n_142794
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 281.85 0 281.95 0.51 ;
      END
   END FE_OFN14401_n_142794

   PIN FE_OFN14406_n_31761
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 183.85 0 183.95 0.51 ;
      END
   END FE_OFN14406_n_31761

   PIN FE_OFN14899_n_140203
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 127.95 780.6 128.05 ;
      END
   END FE_OFN14899_n_140203

   PIN FE_OFN15134_n_30145
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 182.35 780.6 182.45 ;
      END
   END FE_OFN15134_n_30145

   PIN FE_OFN15168_n_31480
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 348.95 780.6 349.05 ;
      END
   END FE_OFN15168_n_31480

   PIN FE_OFN15328_n_29953
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 777.85 0 777.95 0.51 ;
      END
   END FE_OFN15328_n_29953

   PIN FE_OFN15342_n_30559
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 736.65 0 736.75 0.51 ;
      END
   END FE_OFN15342_n_30559

   PIN FE_OFN16113_n_42033
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 216.15 780.6 216.25 ;
      END
   END FE_OFN16113_n_42033

   PIN FE_OFN17005_n_58282
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 664.45 367.49 664.55 368 ;
      END
   END FE_OFN17005_n_58282

   PIN FE_OFN17026_n_66756
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 724.65 367.49 724.75 368 ;
      END
   END FE_OFN17026_n_66756

   PIN FE_OFN17099_n_53555
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 333.95 780.6 334.05 ;
      END
   END FE_OFN17099_n_53555

   PIN FE_OFN17825_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_12_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 265.75 780.6 265.85 ;
      END
   END FE_OFN17825_delay_mul_ln34_unr7_unr0_stage2_stallmux_z_12_

   PIN FE_OFN17835_n_84330
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 154.75 780.6 154.85 ;
      END
   END FE_OFN17835_n_84330

   PIN FE_OFN17869_n_65432
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 181.15 780.6 181.25 ;
      END
   END FE_OFN17869_n_65432

   PIN FE_OFN17921_n_57488
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 58.75 780.6 58.85 ;
      END
   END FE_OFN17921_n_57488

   PIN FE_OFN17931_n_41611
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 172.75 780.6 172.85 ;
      END
   END FE_OFN17931_n_41611

   PIN FE_OFN18301_b_4_4_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 149.05 0 149.15 0.51 ;
      END
   END FE_OFN18301_b_4_4_4

   PIN FE_OFN18306_b_4_8_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 230.05 0 230.15 0.51 ;
      END
   END FE_OFN18306_b_4_8_5

   PIN FE_OFN18401_n_31516
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 143.15 780.6 143.25 ;
      END
   END FE_OFN18401_n_31516

   PIN FE_OFN18434_n_27857
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 676.65 0 676.75 0.51 ;
      END
   END FE_OFN18434_n_27857

   PIN FE_OFN18783_n_31306
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 300.35 780.6 300.45 ;
      END
   END FE_OFN18783_n_31306

   PIN FE_OFN18962_n_41993
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 36.35 780.6 36.45 ;
      END
   END FE_OFN18962_n_41993

   PIN FE_OFN18995_n_41993
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 191.15 780.6 191.25 ;
      END
   END FE_OFN18995_n_41993

   PIN FE_OFN2320_delay_mul_ln34_unr9_unr7_stage2_stallmux_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 756.05 367.49 756.15 368 ;
      END
   END FE_OFN2320_delay_mul_ln34_unr9_unr7_stage2_stallmux_z_14_

   PIN FE_OFN4455_n_10397
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 40.45 0 40.55 0.51 ;
      END
   END FE_OFN4455_n_10397

   PIN FE_OFN4458_delay_mul_ln34_unr4_unr2_stage2_stallmux_z_12_
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 56.65 0 56.75 0.51 ;
      END
   END FE_OFN4458_delay_mul_ln34_unr4_unr2_stage2_stallmux_z_12_

   PIN FE_OFN4574_n_142961
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 117.05 0 117.15 0.51 ;
      END
   END FE_OFN4574_n_142961

   PIN FE_OFN4623_n_142793
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 148 0 148.2 0.255 ;
      END
   END FE_OFN4623_n_142793

   PIN FE_OFN4667_n_137232
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 76.85 0 76.95 0.51 ;
      END
   END FE_OFN4667_n_137232

   PIN FE_OFN4683_n_143620
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 247.05 0 247.15 0.51 ;
      END
   END FE_OFN4683_n_143620

   PIN FE_OFN4730_n_143033
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 259.65 0 259.75 0.51 ;
      END
   END FE_OFN4730_n_143033

   PIN FE_OFN4781_n_143003
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 121.85 0 121.95 0.51 ;
      END
   END FE_OFN4781_n_143003

   PIN FE_OFN4821_n_143199
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 112.45 0 112.55 0.51 ;
      END
   END FE_OFN4821_n_143199

   PIN FE_OFN4837_n_140222
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 160.65 0 160.75 0.51 ;
      END
   END FE_OFN4837_n_140222

   PIN FE_OFN4869_n_143507
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 99.85 0 99.95 0.51 ;
      END
   END FE_OFN4869_n_143507

   PIN FE_OFN4891_n_140207
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 176.85 0 176.95 0.51 ;
      END
   END FE_OFN4891_n_140207

   PIN FE_OFN6426_n_45151
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 194.95 780.6 195.05 ;
      END
   END FE_OFN6426_n_45151

   PIN FE_OFN6603_n_140234
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.345 152.5 780.6 152.7 ;
      END
   END FE_OFN6603_n_140234

   PIN FE_OFN6604_n_140234
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.345 120.1 780.6 120.3 ;
      END
   END FE_OFN6604_n_140234

   PIN FE_OFN6610_n_140234
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.345 81.3 780.6 81.5 ;
      END
   END FE_OFN6610_n_140234

   PIN FE_OFN6660_n_41611
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 103.35 780.6 103.45 ;
      END
   END FE_OFN6660_n_41611

   PIN FE_OFN6723_n_41706
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 180.15 780.6 180.25 ;
      END
   END FE_OFN6723_n_41706

   PIN FE_OFN6734_n_41994
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 178.95 780.6 179.05 ;
      END
   END FE_OFN6734_n_41994

   PIN FE_OFN6770_n_143423
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 127.75 780.6 127.85 ;
      END
   END FE_OFN6770_n_143423

   PIN FE_OFN6842_n_41015
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 173.75 780.6 173.85 ;
      END
   END FE_OFN6842_n_41015

   PIN FE_OFN6876_n_41734
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.345 204.1 780.6 204.3 ;
      END
   END FE_OFN6876_n_41734

   PIN FE_OFN6961_n_140210
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 173.35 780.6 173.45 ;
      END
   END FE_OFN6961_n_140210

   PIN FE_OFN7004_n_140202
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 126.95 780.6 127.05 ;
      END
   END FE_OFN7004_n_140202

   PIN FE_OFN7022_n_66979
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 220.95 780.6 221.05 ;
      END
   END FE_OFN7022_n_66979

   PIN FE_OFN8169_n_26637
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 712.45 367.49 712.55 368 ;
      END
   END FE_OFN8169_n_26637

   PIN FE_OFN8329_n_31307
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 276.35 780.6 276.45 ;
      END
   END FE_OFN8329_n_31307

   PIN FE_OFN8463_n_25371
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 197.15 780.6 197.25 ;
      END
   END FE_OFN8463_n_25371

   PIN FE_OFN8477_n_30279
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 748.65 0 748.75 0.51 ;
      END
   END FE_OFN8477_n_30279

   PIN FE_OFN8491_n_29557
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 760.65 0 760.75 0.51 ;
      END
   END FE_OFN8491_n_29557

   PIN FE_OFN8577_n_29968
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 768.45 0 768.55 0.51 ;
      END
   END FE_OFN8577_n_29968

   PIN FE_OFN8703_n_31118
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 59.35 780.6 59.45 ;
      END
   END FE_OFN8703_n_31118

   PIN FE_OFN8799_n_25382
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 736.45 0 736.55 0.51 ;
      END
   END FE_OFN8799_n_25382

   PIN FE_OFN9238_delay_add_ln34_unr2_unr1_stage2_stallmux_q_15_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 617.05 0 617.15 0.51 ;
      END
   END FE_OFN9238_delay_add_ln34_unr2_unr1_stage2_stallmux_q_15_

   PIN FE_OFN9464_b_7_8_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 98.15 780.6 98.25 ;
      END
   END FE_OFN9464_b_7_8_11

   PIN FE_OFN9467_b_7_8_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 35.35 780.6 35.45 ;
      END
   END FE_OFN9467_b_7_8_10

   PIN FE_OFN9480_b_7_8_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 70.55 780.6 70.65 ;
      END
   END FE_OFN9480_b_7_8_5

   PIN FE_OFN9486_b_7_8_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.345 80.9 780.6 81.1 ;
      END
   END FE_OFN9486_b_7_8_3

   PIN FE_OFN9489_b_7_8_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 70.35 780.6 70.45 ;
      END
   END FE_OFN9489_b_7_8_2

   PIN FE_OFN9557_b_7_6_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 173.55 780.6 173.65 ;
      END
   END FE_OFN9557_b_7_6_6

   PIN FE_OFN9563_b_7_6_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 267.55 780.6 267.65 ;
      END
   END FE_OFN9563_b_7_6_5

   PIN FE_OFN9566_b_7_6_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 130.75 780.6 130.85 ;
      END
   END FE_OFN9566_b_7_6_4

   PIN FE_OFN9568_b_7_6_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 128.95 780.6 129.05 ;
      END
   END FE_OFN9568_b_7_6_3

   PIN FE_OFN9573_b_7_6_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 191.55 780.6 191.65 ;
      END
   END FE_OFN9573_b_7_6_2

   PIN FE_OFN9575_b_7_6_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 118.95 780.6 119.05 ;
      END
   END FE_OFN9575_b_7_6_2

   PIN FE_OFN9576_b_7_6_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 688.65 367.49 688.75 368 ;
      END
   END FE_OFN9576_b_7_6_1

   PIN FE_OFN9580_b_7_6_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.345 106.5 780.6 106.7 ;
      END
   END FE_OFN9580_b_7_6_0

   PIN FE_OFN9732_b_7_0_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 202.95 780.6 203.05 ;
      END
   END FE_OFN9732_b_7_0_10

   PIN FE_OFN9735_b_7_0_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 173.15 780.6 173.25 ;
      END
   END FE_OFN9735_b_7_0_9

   PIN FE_OFN9752_b_7_0_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 218.95 780.6 219.05 ;
      END
   END FE_OFN9752_b_7_0_5

   PIN FE_OFN9757_b_7_0_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 195.15 780.6 195.25 ;
      END
   END FE_OFN9757_b_7_0_4

   PIN FE_OFN9765_b_7_0_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.345 196.3 780.6 196.5 ;
      END
   END FE_OFN9765_b_7_0_2

   PIN FE_OFN9769_b_7_0_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 155.75 780.6 155.85 ;
      END
   END FE_OFN9769_b_7_0_1

   PIN FE_OFN9772_b_7_0_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 228.15 780.6 228.25 ;
      END
   END FE_OFN9772_b_7_0_0

   PIN FE_OFN9858_b_4_8_13
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 192.85 0 192.95 0.51 ;
      END
   END FE_OFN9858_b_4_8_13

   PIN FE_OFN9860_b_4_8_12
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 196.45 0 196.55 0.51 ;
      END
   END FE_OFN9860_b_4_8_12

   PIN FE_OFN9862_b_4_8_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 196.25 0 196.35 0.51 ;
      END
   END FE_OFN9862_b_4_8_11

   PIN FE_OFN9883_b_4_8_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 220.4 0 220.6 0.255 ;
      END
   END FE_OFN9883_b_4_8_2

   PIN FE_OFN9961_b_4_6_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 247.2 0 247.4 0.255 ;
      END
   END FE_OFN9961_b_4_6_3

   PIN FE_OFN9964_b_4_6_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 236.8 0 237 0.255 ;
      END
   END FE_OFN9964_b_4_6_2

   PIN b_4_8_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 329.05 367.49 329.15 368 ;
      END
   END b_4_8_3

   PIN b_7_0_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 227.95 780.6 228.05 ;
      END
   END b_7_0_7

   PIN b_7_6_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 172.95 780.6 173.05 ;
      END
   END b_7_6_0

   PIN b_7_6_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 640.65 367.49 640.75 368 ;
      END
   END b_7_6_10

   PIN b_7_6_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 645.25 367.49 645.35 368 ;
      END
   END b_7_6_11

   PIN b_7_6_14
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 688.85 367.49 688.95 368 ;
      END
   END b_7_6_14

   PIN b_7_6_15
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 677.65 367.49 677.75 368 ;
      END
   END b_7_6_15

   PIN b_7_6_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 717.25 367.49 717.35 368 ;
      END
   END b_7_6_4

   PIN b_7_6_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 196.95 780.6 197.05 ;
      END
   END b_7_6_7

   PIN b_7_6_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 688.65 367.49 688.75 368 ;
      END
   END b_7_6_9

   PIN b_7_8_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 536.85 367.49 536.95 368 ;
      END
   END b_7_8_7

   PIN b_7_8_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 616.65 367.49 616.75 368 ;
      END
   END b_7_8_8

   PIN delay_mul_ln34_unr7_unr8_stage2_stallmux_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 545.85 0 545.95 0.51 ;
      END
   END delay_mul_ln34_unr7_unr8_stage2_stallmux_z_13_

   PIN delay_mul_ln34_unr8_unr1_stage2_stallmux_q_15_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 311.35 780.6 311.45 ;
      END
   END delay_mul_ln34_unr8_unr1_stage2_stallmux_q_15_

   PIN delay_mul_ln34_unr8_unr7_stage2_stallmux_z_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 103.15 780.6 103.25 ;
      END
   END delay_mul_ln34_unr8_unr7_stage2_stallmux_z_2_

   PIN delay_mul_ln34_unr8_unr7_stage2_stallmux_z_3_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 57.15 780.6 57.25 ;
      END
   END delay_mul_ln34_unr8_unr7_stage2_stallmux_z_3_

   PIN delay_mul_ln34_unr9_unr7_stage2_stallmux_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 664.65 367.49 664.75 368 ;
      END
   END delay_mul_ln34_unr9_unr7_stage2_stallmux_z_13_

   PIN delay_mul_ln34_unr9_unr7_stage2_stallmux_z_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 689.05 367.49 689.15 368 ;
      END
   END delay_mul_ln34_unr9_unr7_stage2_stallmux_z_2_

   PIN delay_mul_ln34_unr9_unr7_stage2_stallmux_z_3_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 676.65 367.49 676.75 368 ;
      END
   END delay_mul_ln34_unr9_unr7_stage2_stallmux_z_3_

   PIN ispd_clk
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 208.8 367.745 209 368 ;
      END
   END ispd_clk

   PIN mul_4647_72_n_181
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 16.65 0 16.75 0.51 ;
      END
   END mul_4647_72_n_181

   PIN mul_4647_72_n_182
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 52.25 0 52.35 0.51 ;
      END
   END mul_4647_72_n_182

   PIN mul_4647_72_n_53
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 17.05 0 17.15 0.51 ;
      END
   END mul_4647_72_n_53

   PIN mul_4647_72_n_69
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 22.45 0 22.55 0.51 ;
      END
   END mul_4647_72_n_69

   PIN mul_4647_72_n_779
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 126.95 0.51 127.05 ;
      END
   END mul_4647_72_n_779

   PIN mul_4649_72_n_825
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 376.85 0 376.95 0.51 ;
      END
   END mul_4649_72_n_825

   PIN mul_4649_72_n_88
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 352.25 0 352.35 0.51 ;
      END
   END mul_4649_72_n_88

   PIN mul_4651_72_n_285
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 295.05 0 295.15 0.51 ;
      END
   END mul_4651_72_n_285

   PIN mul_4664_72_n_241
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 233.65 0 233.75 0.51 ;
      END
   END mul_4664_72_n_241

   PIN mul_4664_72_n_242
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 235.25 0 235.35 0.51 ;
      END
   END mul_4664_72_n_242

   PIN mul_4664_72_n_317
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 177.65 0 177.75 0.51 ;
      END
   END mul_4664_72_n_317

   PIN mul_4664_72_n_318
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 177.45 0 177.55 0.51 ;
      END
   END mul_4664_72_n_318

   PIN mul_4664_72_n_319
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 170.05 0 170.15 0.51 ;
      END
   END mul_4664_72_n_319

   PIN mul_4664_72_n_813
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 102.85 0 102.95 0.51 ;
      END
   END mul_4664_72_n_813

   PIN mul_4664_72_n_825
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 195.05 0 195.15 0.51 ;
      END
   END mul_4664_72_n_825

   PIN mul_4664_72_n_84
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 196.05 0 196.15 0.51 ;
      END
   END mul_4664_72_n_84

   PIN mul_4664_72_n_848
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 101.85 0 101.95 0.51 ;
      END
   END mul_4664_72_n_848

   PIN mul_4664_72_n_85
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 223.45 0 223.55 0.51 ;
      END
   END mul_4664_72_n_85

   PIN mul_4664_72_n_88
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 130.45 0 130.55 0.51 ;
      END
   END mul_4664_72_n_88

   PIN mul_4698_72_n_100
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 23.95 780.6 24.05 ;
      END
   END mul_4698_72_n_100

   PIN mul_4698_72_n_99
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 12.35 780.6 12.45 ;
      END
   END mul_4698_72_n_99

   PIN mul_4700_72_n_178
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 25.55 780.6 25.65 ;
      END
   END mul_4700_72_n_178

   PIN mul_4700_72_n_179
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 12.15 780.6 12.25 ;
      END
   END mul_4700_72_n_179

   PIN n_101492
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 11.95 780.6 12.05 ;
      END
   END n_101492

   PIN n_102695
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 603.65 367.49 603.75 368 ;
      END
   END n_102695

   PIN n_103071
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 677.05 367.49 677.15 368 ;
      END
   END n_103071

   PIN n_103939
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 704.85 367.49 704.95 368 ;
      END
   END n_103939

   PIN n_103940
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 726.85 367.49 726.95 368 ;
      END
   END n_103940

   PIN n_106720
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 357.15 780.6 357.25 ;
      END
   END n_106720

   PIN n_107989
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 135.65 0 135.75 0.51 ;
      END
   END n_107989

   PIN n_108267
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 652.25 367.49 652.35 368 ;
      END
   END n_108267

   PIN n_108268
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 637.25 367.49 637.35 368 ;
      END
   END n_108268

   PIN n_108688
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 592.45 367.49 592.55 368 ;
      END
   END n_108688

   PIN n_110443
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 251.55 780.6 251.65 ;
      END
   END n_110443

   PIN n_110533
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 628.45 367.49 628.55 368 ;
      END
   END n_110533

   PIN n_112122
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 264.95 0.51 265.05 ;
      END
   END n_112122

   PIN n_112183
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 197.2 0 197.4 0.255 ;
      END
   END n_112183

   PIN n_112413
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 292.25 0 292.35 0.51 ;
      END
   END n_112413

   PIN n_112659
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 235.05 0 235.15 0.51 ;
      END
   END n_112659

   PIN n_114178
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 149.45 0 149.55 0.51 ;
      END
   END n_114178

   PIN n_114182
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 39.65 0 39.75 0.51 ;
      END
   END n_114182

   PIN n_114494
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 88.05 0 88.15 0.51 ;
      END
   END n_114494

   PIN n_114496
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 87.85 0 87.95 0.51 ;
      END
   END n_114496

   PIN n_114524
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 39.85 0 39.95 0.51 ;
      END
   END n_114524

   PIN n_114615
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 133.25 0 133.35 0.51 ;
      END
   END n_114615

   PIN n_114617
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 75.45 0 75.55 0.51 ;
      END
   END n_114617

   PIN n_114672
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 152.45 367.49 152.55 368 ;
      END
   END n_114672

   PIN n_114673
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 88.25 0 88.35 0.51 ;
      END
   END n_114673

   PIN n_114676
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 75.25 0 75.35 0.51 ;
      END
   END n_114676

   PIN n_114855
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 137.45 0 137.55 0.51 ;
      END
   END n_114855

   PIN n_114920
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 184.25 0 184.35 0.51 ;
      END
   END n_114920

   PIN n_114921
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 183.65 0 183.75 0.51 ;
      END
   END n_114921

   PIN n_115152
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 164.05 0 164.15 0.51 ;
      END
   END n_115152

   PIN n_115153
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 163.45 0 163.55 0.51 ;
      END
   END n_115153

   PIN n_115190
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 139.65 0 139.75 0.51 ;
      END
   END n_115190

   PIN n_115308
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 100.25 0 100.35 0.51 ;
      END
   END n_115308

   PIN n_115309
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 88.25 0 88.35 0.51 ;
      END
   END n_115309

   PIN n_115311
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 148.65 0 148.75 0.51 ;
      END
   END n_115311

   PIN n_115543
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 28.05 0 28.15 0.51 ;
      END
   END n_115543

   PIN n_115582
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 111.65 0 111.75 0.51 ;
      END
   END n_115582

   PIN n_115593
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 65.25 0 65.35 0.51 ;
      END
   END n_115593

   PIN n_115606
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 136.65 0 136.75 0.51 ;
      END
   END n_115606

   PIN n_115661
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 161.25 0 161.35 0.51 ;
      END
   END n_115661

   PIN n_115793
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 148.85 0 148.95 0.51 ;
      END
   END n_115793

   PIN n_115794
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 148.45 0 148.55 0.51 ;
      END
   END n_115794

   PIN n_115810
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 51.85 0 51.95 0.51 ;
      END
   END n_115810

   PIN n_116281
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 124.25 0 124.35 0.51 ;
      END
   END n_116281

   PIN n_116796
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 109.25 0 109.35 0.51 ;
      END
   END n_116796

   PIN n_117132
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 240.05 0 240.15 0.51 ;
      END
   END n_117132

   PIN n_117734
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 75.85 0 75.95 0.51 ;
      END
   END n_117734

   PIN n_117835
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 112.05 0 112.15 0.51 ;
      END
   END n_117835

   PIN n_118212
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 148.25 0 148.35 0.51 ;
      END
   END n_118212

   PIN n_118398
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 50.65 0 50.75 0.51 ;
      END
   END n_118398

   PIN n_119074
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 356.95 0.51 357.05 ;
      END
   END n_119074

   PIN n_120882
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 136.45 367.49 136.55 368 ;
      END
   END n_120882

   PIN n_121314
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 88.45 0 88.55 0.51 ;
      END
   END n_121314

   PIN n_121751
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 100.45 0 100.55 0.51 ;
      END
   END n_121751

   PIN n_121989
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 76.25 0 76.35 0.51 ;
      END
   END n_121989

   PIN n_122315
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 75.65 0 75.75 0.51 ;
      END
   END n_122315

   PIN n_122349
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 111.45 0 111.55 0.51 ;
      END
   END n_122349

   PIN n_123446
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 147.65 0 147.75 0.51 ;
      END
   END n_123446

   PIN n_124498
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 23.95 0.51 24.05 ;
      END
   END n_124498

   PIN n_124539
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 118.05 367.49 118.15 368 ;
      END
   END n_124539

   PIN n_124540
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 128.25 367.49 128.35 368 ;
      END
   END n_124540

   PIN n_124638
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 52.05 0 52.15 0.51 ;
      END
   END n_124638

   PIN n_124639
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 76.85 0 76.95 0.51 ;
      END
   END n_124639

   PIN n_125192
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 27.05 367.49 27.15 368 ;
      END
   END n_125192

   PIN n_125461
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 77.25 0 77.35 0.51 ;
      END
   END n_125461

   PIN n_125695
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 68.65 0 68.75 0.51 ;
      END
   END n_125695

   PIN n_125716
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 42.65 0 42.75 0.51 ;
      END
   END n_125716

   PIN n_127036
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 40.25 0 40.35 0.51 ;
      END
   END n_127036

   PIN n_127040
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 93.85 0 93.95 0.51 ;
      END
   END n_127040

   PIN n_127190
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 150.25 367.49 150.35 368 ;
      END
   END n_127190

   PIN n_127195
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 43.05 0 43.15 0.51 ;
      END
   END n_127195

   PIN n_127589
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 14.15 0.51 14.25 ;
      END
   END n_127589

   PIN n_127666
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 77.65 367.49 77.75 368 ;
      END
   END n_127666

   PIN n_128129
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 88.65 0 88.75 0.51 ;
      END
   END n_128129

   PIN n_128287
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 11.05 0 11.15 0.51 ;
      END
   END n_128287

   PIN n_128296
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 28.85 0 28.95 0.51 ;
      END
   END n_128296

   PIN n_128768
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 178.45 367.49 178.55 368 ;
      END
   END n_128768

   PIN n_129724
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 29.25 0 29.35 0.51 ;
      END
   END n_129724

   PIN n_130012
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 63.85 0 63.95 0.51 ;
      END
   END n_130012

   PIN n_130016
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 51.65 0 51.75 0.51 ;
      END
   END n_130016

   PIN n_131230
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 63.65 0 63.75 0.51 ;
      END
   END n_131230

   PIN n_132777
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 88.45 367.49 88.55 368 ;
      END
   END n_132777

   PIN n_133344
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 52.85 0 52.95 0.51 ;
      END
   END n_133344

   PIN n_133767
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 111.85 0 111.95 0.51 ;
      END
   END n_133767

   PIN n_137225
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 148.45 0 148.55 0.51 ;
      END
   END n_137225

   PIN n_137233
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 36.15 780.6 36.25 ;
      END
   END n_137233

   PIN n_137728
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 11.75 780.6 11.85 ;
      END
   END n_137728

   PIN n_137826
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 106.95 780.6 107.05 ;
      END
   END n_137826

   PIN n_137827
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 206.05 0 206.15 0.51 ;
      END
   END n_137827

   PIN n_137828
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 280.65 0 280.75 0.51 ;
      END
   END n_137828

   PIN n_137851
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 136.05 0 136.15 0.51 ;
      END
   END n_137851

   PIN n_140213
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 220.15 780.6 220.25 ;
      END
   END n_140213

   PIN n_142851
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 210.8 0 211 0.255 ;
      END
   END n_142851

   PIN n_142964
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 208.05 0 208.15 0.51 ;
      END
   END n_142964

   PIN n_143483
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.345 84.3 780.6 84.5 ;
      END
   END n_143483

   PIN n_143496
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 85.15 780.6 85.25 ;
      END
   END n_143496

   PIN n_143630
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 142.95 780.6 143.05 ;
      END
   END n_143630

   PIN n_143743
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 42.45 0 42.55 0.51 ;
      END
   END n_143743

   PIN n_143933
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 345.05 0 345.15 0.51 ;
      END
   END n_143933

   PIN n_144109
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 273.65 0 273.75 0.51 ;
      END
   END n_144109

   PIN n_144135
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 700.25 367.49 700.35 368 ;
      END
   END n_144135

   PIN n_144158
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 148.55 780.6 148.65 ;
      END
   END n_144158

   PIN n_24056
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 10.95 780.6 11.05 ;
      END
   END n_24056

   PIN n_25134
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 535.25 0 535.35 0.51 ;
      END
   END n_25134

   PIN n_25376
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 142.75 780.6 142.85 ;
      END
   END n_25376

   PIN n_26011
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 520.05 0 520.15 0.51 ;
      END
   END n_26011

   PIN n_26383
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 460.25 367.49 460.35 368 ;
      END
   END n_26383

   PIN n_26633
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 333.75 780.6 333.85 ;
      END
   END n_26633

   PIN n_27338
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 496.05 367.49 496.15 368 ;
      END
   END n_27338

   PIN n_27740
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 121.75 780.6 121.85 ;
      END
   END n_27740

   PIN n_27741
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 121.55 780.6 121.65 ;
      END
   END n_27741

   PIN n_28380
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 14.35 780.6 14.45 ;
      END
   END n_28380

   PIN n_28496
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 653.05 367.49 653.15 368 ;
      END
   END n_28496

   PIN n_28631
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 388.65 0 388.75 0.51 ;
      END
   END n_28631

   PIN n_28640
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 14.15 780.6 14.25 ;
      END
   END n_28640

   PIN n_28780
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 652.85 367.49 652.95 368 ;
      END
   END n_28780

   PIN n_29125
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 666.05 0 666.15 0.51 ;
      END
   END n_29125

   PIN n_31876
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 290.25 0 290.35 0.51 ;
      END
   END n_31876

   PIN n_33226
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 147.45 0 147.55 0.51 ;
      END
   END n_33226

   PIN n_33292
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 268.05 0 268.15 0.51 ;
      END
   END n_33292

   PIN n_33293
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 263.85 0 263.95 0.51 ;
      END
   END n_33293

   PIN n_33375
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 196.85 0 196.95 0.51 ;
      END
   END n_33375

   PIN n_33782
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 255.85 0 255.95 0.51 ;
      END
   END n_33782

   PIN n_34260
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 126.95 780.6 127.05 ;
      END
   END n_34260

   PIN n_34345
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 208.45 0 208.55 0.51 ;
      END
   END n_34345

   PIN n_35072
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 217.45 0 217.55 0.51 ;
      END
   END n_35072

   PIN n_35096
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 365.05 0 365.15 0.51 ;
      END
   END n_35096

   PIN n_36000
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 217.25 0 217.35 0.51 ;
      END
   END n_36000

   PIN n_36612
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 222.65 0 222.75 0.51 ;
      END
   END n_36612

   PIN n_37235
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 170.25 0 170.35 0.51 ;
      END
   END n_37235

   PIN n_37476
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 210.85 0 210.95 0.51 ;
      END
   END n_37476

   PIN n_40827
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 84.95 780.6 85.05 ;
      END
   END n_40827

   PIN n_40897
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 11.55 780.6 11.65 ;
      END
   END n_40897

   PIN n_40960
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 28.15 780.6 28.25 ;
      END
   END n_40960

   PIN n_41417
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 72.95 780.6 73.05 ;
      END
   END n_41417

   PIN n_41500
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 11.35 780.6 11.45 ;
      END
   END n_41500

   PIN n_41612
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 47.95 780.6 48.05 ;
      END
   END n_41612

   PIN n_41734
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 96.35 780.6 96.45 ;
      END
   END n_41734

   PIN n_41834
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 24.95 780.6 25.05 ;
      END
   END n_41834

   PIN n_41962
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 35.15 780.6 35.25 ;
      END
   END n_41962

   PIN n_42268
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 243.95 780.6 244.05 ;
      END
   END n_42268

   PIN n_42269
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 243.75 780.6 243.85 ;
      END
   END n_42269

   PIN n_42354
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 323.55 780.6 323.65 ;
      END
   END n_42354

   PIN n_42362
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 335.35 780.6 335.45 ;
      END
   END n_42362

   PIN n_42412
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 243.55 780.6 243.65 ;
      END
   END n_42412

   PIN n_42413
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 243.35 780.6 243.45 ;
      END
   END n_42413

   PIN n_42443
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 333.15 780.6 333.25 ;
      END
   END n_42443

   PIN n_42504
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 275.75 780.6 275.85 ;
      END
   END n_42504

   PIN n_42506
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 299.95 780.6 300.05 ;
      END
   END n_42506

   PIN n_42608
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 332.95 780.6 333.05 ;
      END
   END n_42608

   PIN n_42807
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 348.75 780.6 348.85 ;
      END
   END n_42807

   PIN n_42921
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 760.65 367.49 760.75 368 ;
      END
   END n_42921

   PIN n_43096
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 221.35 780.6 221.45 ;
      END
   END n_43096

   PIN n_43134
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 323.35 780.6 323.45 ;
      END
   END n_43134

   PIN n_43240
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 322.95 780.6 323.05 ;
      END
   END n_43240

   PIN n_43320
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 179.95 780.6 180.05 ;
      END
   END n_43320

   PIN n_43384
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 357.55 780.6 357.65 ;
      END
   END n_43384

   PIN n_43416
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 287.35 780.6 287.45 ;
      END
   END n_43416

   PIN n_43545
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 221.15 780.6 221.25 ;
      END
   END n_43545

   PIN n_43643
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 266.15 780.6 266.25 ;
      END
   END n_43643

   PIN n_43707
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 310.95 780.6 311.05 ;
      END
   END n_43707

   PIN n_44058
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 323.15 780.6 323.25 ;
      END
   END n_44058

   PIN n_44137
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 724.25 367.49 724.35 368 ;
      END
   END n_44137

   PIN n_44356
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 94.35 780.6 94.45 ;
      END
   END n_44356

   PIN n_44415
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 219.95 780.6 220.05 ;
      END
   END n_44415

   PIN n_44594
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 335.55 780.6 335.65 ;
      END
   END n_44594

   PIN n_44658
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 335.15 780.6 335.25 ;
      END
   END n_44658

   PIN n_45114
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 348.15 780.6 348.25 ;
      END
   END n_45114

   PIN n_45130
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 219.75 780.6 219.85 ;
      END
   END n_45130

   PIN n_45297
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 219.55 780.6 219.65 ;
      END
   END n_45297

   PIN n_45432
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 83.15 780.6 83.25 ;
      END
   END n_45432

   PIN n_45433
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 84.75 780.6 84.85 ;
      END
   END n_45433

   PIN n_45435
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 228.95 780.6 229.05 ;
      END
   END n_45435

   PIN n_45598
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 286.95 780.6 287.05 ;
      END
   END n_45598

   PIN n_45795
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 265.55 780.6 265.65 ;
      END
   END n_45795

   PIN n_45796
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 265.35 780.6 265.45 ;
      END
   END n_45796

   PIN n_46004
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 104.95 780.6 105.05 ;
      END
   END n_46004

   PIN n_46071
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 72.75 780.6 72.85 ;
      END
   END n_46071

   PIN n_46080
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 144.15 780.6 144.25 ;
      END
   END n_46080

   PIN n_46178
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 270.45 0 270.55 0.51 ;
      END
   END n_46178

   PIN n_46181
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 84.15 780.6 84.25 ;
      END
   END n_46181

   PIN n_46217
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 219.35 780.6 219.45 ;
      END
   END n_46217

   PIN n_46227
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 148.95 780.6 149.05 ;
      END
   END n_46227

   PIN n_46333
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 151.35 780.6 151.45 ;
      END
   END n_46333

   PIN n_46334
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 778.05 0 778.15 0.51 ;
      END
   END n_46334

   PIN n_46340
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 82.95 780.6 83.05 ;
      END
   END n_46340

   PIN n_46341
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 82.75 780.6 82.85 ;
      END
   END n_46341

   PIN n_46365
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 24.75 780.6 24.85 ;
      END
   END n_46365

   PIN n_46513
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 72.55 780.6 72.65 ;
      END
   END n_46513

   PIN n_46588
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 127.55 780.6 127.65 ;
      END
   END n_46588

   PIN n_46658
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 35.15 780.6 35.25 ;
      END
   END n_46658

   PIN n_46660
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 48.95 780.6 49.05 ;
      END
   END n_46660

   PIN n_46774
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 11.15 780.6 11.25 ;
      END
   END n_46774

   PIN n_46851
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 97.75 780.6 97.85 ;
      END
   END n_46851

   PIN n_46932
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 118.75 780.6 118.85 ;
      END
   END n_46932

   PIN n_46954
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 59.75 780.6 59.85 ;
      END
   END n_46954

   PIN n_47028
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 82.55 780.6 82.65 ;
      END
   END n_47028

   PIN n_47607
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 160.85 0 160.95 0.51 ;
      END
   END n_47607

   PIN n_47644
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 24.55 780.6 24.65 ;
      END
   END n_47644

   PIN n_47750
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 262.25 0 262.35 0.51 ;
      END
   END n_47750

   PIN n_47929
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 189.45 0 189.55 0.51 ;
      END
   END n_47929

   PIN n_48546
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 121.95 780.6 122.05 ;
      END
   END n_48546

   PIN n_48611
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 140.45 0 140.55 0.51 ;
      END
   END n_48611

   PIN n_48880
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 197.35 780.6 197.45 ;
      END
   END n_48880

   PIN n_48997
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 60.15 780.6 60.25 ;
      END
   END n_48997

   PIN n_49055
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 72.15 780.6 72.25 ;
      END
   END n_49055

   PIN n_49568
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 28.65 0 28.75 0.51 ;
      END
   END n_49568

   PIN n_49769
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 24.35 780.6 24.45 ;
      END
   END n_49769

   PIN n_49987
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 219.15 780.6 219.25 ;
      END
   END n_49987

   PIN n_50107
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 24.15 780.6 24.25 ;
      END
   END n_50107

   PIN n_50238
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 347.95 780.6 348.05 ;
      END
   END n_50238

   PIN n_50246
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 253.35 780.6 253.45 ;
      END
   END n_50246

   PIN n_50397
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 195.95 780.6 196.05 ;
      END
   END n_50397

   PIN n_50495
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 348.55 780.6 348.65 ;
      END
   END n_50495

   PIN n_50522
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 717.65 367.49 717.75 368 ;
      END
   END n_50522

   PIN n_50818
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 287.15 780.6 287.25 ;
      END
   END n_50818

   PIN n_50937
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 599.25 0 599.35 0.51 ;
      END
   END n_50937

   PIN n_51078
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 204.55 780.6 204.65 ;
      END
   END n_51078

   PIN n_51110
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 82.35 780.6 82.45 ;
      END
   END n_51110

   PIN n_51111
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 82.15 780.6 82.25 ;
      END
   END n_51111

   PIN n_51211
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 96.15 780.6 96.25 ;
      END
   END n_51211

   PIN n_51212
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 103.15 780.6 103.25 ;
      END
   END n_51212

   PIN n_51988
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 220.75 780.6 220.85 ;
      END
   END n_51988

   PIN n_52066
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 599.05 0 599.15 0.51 ;
      END
   END n_52066

   PIN n_52279
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 333.55 780.6 333.65 ;
      END
   END n_52279

   PIN n_52455
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 251.75 780.6 251.85 ;
      END
   END n_52455

   PIN n_52456
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 251.35 780.6 251.45 ;
      END
   END n_52456

   PIN n_52502
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 102.95 780.6 103.05 ;
      END
   END n_52502

   PIN n_52697
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 348.35 780.6 348.45 ;
      END
   END n_52697

   PIN n_52749
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 323.75 780.6 323.85 ;
      END
   END n_52749

   PIN n_52750
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 325.15 780.6 325.25 ;
      END
   END n_52750

   PIN n_52873
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 299.35 780.6 299.45 ;
      END
   END n_52873

   PIN n_52994
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 178.75 780.6 178.85 ;
      END
   END n_52994

   PIN n_53090
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 35.35 780.6 35.45 ;
      END
   END n_53090

   PIN n_53725
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 324.55 780.6 324.65 ;
      END
   END n_53725

   PIN n_53750
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 748.65 367.49 748.75 368 ;
      END
   END n_53750

   PIN n_53835
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 124.65 0 124.75 0.51 ;
      END
   END n_53835

   PIN n_54049
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 72.35 780.6 72.45 ;
      END
   END n_54049

   PIN n_54060
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 49.15 780.6 49.25 ;
      END
   END n_54060

   PIN n_54354
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 46.75 780.6 46.85 ;
      END
   END n_54354

   PIN n_54357
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 34.95 780.6 35.05 ;
      END
   END n_54357

   PIN n_54358
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 35.95 780.6 36.05 ;
      END
   END n_54358

   PIN n_54853
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 168.15 780.6 168.25 ;
      END
   END n_54853

   PIN n_54873
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 350.15 780.6 350.25 ;
      END
   END n_54873

   PIN n_54905
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 748.45 367.49 748.55 368 ;
      END
   END n_54905

   PIN n_54906
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 749.45 367.49 749.55 368 ;
      END
   END n_54906

   PIN n_54932
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 724.05 367.49 724.15 368 ;
      END
   END n_54932

   PIN n_54940
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 336.15 780.6 336.25 ;
      END
   END n_54940

   PIN n_54943
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 676.05 367.49 676.15 368 ;
      END
   END n_54943

   PIN n_54953
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 311.15 780.6 311.25 ;
      END
   END n_54953

   PIN n_55031
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 197.15 780.6 197.25 ;
      END
   END n_55031

   PIN n_55096
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 59.95 780.6 60.05 ;
      END
   END n_55096

   PIN n_55097
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 81.95 780.6 82.05 ;
      END
   END n_55097

   PIN n_5512
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 64.85 0 64.95 0.51 ;
      END
   END n_5512

   PIN n_55141
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 736.25 367.49 736.35 368 ;
      END
   END n_55141

   PIN n_55158
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 195.75 780.6 195.85 ;
      END
   END n_55158

   PIN n_55332
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 299.95 780.6 300.05 ;
      END
   END n_55332

   PIN n_55444
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 72.15 780.6 72.25 ;
      END
   END n_55444

   PIN n_55445
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 71.95 780.6 72.05 ;
      END
   END n_55445

   PIN n_55540
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 459.85 0 459.95 0.51 ;
      END
   END n_55540

   PIN n_55560
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 262.55 780.6 262.65 ;
      END
   END n_55560

   PIN n_55599
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 95.95 780.6 96.05 ;
      END
   END n_55599

   PIN n_55648
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 459.65 0 459.75 0.51 ;
      END
   END n_55648

   PIN n_55722
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 438.25 0 438.35 0.51 ;
      END
   END n_55722

   PIN n_55790
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 37.35 780.6 37.45 ;
      END
   END n_55790

   PIN n_5584
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 33.45 0 33.55 0.51 ;
      END
   END n_5584

   PIN n_55908
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 60.55 780.6 60.65 ;
      END
   END n_55908

   PIN n_56447
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 760.65 367.49 760.75 368 ;
      END
   END n_56447

   PIN n_56448
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 357.35 780.6 357.45 ;
      END
   END n_56448

   PIN n_56512
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 204.35 780.6 204.45 ;
      END
   END n_56512

   PIN n_56516
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 204.15 780.6 204.25 ;
      END
   END n_56516

   PIN n_56956
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 587.05 0 587.15 0.51 ;
      END
   END n_56956

   PIN n_57348
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 97.55 780.6 97.65 ;
      END
   END n_57348

   PIN n_57368
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 26.35 780.6 26.45 ;
      END
   END n_57368

   PIN n_57417
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 97.35 780.6 97.45 ;
      END
   END n_57417

   PIN n_57444
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 724.65 0 724.75 0.51 ;
      END
   END n_57444

   PIN n_57615
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 749.25 367.49 749.35 368 ;
      END
   END n_57615

   PIN n_57620
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 172.65 0 172.75 0.51 ;
      END
   END n_57620

   PIN n_57624
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 241.15 780.6 241.25 ;
      END
   END n_57624

   PIN n_57629
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 151.15 780.6 151.25 ;
      END
   END n_57629

   PIN n_57726
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 181.35 780.6 181.45 ;
      END
   END n_57726

   PIN n_57746
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 127.55 780.6 127.65 ;
      END
   END n_57746

   PIN n_57903
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 353.85 367.49 353.95 368 ;
      END
   END n_57903

   PIN n_57935
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 204.75 780.6 204.85 ;
      END
   END n_57935

   PIN n_57983
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 512.25 367.49 512.35 368 ;
      END
   END n_57983

   PIN n_58082
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 333.35 780.6 333.45 ;
      END
   END n_58082

   PIN n_58177
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 349.15 780.6 349.25 ;
      END
   END n_58177

   PIN n_58261
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 675.85 367.49 675.95 368 ;
      END
   END n_58261

   PIN n_58290
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 678.45 367.49 678.55 368 ;
      END
   END n_58290

   PIN n_58294
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 678.25 367.49 678.35 368 ;
      END
   END n_58294

   PIN n_58385
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 71.95 780.6 72.05 ;
      END
   END n_58385

   PIN n_58399
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 57.35 780.6 57.45 ;
      END
   END n_58399

   PIN n_58400
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 57.15 780.6 57.25 ;
      END
   END n_58400

   PIN n_58672
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 205.15 780.6 205.25 ;
      END
   END n_58672

   PIN n_58674
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 47.75 780.6 47.85 ;
      END
   END n_58674

   PIN n_59053
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 148.75 780.6 148.85 ;
      END
   END n_59053

   PIN n_59056
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 228.75 780.6 228.85 ;
      END
   END n_59056

   PIN n_59131
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 56.95 780.6 57.05 ;
      END
   END n_59131

   PIN n_59166
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 736.05 367.49 736.15 368 ;
      END
   END n_59166

   PIN n_59286
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 712.25 367.49 712.35 368 ;
      END
   END n_59286

   PIN n_59394
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 688.85 367.49 688.95 368 ;
      END
   END n_59394

   PIN n_59605
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 460.25 0 460.35 0.51 ;
      END
   END n_59605

   PIN n_60089
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 424.05 367.49 424.15 368 ;
      END
   END n_60089

   PIN n_60346
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 190.95 780.6 191.05 ;
      END
   END n_60346

   PIN n_60369
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 664.45 0 664.55 0.51 ;
      END
   END n_60369

   PIN n_60370
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 664.65 0 664.75 0.51 ;
      END
   END n_60370

   PIN n_60378
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 227.55 780.6 227.65 ;
      END
   END n_60378

   PIN n_60427
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 37.15 780.6 37.25 ;
      END
   END n_60427

   PIN n_60554
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 127.35 780.6 127.45 ;
      END
   END n_60554

   PIN n_60615
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 142.55 780.6 142.65 ;
      END
   END n_60615

   PIN n_60632
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 143.95 780.6 144.05 ;
      END
   END n_60632

   PIN n_61085
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 102.95 780.6 103.05 ;
      END
   END n_61085

   PIN n_61149
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 59.15 780.6 59.25 ;
      END
   END n_61149

   PIN n_61187
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 47.75 780.6 47.85 ;
      END
   END n_61187

   PIN n_61461
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 688.45 367.49 688.55 368 ;
      END
   END n_61461

   PIN n_61579
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 34.75 780.6 34.85 ;
      END
   END n_61579

   PIN n_61580
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 58.95 780.6 59.05 ;
      END
   END n_61580

   PIN n_61592
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 288.35 780.6 288.45 ;
      END
   END n_61592

   PIN n_61601
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 155.55 780.6 155.65 ;
      END
   END n_61601

   PIN n_61705
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 304.45 367.49 304.55 368 ;
      END
   END n_61705

   PIN n_61723
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 160.25 0 160.35 0.51 ;
      END
   END n_61723

   PIN n_61755
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 321.65 0 321.75 0.51 ;
      END
   END n_61755

   PIN n_61873
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 324.95 780.6 325.05 ;
      END
   END n_61873

   PIN n_61878
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 712.85 367.49 712.95 368 ;
      END
   END n_61878

   PIN n_61893
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 676.45 367.49 676.55 368 ;
      END
   END n_61893

   PIN n_61956
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 26.15 780.6 26.25 ;
      END
   END n_61956

   PIN n_62290
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 190.75 780.6 190.85 ;
      END
   END n_62290

   PIN n_62406
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 203.75 780.6 203.85 ;
      END
   END n_62406

   PIN n_62437
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 688.25 367.49 688.35 368 ;
      END
   END n_62437

   PIN n_62460
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 664.45 367.49 664.55 368 ;
      END
   END n_62460

   PIN n_62694
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 640.25 367.49 640.35 368 ;
      END
   END n_62694

   PIN n_62695
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 664.85 367.49 664.95 368 ;
      END
   END n_62695

   PIN n_63124
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 56.95 780.6 57.05 ;
      END
   END n_63124

   PIN n_63132
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 154.55 780.6 154.65 ;
      END
   END n_63132

   PIN n_63155
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 279.65 0 279.75 0.51 ;
      END
   END n_63155

   PIN n_63260
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 544.65 367.49 544.75 368 ;
      END
   END n_63260

   PIN n_63263
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 428.45 367.49 428.55 368 ;
      END
   END n_63263

   PIN n_63360
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 567.45 0 567.55 0.51 ;
      END
   END n_63360

   PIN n_63423
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 85.35 780.6 85.45 ;
      END
   END n_63423

   PIN n_63445
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 220.55 780.6 220.65 ;
      END
   END n_63445

   PIN n_63901
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 688.05 367.49 688.15 368 ;
      END
   END n_63901

   PIN n_64318
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 466.05 367.49 466.15 368 ;
      END
   END n_64318

   PIN n_64366
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 34.95 780.6 35.05 ;
      END
   END n_64366

   PIN n_64478
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 196.95 780.6 197.05 ;
      END
   END n_64478

   PIN n_64560
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 702.25 367.49 702.35 368 ;
      END
   END n_64560

   PIN n_64768
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 241.15 780.6 241.25 ;
      END
   END n_64768

   PIN n_64772
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 252.95 780.6 253.05 ;
      END
   END n_64772

   PIN n_64912
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 468.85 367.49 468.95 368 ;
      END
   END n_64912

   PIN n_65026
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 676.85 367.49 676.95 368 ;
      END
   END n_65026

   PIN n_65319
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 273.85 0 273.95 0.51 ;
      END
   END n_65319

   PIN n_65354
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 447.05 367.49 447.15 368 ;
      END
   END n_65354

   PIN n_65426
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 304.65 367.49 304.75 368 ;
      END
   END n_65426

   PIN n_65480
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 149.55 780.6 149.65 ;
      END
   END n_65480

   PIN n_65483
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 171.75 780.6 171.85 ;
      END
   END n_65483

   PIN n_65893
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 241.55 780.6 241.65 ;
      END
   END n_65893

   PIN n_65894
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 240.95 780.6 241.05 ;
      END
   END n_65894

   PIN n_66724
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 664.25 367.49 664.35 368 ;
      END
   END n_66724

   PIN n_66751
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 243.15 780.6 243.25 ;
      END
   END n_66751

   PIN n_66842
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 265.15 780.6 265.25 ;
      END
   END n_66842

   PIN n_66843
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 264.95 780.6 265.05 ;
      END
   END n_66843

   PIN n_66867
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 465.85 367.49 465.95 368 ;
      END
   END n_66867

   PIN n_67068
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 268.25 0 268.35 0.51 ;
      END
   END n_67068

   PIN n_67215
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 149.35 780.6 149.45 ;
      END
   END n_67215

   PIN n_70345
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 286.95 780.6 287.05 ;
      END
   END n_70345

   PIN n_70642
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 748.25 367.49 748.35 368 ;
      END
   END n_70642

   PIN n_71222
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 310.95 780.6 311.05 ;
      END
   END n_71222

   PIN n_71449
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 306.85 0 306.95 0.51 ;
      END
   END n_71449

   PIN n_71795
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 493.45 0 493.55 0.51 ;
      END
   END n_71795

   PIN n_77679
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 448.25 0 448.35 0.51 ;
      END
   END n_77679

   PIN n_77842
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 264.85 0 264.95 0.51 ;
      END
   END n_77842

   PIN n_80858
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 356.95 780.6 357.05 ;
      END
   END n_80858

   PIN n_81895
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 242.95 780.6 243.05 ;
      END
   END n_81895

   PIN n_82145
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 568.45 367.49 568.55 368 ;
      END
   END n_82145

   PIN n_82355
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 275.55 780.6 275.65 ;
      END
   END n_82355

   PIN n_82437
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 748.65 367.49 748.75 368 ;
      END
   END n_82437

   PIN n_8249
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 159.65 0 159.75 0.51 ;
      END
   END n_8249

   PIN n_82916
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 195.55 780.6 195.65 ;
      END
   END n_82916

   PIN n_83187
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 299.75 780.6 299.85 ;
      END
   END n_83187

   PIN n_83203
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 311.95 780.6 312.05 ;
      END
   END n_83203

   PIN n_84332
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 359.95 780.6 360.05 ;
      END
   END n_84332

   PIN n_85306
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 780.09 300.15 780.6 300.25 ;
      END
   END n_85306

   PIN n_85307
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 311.55 780.6 311.65 ;
      END
   END n_85307

   PIN n_85541
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 556.25 0 556.35 0.51 ;
      END
   END n_85541

   PIN n_86195
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 227.15 780.6 227.25 ;
      END
   END n_86195

   PIN n_87554
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 568.25 367.49 568.35 368 ;
      END
   END n_87554

   PIN n_87555
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 568.05 367.49 568.15 368 ;
      END
   END n_87555

   PIN n_88558
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 780.09 299.55 780.6 299.65 ;
      END
   END n_88558

   PIN n_95316
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 776.85 367.49 776.95 368 ;
      END
   END n_95316

   PIN n_95932
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 100.85 0 100.95 0.51 ;
      END
   END n_95932

   PIN n_96299
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 581.65 367.49 581.75 368 ;
      END
   END n_96299

   PIN n_96642
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 127.45 0 127.55 0.51 ;
      END
   END n_96642

   PIN n_97723
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 472.65 0 472.75 0.51 ;
      END
   END n_97723

   OBS
      LAYER via1 ;
         RECT 0 0 780.6 368 ;
      LAYER metal5 ;
         RECT 0.63 0.00 779.97 368 ;
      LAYER metal4 ;
         RECT 0.00 0.63 780.6 367.37 ;
      LAYER metal3 ;
         RECT 0.63 0.00 779.97 368 ;
      LAYER metal2 ;
         RECT 0.00 0.63 780.6 367.37 ;
      LAYER metal1 ;
         RECT 0.00 0.00 780.6 368 ;
   END
END h2

MACRO h1
   CLASS BLOCK ;
   FOREIGN h1 ;
   ORIGIN 0 0 ;
   SIZE 805.945 BY 498.005 ;
   SYMMETRY X Y R90 ;
   PIN FE_OCPN15738_FE_OFN11549_n_142793
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 355.65 497.495 355.75 498.005 ;
      END
   END FE_OCPN15738_FE_OFN11549_n_142793

   PIN FE_OFN10667_a_5_6_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 396.15 805.945 396.25 ;
      END
   END FE_OFN10667_a_5_6_4

   PIN FE_OFN10748_a_4_4_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 251.95 805.945 252.05 ;
      END
   END FE_OFN10748_a_4_4_4

   PIN FE_OFN10792_a_4_0_5
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 276.35 805.945 276.45 ;
      END
   END FE_OFN10792_a_4_0_5

   PIN FE_OFN10799_a_3_8_7
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 419.55 805.945 419.65 ;
      END
   END FE_OFN10799_a_3_8_7

   PIN FE_OFN10820_a_3_6_7
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 326.95 805.945 327.05 ;
      END
   END FE_OFN10820_a_3_6_7

   PIN FE_OFN10830_a_3_4_5
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 266.95 805.945 267.05 ;
      END
   END FE_OFN10830_a_3_4_5

   PIN FE_OFN10834_a_3_4_0
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 288.35 805.945 288.45 ;
      END
   END FE_OFN10834_a_3_4_0

   PIN FE_OFN10851_a_2_8_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 290.15 805.945 290.25 ;
      END
   END FE_OFN10851_a_2_8_4

   PIN FE_OFN10859_a_2_8_1
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 386.75 805.945 386.85 ;
      END
   END FE_OFN10859_a_2_8_1

   PIN FE_OFN10872_a_2_6_7
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 252.15 805.945 252.25 ;
      END
   END FE_OFN10872_a_2_6_7

   PIN FE_OFN10879_a_2_6_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 288.55 805.945 288.65 ;
      END
   END FE_OFN10879_a_2_6_4

   PIN FE_OFN10888_a_2_4_7
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 357.55 805.945 357.65 ;
      END
   END FE_OFN10888_a_2_4_7

   PIN FE_OFN10898_a_2_4_1
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 670.45 0 670.55 0.51 ;
      END
   END FE_OFN10898_a_2_4_1

   PIN FE_OFN10902_a_2_4_0
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 263.75 805.945 263.85 ;
      END
   END FE_OFN10902_a_2_4_0

   PIN FE_OFN10931_a_1_4_0
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 290.35 805.945 290.45 ;
      END
   END FE_OFN10931_a_1_4_0

   PIN FE_OFN10982_a_0_6_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 449.15 805.945 449.25 ;
      END
   END FE_OFN10982_a_0_6_4

   PIN FE_OFN10987_a_0_6_1
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 299.75 805.945 299.85 ;
      END
   END FE_OFN10987_a_0_6_1

   PIN FE_OFN10999_a_0_4_7
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 267.15 805.945 267.25 ;
      END
   END FE_OFN10999_a_0_4_7

   PIN FE_OFN11007_a_0_4_0
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 252.55 805.945 252.65 ;
      END
   END FE_OFN11007_a_0_4_0

   PIN FE_OFN12751_n_142961
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 281.85 497.495 281.95 498.005 ;
      END
   END FE_OFN12751_n_142961

   PIN FE_OFN12753_n_142961
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 384.85 497.495 384.95 498.005 ;
      END
   END FE_OFN12753_n_142961

   PIN FE_OFN14480_n_112183
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 483.05 497.495 483.15 498.005 ;
      END
   END FE_OFN14480_n_112183

   PIN FE_OFN14491_n_112182
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 378.45 497.495 378.55 498.005 ;
      END
   END FE_OFN14491_n_112182

   PIN FE_OFN14493_n_112182
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 461.65 497.495 461.75 498.005 ;
      END
   END FE_OFN14493_n_112182

   PIN FE_OFN14699_a_9_6_7
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 386.95 805.945 387.05 ;
      END
   END FE_OFN14699_a_9_6_7

   PIN FE_OFN14911_n_142849
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 305.85 497.495 305.95 498.005 ;
      END
   END FE_OFN14911_n_142849

   PIN FE_OFN15367_delay_mul_ln34_unr5_unr5_stage2_stallmux_z_13_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 630.05 497.495 630.15 498.005 ;
      END
   END FE_OFN15367_delay_mul_ln34_unr5_unr5_stage2_stallmux_z_13_

   PIN FE_OFN15376_n_21671
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 492.15 805.945 492.25 ;
      END
   END FE_OFN15376_n_21671

   PIN FE_OFN15983_n_36821
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 329.45 497.495 329.55 498.005 ;
      END
   END FE_OFN15983_n_36821

   PIN FE_OFN16026_a_0_6_1
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 228.35 805.945 228.45 ;
      END
   END FE_OFN16026_a_0_6_1

   PIN FE_OFN16151_a_2_4_5
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 237.35 805.945 237.45 ;
      END
   END FE_OFN16151_a_2_4_5

   PIN FE_OFN16443_a_7_4_5
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 267.35 805.945 267.45 ;
      END
   END FE_OFN16443_a_7_4_5

   PIN FE_OFN16476_a_2_6_1
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 678.25 0 678.35 0.51 ;
      END
   END FE_OFN16476_a_2_6_1

   PIN FE_OFN17481_n_126984
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.85 0 317.95 0.51 ;
      END
   END FE_OFN17481_n_126984

   PIN FE_OFN17555_delay_mul_ln34_unr5_unr7_stage2_stallmux_z_13_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 377.65 497.495 377.75 498.005 ;
      END
   END FE_OFN17555_delay_mul_ln34_unr5_unr7_stage2_stallmux_z_13_

   PIN FE_OFN18498_n_22234
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 665.45 497.495 665.55 498.005 ;
      END
   END FE_OFN18498_n_22234

   PIN FE_OFN18638_a_7_6_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 276.15 805.945 276.25 ;
      END
   END FE_OFN18638_a_7_6_4

   PIN FE_OFN18656_a_3_6_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 276.35 805.945 276.45 ;
      END
   END FE_OFN18656_a_3_6_4

   PIN FE_OFN18679_a_1_6_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 419.75 805.945 419.85 ;
      END
   END FE_OFN18679_a_1_6_4

   PIN FE_OFN19318_a_8_8_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 449.35 805.945 449.45 ;
      END
   END FE_OFN19318_a_8_8_4

   PIN FE_OFN19321_a_4_6_4
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 290.55 805.945 290.65 ;
      END
   END FE_OFN19321_a_4_6_4

   PIN FE_OFN437_n_21145
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 492.35 805.945 492.45 ;
      END
   END FE_OFN437_n_21145

   PIN FE_OFN4661_n_142849
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 234.25 497.495 234.35 498.005 ;
      END
   END FE_OFN4661_n_142849

   PIN FE_OFN4678_n_112357
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 281.25 497.495 281.35 498.005 ;
      END
   END FE_OFN4678_n_112357

   PIN FE_OFN4703_n_143619
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 377.45 497.495 377.55 498.005 ;
      END
   END FE_OFN4703_n_143619

   PIN FE_OFN4840_n_140222
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 450.05 497.495 450.15 498.005 ;
      END
   END FE_OFN4840_n_140222

   PIN FE_OFN4981_delay_mul_ln34_unr5_unr5_stage2_stallmux_z_11_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 725.85 497.495 725.95 498.005 ;
      END
   END FE_OFN4981_delay_mul_ln34_unr5_unr5_stage2_stallmux_z_11_

   PIN FE_OFN4983_delay_mul_ln34_unr5_unr5_stage2_stallmux_z_10_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 738.05 497.495 738.15 498.005 ;
      END
   END FE_OFN4983_delay_mul_ln34_unr5_unr5_stage2_stallmux_z_10_

   PIN FE_OFN5000_delay_mul_ln34_unr5_unr7_stage2_stallmux_z_11_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 766.25 497.495 766.35 498.005 ;
      END
   END FE_OFN5000_delay_mul_ln34_unr5_unr7_stage2_stallmux_z_11_

   PIN FE_OFN636_n_11194
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 287.75 805.945 287.85 ;
      END
   END FE_OFN636_n_11194

   PIN FE_OFN638_n_8336
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 24.75 805.945 24.85 ;
      END
   END FE_OFN638_n_8336

   PIN FE_OFN651_n_7003
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 666.05 0 666.15 0.51 ;
      END
   END FE_OFN651_n_7003

   PIN FE_OFN741_n_22817
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 378.25 0 378.35 0.51 ;
      END
   END FE_OFN741_n_22817

   PIN FE_OFN8951_n_6635
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 470.85 497.495 470.95 498.005 ;
      END
   END FE_OFN8951_n_6635

   PIN FE_OFN9215_delay_add_ln34_unr2_unr8_stage2_stallmux_q_13_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 54.75 805.945 54.85 ;
      END
   END FE_OFN9215_delay_add_ln34_unr2_unr8_stage2_stallmux_q_13_

   PIN FE_OFN9217_delay_add_ln34_unr2_unr8_stage2_stallmux_q_12_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 237.55 805.945 237.65 ;
      END
   END FE_OFN9217_delay_add_ln34_unr2_unr8_stage2_stallmux_q_12_

   PIN FE_OFN9884_b_4_8_1
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 13.05 497.495 13.15 498.005 ;
      END
   END FE_OFN9884_b_4_8_1

   PIN FE_OFN9902_b_4_7_9
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 305.65 497.495 305.75 498.005 ;
      END
   END FE_OFN9902_b_4_7_9

   PIN delay_add_ln34_unr2_unr1_stage2_stallmux_q_10_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 24.95 805.945 25.05 ;
      END
   END delay_add_ln34_unr2_unr1_stage2_stallmux_q_10_

   PIN delay_add_ln34_unr2_unr1_stage2_stallmux_q_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 54.95 805.945 55.05 ;
      END
   END delay_add_ln34_unr2_unr1_stage2_stallmux_q_7_

   PIN delay_add_ln34_unr2_unr2_stage2_stallmux_q_1_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 455.95 805.945 456.05 ;
      END
   END delay_add_ln34_unr2_unr2_stage2_stallmux_q_1_

   PIN delay_add_ln34_unr2_unr2_stage2_stallmux_q_2_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 117.15 805.945 117.25 ;
      END
   END delay_add_ln34_unr2_unr2_stage2_stallmux_q_2_

   PIN delay_add_ln34_unr2_unr7_stage2_stallmux_q_12_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 55.15 805.945 55.25 ;
      END
   END delay_add_ln34_unr2_unr7_stage2_stallmux_q_12_

   PIN delay_add_ln34_unr2_unr7_stage2_stallmux_q_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 646.05 0 646.15 0.51 ;
      END
   END delay_add_ln34_unr2_unr7_stage2_stallmux_q_14_

   PIN delay_add_ln34_unr2_unr7_stage2_stallmux_q_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 366.05 0 366.15 0.51 ;
      END
   END delay_add_ln34_unr2_unr7_stage2_stallmux_q_7_

   PIN delay_add_ln34_unr2_unr7_stage2_stallmux_q_8_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 365.85 0 365.95 0.51 ;
      END
   END delay_add_ln34_unr2_unr7_stage2_stallmux_q_8_

   PIN delay_mul_ln34_unr3_unr7_stage2_stallmux_q_15_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.65 497.495 317.75 498.005 ;
      END
   END delay_mul_ln34_unr3_unr7_stage2_stallmux_q_15_

   PIN delay_mul_ln34_unr4_unr0_stage2_stallmux_q_2_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 520.65 497.495 520.75 498.005 ;
      END
   END delay_mul_ln34_unr4_unr0_stage2_stallmux_q_2_

   PIN delay_mul_ln34_unr4_unr7_stage2_stallmux_q_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 569.85 0 569.95 0.51 ;
      END
   END delay_mul_ln34_unr4_unr7_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr4_unr9_stage2_stallmux_q_0_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 336.35 805.945 336.45 ;
      END
   END delay_mul_ln34_unr4_unr9_stage2_stallmux_q_0_

   PIN delay_mul_ln34_unr5_unr0_stage2_stallmux_q_4_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 749.85 497.495 749.95 498.005 ;
      END
   END delay_mul_ln34_unr5_unr0_stage2_stallmux_q_4_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_q_13_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 726.05 497.495 726.15 498.005 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_q_13_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_q_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 690.05 497.495 690.15 498.005 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_q_14_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_q_2_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 738.25 497.495 738.35 498.005 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_q_2_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_q_4_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 570.25 497.495 570.35 498.005 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_q_4_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_q_9_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 485.85 497.495 485.95 498.005 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_q_9_

   PIN mul_4646_72_n_150
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 317.85 497.495 317.95 498.005 ;
      END
   END mul_4646_72_n_150

   PIN mul_4646_72_n_251
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 378.25 497.495 378.35 498.005 ;
      END
   END mul_4646_72_n_251

   PIN mul_4646_72_n_58
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 329.85 0 329.95 0.51 ;
      END
   END mul_4646_72_n_58

   PIN mul_4646_72_n_59
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 354.25 0 354.35 0.51 ;
      END
   END mul_4646_72_n_59

   PIN mul_4646_72_n_75
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 359.85 0 359.95 0.51 ;
      END
   END mul_4646_72_n_75

   PIN mul_4646_72_n_756
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 420.45 0 420.55 0.51 ;
      END
   END mul_4646_72_n_756

   PIN mul_4650_72_n_212
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 414.45 497.495 414.55 498.005 ;
      END
   END mul_4650_72_n_212

   PIN mul_4650_72_n_213
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 413.85 497.495 413.95 498.005 ;
      END
   END mul_4650_72_n_213

   PIN mul_4650_72_n_214
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 441.65 497.495 441.75 498.005 ;
      END
   END mul_4650_72_n_214

   PIN mul_4650_72_n_217
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 138.25 0 138.35 0.51 ;
      END
   END mul_4650_72_n_217

   PIN mul_4650_72_n_239
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 233.85 497.495 233.95 498.005 ;
      END
   END mul_4650_72_n_239

   PIN mul_4650_72_n_252
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 113.05 497.495 113.15 498.005 ;
      END
   END mul_4650_72_n_252

   PIN mul_4650_72_n_285
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 209.65 497.495 209.75 498.005 ;
      END
   END mul_4650_72_n_285

   PIN mul_4650_72_n_287
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 221.45 497.495 221.55 498.005 ;
      END
   END mul_4650_72_n_287

   PIN mul_4650_72_n_289
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 185.85 497.495 185.95 498.005 ;
      END
   END mul_4650_72_n_289

   PIN mul_4650_72_n_292
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 126.25 497.495 126.35 498.005 ;
      END
   END mul_4650_72_n_292

   PIN mul_4650_72_n_311
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 271.25 497.495 271.35 498.005 ;
      END
   END mul_4650_72_n_311

   PIN mul_4650_72_n_313
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 257.85 497.495 257.95 498.005 ;
      END
   END mul_4650_72_n_313

   PIN mul_4650_72_n_55
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 162.45 0 162.55 0.51 ;
      END
   END mul_4650_72_n_55

   PIN mul_4650_72_n_73
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 333.45 0 333.55 0.51 ;
      END
   END mul_4650_72_n_73

   PIN mul_4650_72_n_777
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 162.65 0 162.75 0.51 ;
      END
   END mul_4650_72_n_777

   PIN mul_4650_72_n_78
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 414.05 497.495 414.15 498.005 ;
      END
   END mul_4650_72_n_78

   PIN mul_4650_72_n_848
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 166.25 0 166.35 0.51 ;
      END
   END mul_4650_72_n_848

   PIN n_111907
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 414.25 497.495 414.35 498.005 ;
      END
   END n_111907

   PIN n_112284
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 113.85 497.495 113.95 498.005 ;
      END
   END n_112284

   PIN n_112720
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 413.85 497.495 413.95 498.005 ;
      END
   END n_112720

   PIN n_113639
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 159.85 497.495 159.95 498.005 ;
      END
   END n_113639

   PIN n_113790
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 258.05 497.495 258.15 498.005 ;
      END
   END n_113790

   PIN n_114086
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 378.05 497.495 378.15 498.005 ;
      END
   END n_114086

   PIN n_114387
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 294.25 0 294.35 0.51 ;
      END
   END n_114387

   PIN n_114392
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 159.65 497.495 159.75 498.005 ;
      END
   END n_114392

   PIN n_114607
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 296.45 0 296.55 0.51 ;
      END
   END n_114607

   PIN n_114644
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 376.25 497.495 376.35 498.005 ;
      END
   END n_114644

   PIN n_114654
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 198.05 497.495 198.15 498.005 ;
      END
   END n_114654

   PIN n_115067
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 246.05 0 246.15 0.51 ;
      END
   END n_115067

   PIN n_115075
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 174.25 0 174.35 0.51 ;
      END
   END n_115075

   PIN n_115173
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 174.05 0 174.15 0.51 ;
      END
   END n_115173

   PIN n_115193
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 332.45 497.495 332.55 498.005 ;
      END
   END n_115193

   PIN n_115538
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 371.05 497.495 371.15 498.005 ;
      END
   END n_115538

   PIN n_115592
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 198.25 497.495 198.35 498.005 ;
      END
   END n_115592

   PIN n_115601
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 293.25 497.495 293.35 498.005 ;
      END
   END n_115601

   PIN n_115610
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.85 497.495 317.95 498.005 ;
      END
   END n_115610

   PIN n_115697
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 330.25 497.495 330.35 498.005 ;
      END
   END n_115697

   PIN n_115863
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 96.05 497.495 96.15 498.005 ;
      END
   END n_115863

   PIN n_115878
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 182.85 497.495 182.95 498.005 ;
      END
   END n_115878

   PIN n_115897
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 107.85 497.495 107.95 498.005 ;
      END
   END n_115897

   PIN n_116017
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 329.85 497.495 329.95 498.005 ;
      END
   END n_116017

   PIN n_116364
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.05 497.495 317.15 498.005 ;
      END
   END n_116364

   PIN n_116388
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 198.25 497.495 198.35 498.005 ;
      END
   END n_116388

   PIN n_116530
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 318.05 497.495 318.15 498.005 ;
      END
   END n_116530

   PIN n_116580
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 294.05 497.495 294.15 498.005 ;
      END
   END n_116580

   PIN n_116853
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 341.85 497.495 341.95 498.005 ;
      END
   END n_116853

   PIN n_116869
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 294.65 497.495 294.75 498.005 ;
      END
   END n_116869

   PIN n_117308
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 138.05 0 138.15 0.51 ;
      END
   END n_117308

   PIN n_117932
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 146.45 497.495 146.55 498.005 ;
      END
   END n_117932

   PIN n_118446
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 368.45 497.495 368.55 498.005 ;
      END
   END n_118446

   PIN n_118851
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 157.25 497.495 157.35 498.005 ;
      END
   END n_118851

   PIN n_118961
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 302.45 497.495 302.55 498.005 ;
      END
   END n_118961

   PIN n_119042
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 324.65 497.495 324.75 498.005 ;
      END
   END n_119042

   PIN n_119323
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 306.65 497.495 306.75 498.005 ;
      END
   END n_119323

   PIN n_119415
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 336.05 497.495 336.15 498.005 ;
      END
   END n_119415

   PIN n_119457
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 210.05 497.495 210.15 498.005 ;
      END
   END n_119457

   PIN n_120207
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 354.25 497.495 354.35 498.005 ;
      END
   END n_120207

   PIN n_120352
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 246.25 0 246.35 0.51 ;
      END
   END n_120352

   PIN n_120375
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 376.65 497.495 376.75 498.005 ;
      END
   END n_120375

   PIN n_120599
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 342.05 0 342.15 0.51 ;
      END
   END n_120599

   PIN n_120600
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 318.25 0 318.35 0.51 ;
      END
   END n_120600

   PIN n_121035
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 368.05 497.495 368.15 498.005 ;
      END
   END n_121035

   PIN n_121273
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 138.25 0 138.35 0.51 ;
      END
   END n_121273

   PIN n_121548
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 54.25 497.495 54.35 498.005 ;
      END
   END n_121548

   PIN n_121555
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 306.45 497.495 306.55 498.005 ;
      END
   END n_121555

   PIN n_121639
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 389.85 497.495 389.95 498.005 ;
      END
   END n_121639

   PIN n_121887
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 199.45 0 199.55 0.51 ;
      END
   END n_121887

   PIN n_121951
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 270.25 0 270.35 0.51 ;
      END
   END n_121951

   PIN n_122050
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 270.45 0 270.55 0.51 ;
      END
   END n_122050

   PIN n_122090
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 174.05 497.495 174.15 498.005 ;
      END
   END n_122090

   PIN n_122254
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 186.05 0 186.15 0.51 ;
      END
   END n_122254

   PIN n_122427
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 276.75 805.945 276.85 ;
      END
   END n_122427

   PIN n_124381
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 312.35 805.945 312.45 ;
      END
   END n_124381

   PIN n_124384
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 267.55 805.945 267.65 ;
      END
   END n_124384

   PIN n_124473
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 149.85 0 149.95 0.51 ;
      END
   END n_124473

   PIN n_124480
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 75.65 497.495 75.75 498.005 ;
      END
   END n_124480

   PIN n_124768
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 433.45 497.495 433.55 498.005 ;
      END
   END n_124768

   PIN n_124884
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 403.25 497.495 403.35 498.005 ;
      END
   END n_124884

   PIN n_124890
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 377.85 497.495 377.95 498.005 ;
      END
   END n_124890

   PIN n_124892
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 306.05 0 306.15 0.51 ;
      END
   END n_124892

   PIN n_125201
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 288.75 805.945 288.85 ;
      END
   END n_125201

   PIN n_125438
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 354.05 0 354.15 0.51 ;
      END
   END n_125438

   PIN n_125484
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 280.45 0 280.55 0.51 ;
      END
   END n_125484

   PIN n_126152
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 287.95 805.945 288.05 ;
      END
   END n_126152

   PIN n_126230
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 276.55 805.945 276.65 ;
      END
   END n_126230

   PIN n_126465
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 389.45 0 389.55 0.51 ;
      END
   END n_126465

   PIN n_126950
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 102.25 497.495 102.35 498.005 ;
      END
   END n_126950

   PIN n_127100
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 203.45 0 203.55 0.51 ;
      END
   END n_127100

   PIN n_127101
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 203.25 0 203.35 0.51 ;
      END
   END n_127101

   PIN n_127102
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 197.85 0 197.95 0.51 ;
      END
   END n_127102

   PIN n_127132
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 394.65 497.495 394.75 498.005 ;
      END
   END n_127132

   PIN n_127133
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 394.45 497.495 394.55 498.005 ;
      END
   END n_127133

   PIN n_127136
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 306.25 0 306.35 0.51 ;
      END
   END n_127136

   PIN n_127563
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 402.25 0 402.35 0.51 ;
      END
   END n_127563

   PIN n_128225
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 174.05 0 174.15 0.51 ;
      END
   END n_128225

   PIN n_129278
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 150.05 0 150.15 0.51 ;
      END
   END n_129278

   PIN n_130041
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 150.65 0 150.75 0.51 ;
      END
   END n_130041

   PIN n_130821
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 70.85 0 70.95 0.51 ;
      END
   END n_130821

   PIN n_131531
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 186.25 0 186.35 0.51 ;
      END
   END n_131531

   PIN n_133774
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 162.25 0 162.35 0.51 ;
      END
   END n_133774

   PIN n_13498
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 504.85 497.495 504.95 498.005 ;
      END
   END n_13498

   PIN n_137441
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 435.85 0 435.95 0.51 ;
      END
   END n_137441

   PIN n_142793
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 414.05 497.495 414.15 498.005 ;
      END
   END n_142793

   PIN n_142961
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 323.75 805.945 323.85 ;
      END
   END n_142961

   PIN n_143003
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 198.65 497.495 198.75 498.005 ;
      END
   END n_143003

   PIN n_14932
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 608.45 497.495 608.55 498.005 ;
      END
   END n_14932

   PIN n_14933
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 590.45 497.495 590.55 498.005 ;
      END
   END n_14933

   PIN n_14966
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 594.65 497.495 594.75 498.005 ;
      END
   END n_14966

   PIN n_16625
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 267.75 805.945 267.85 ;
      END
   END n_16625

   PIN n_16626
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 268.35 805.945 268.45 ;
      END
   END n_16626

   PIN n_17619
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 348.15 805.945 348.25 ;
      END
   END n_17619

   PIN n_19300
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 474.25 497.495 474.35 498.005 ;
      END
   END n_19300

   PIN n_19852
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 613.25 497.495 613.35 498.005 ;
      END
   END n_19852

   PIN n_19853
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 582.05 497.495 582.15 498.005 ;
      END
   END n_19853

   PIN n_20189
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 716.45 0 716.55 0.51 ;
      END
   END n_20189

   PIN n_20626
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 521.85 497.495 521.95 498.005 ;
      END
   END n_20626

   PIN n_21390
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 266.75 805.945 266.85 ;
      END
   END n_21390

   PIN n_21391
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 267.95 805.945 268.05 ;
      END
   END n_21391

   PIN n_21448
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 513.45 497.495 513.55 498.005 ;
      END
   END n_21448

   PIN n_21461
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 546.05 0 546.15 0.51 ;
      END
   END n_21461

   PIN n_21505
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 641.85 497.495 641.95 498.005 ;
      END
   END n_21505

   PIN n_21517
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 432.15 805.945 432.25 ;
      END
   END n_21517

   PIN n_21590
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 559.65 497.495 559.75 498.005 ;
      END
   END n_21590

   PIN n_21591
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 522.05 497.495 522.15 498.005 ;
      END
   END n_21591

   PIN n_21678
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 495.45 497.495 495.55 498.005 ;
      END
   END n_21678

   PIN n_21692
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 491.95 805.945 492.05 ;
      END
   END n_21692

   PIN n_21696
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 617.85 497.495 617.95 498.005 ;
      END
   END n_21696

   PIN n_21711
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 237.75 805.945 237.85 ;
      END
   END n_21711

   PIN n_21955
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 342.45 0 342.55 0.51 ;
      END
   END n_21955

   PIN n_21973
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 654.25 497.495 654.35 498.005 ;
      END
   END n_21973

   PIN n_21974
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 665.85 497.495 665.95 498.005 ;
      END
   END n_21974

   PIN n_21990
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 722.45 0 722.55 0.51 ;
      END
   END n_21990

   PIN n_22100
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 342.25 0 342.35 0.51 ;
      END
   END n_22100

   PIN n_22130
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 641.65 497.495 641.75 498.005 ;
      END
   END n_22130

   PIN n_22131
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 642.05 497.495 642.15 498.005 ;
      END
   END n_22131

   PIN n_22132
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 612.05 497.495 612.15 498.005 ;
      END
   END n_22132

   PIN n_22135
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 654.25 497.495 654.35 498.005 ;
      END
   END n_22135

   PIN n_22222
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 761.85 497.495 761.95 498.005 ;
      END
   END n_22222

   PIN n_22223
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 498.05 497.495 498.15 498.005 ;
      END
   END n_22223

   PIN n_22241
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 215.95 805.945 216.05 ;
      END
   END n_22241

   PIN n_22502
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 366.25 0 366.35 0.51 ;
      END
   END n_22502

   PIN n_22542
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 143.75 805.945 143.85 ;
      END
   END n_22542

   PIN n_23096
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 432.35 805.945 432.45 ;
      END
   END n_23096

   PIN n_23324
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 372.15 805.945 372.25 ;
      END
   END n_23324

   PIN n_23325
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 55.35 805.945 55.45 ;
      END
   END n_23325

   PIN n_23968
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 642.25 497.495 642.35 498.005 ;
      END
   END n_23968

   PIN n_23969
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 623.45 497.495 623.55 498.005 ;
      END
   END n_23969

   PIN n_23973
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 630.25 497.495 630.35 498.005 ;
      END
   END n_23973

   PIN n_24209
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 486.05 497.495 486.15 498.005 ;
      END
   END n_24209

   PIN n_24210
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 473.85 497.495 473.95 498.005 ;
      END
   END n_24210

   PIN n_24293
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 372.35 805.945 372.45 ;
      END
   END n_24293

   PIN n_24393
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 492.55 805.945 492.65 ;
      END
   END n_24393

   PIN n_24834
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 484.65 497.495 484.75 498.005 ;
      END
   END n_24834

   PIN n_24836
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 483.25 497.495 483.35 498.005 ;
      END
   END n_24836

   PIN n_24845
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 456.45 497.495 456.55 498.005 ;
      END
   END n_24845

   PIN n_24847
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 456.05 497.495 456.15 498.005 ;
      END
   END n_24847

   PIN n_24890
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 653.85 497.495 653.95 498.005 ;
      END
   END n_24890

   PIN n_24892
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 654.05 497.495 654.15 498.005 ;
      END
   END n_24892

   PIN n_24997
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 443.55 805.945 443.65 ;
      END
   END n_24997

   PIN n_25050
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 420.15 805.945 420.25 ;
      END
   END n_25050

   PIN n_25074
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 486.25 497.495 486.35 498.005 ;
      END
   END n_25074

   PIN n_25101
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 654.45 497.495 654.55 498.005 ;
      END
   END n_25101

   PIN n_25132
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 359.55 805.945 359.65 ;
      END
   END n_25132

   PIN n_25257
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 466.45 497.495 466.55 498.005 ;
      END
   END n_25257

   PIN n_25529
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 474.05 497.495 474.15 498.005 ;
      END
   END n_25529

   PIN n_25531
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 474.05 497.495 474.15 498.005 ;
      END
   END n_25531

   PIN n_25624
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 348.35 805.945 348.45 ;
      END
   END n_25624

   PIN n_26550
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 618.25 497.495 618.35 498.005 ;
      END
   END n_26550

   PIN n_26818
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 618.05 497.495 618.15 498.005 ;
      END
   END n_26818

   PIN n_27649
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 722.05 497.495 722.15 498.005 ;
      END
   END n_27649

   PIN n_27650
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 726.25 497.495 726.35 498.005 ;
      END
   END n_27650

   PIN n_27752
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 678.25 497.495 678.35 498.005 ;
      END
   END n_27752

   PIN n_2800
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 150.25 0 150.35 0.51 ;
      END
   END n_2800

   PIN n_28028
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 702.05 497.495 702.15 498.005 ;
      END
   END n_28028

   PIN n_28030
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 714.25 497.495 714.35 498.005 ;
      END
   END n_28030

   PIN n_28637
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 690.25 497.495 690.35 498.005 ;
      END
   END n_28637

   PIN n_28704
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 546.25 0 546.35 0.51 ;
      END
   END n_28704

   PIN n_28825
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 786.65 497.495 786.75 498.005 ;
      END
   END n_28825

   PIN n_29574
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 456.15 805.945 456.25 ;
      END
   END n_29574

   PIN n_29646
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 449.55 805.945 449.65 ;
      END
   END n_29646

   PIN n_32056
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 244.65 497.495 244.75 498.005 ;
      END
   END n_32056

   PIN n_32073
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 275.25 497.495 275.35 498.005 ;
      END
   END n_32073

   PIN n_32468
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 354.25 497.495 354.35 498.005 ;
      END
   END n_32468

   PIN n_32697
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 533.85 497.495 533.95 498.005 ;
      END
   END n_32697

   PIN n_32704
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 126.45 497.495 126.55 498.005 ;
      END
   END n_32704

   PIN n_32867
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 534.05 497.495 534.15 498.005 ;
      END
   END n_32867

   PIN n_33365
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 534.25 497.495 534.35 498.005 ;
      END
   END n_33365

   PIN n_33776
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 407.05 497.495 407.15 498.005 ;
      END
   END n_33776

   PIN n_34364
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 198.45 497.495 198.55 498.005 ;
      END
   END n_34364

   PIN n_34374
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 173.85 497.495 173.95 498.005 ;
      END
   END n_34374

   PIN n_34614
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 326.25 497.495 326.35 498.005 ;
      END
   END n_34614

   PIN n_34686
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 406.25 497.495 406.35 498.005 ;
      END
   END n_34686

   PIN n_35435
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 138.25 497.495 138.35 498.005 ;
      END
   END n_35435

   PIN n_35467
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 334.25 497.495 334.35 498.005 ;
      END
   END n_35467

   PIN n_36948
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 226.45 497.495 226.55 498.005 ;
      END
   END n_36948

   PIN n_37020
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 210.45 497.495 210.55 498.005 ;
      END
   END n_37020

   PIN n_37253
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 234.05 497.495 234.15 498.005 ;
      END
   END n_37253

   PIN n_37497
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 79.85 497.495 79.95 498.005 ;
      END
   END n_37497

   PIN n_37498
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 62.25 497.495 62.35 498.005 ;
      END
   END n_37498

   PIN n_37637
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 344.85 497.495 344.95 498.005 ;
      END
   END n_37637

   PIN n_38077
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 353.45 0 353.55 0.51 ;
      END
   END n_38077

   PIN n_39307
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 318.05 0 318.15 0.51 ;
      END
   END n_39307

   PIN n_39821
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 419.95 805.945 420.05 ;
      END
   END n_39821

   PIN n_39967
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 146.95 805.945 147.05 ;
      END
   END n_39967

   PIN n_40268
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 251.95 805.945 252.05 ;
      END
   END n_40268

   PIN n_40473
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 237.95 805.945 238.05 ;
      END
   END n_40473

   PIN n_40638
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 252.15 805.945 252.25 ;
      END
   END n_40638

   PIN n_40714
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 275.75 805.945 275.85 ;
      END
   END n_40714

   PIN n_41448
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 449.65 497.495 449.75 498.005 ;
      END
   END n_41448

   PIN n_44877
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 234.25 497.495 234.35 498.005 ;
      END
   END n_44877

   PIN n_47745
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 285.05 497.495 285.15 498.005 ;
      END
   END n_47745

   PIN n_47887
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 258.05 497.495 258.15 498.005 ;
      END
   END n_47887

   PIN n_48179
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 231.45 497.495 231.55 498.005 ;
      END
   END n_48179

   PIN n_54122
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 221.65 497.495 221.75 498.005 ;
      END
   END n_54122

   PIN n_54294
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 210.25 497.495 210.35 498.005 ;
      END
   END n_54294

   PIN n_5456
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 334.25 0 334.35 0.51 ;
      END
   END n_5456

   PIN n_5457
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 335.65 0 335.75 0.51 ;
      END
   END n_5457

   PIN n_57601
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 226.85 497.495 226.95 498.005 ;
      END
   END n_57601

   PIN n_59902
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 171.65 497.495 171.75 498.005 ;
      END
   END n_59902

   PIN n_60533
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 226.25 497.495 226.35 498.005 ;
      END
   END n_60533

   PIN n_62170
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 233.25 497.495 233.35 498.005 ;
      END
   END n_62170

   PIN n_6519
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 756.65 497.495 756.75 498.005 ;
      END
   END n_6519

   PIN n_65559
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 686.05 497.495 686.15 498.005 ;
      END
   END n_65559

   PIN n_7333
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 558.25 0 558.35 0.51 ;
      END
   END n_7333

   PIN n_8253
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 168.15 805.945 168.25 ;
      END
   END n_8253

   PIN n_9777
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 610.65 497.495 610.75 498.005 ;
      END
   END n_9777

   PIN FE_OCPN15632_n_40178
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 228.15 805.945 228.25 ;
      END
   END FE_OCPN15632_n_40178

   PIN FE_OFN10061_b_4_3_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 232.65 497.495 232.75 498.005 ;
      END
   END FE_OFN10061_b_4_3_6

   PIN FE_OFN10064_b_4_3_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 346.65 497.495 346.75 498.005 ;
      END
   END FE_OFN10064_b_4_3_5

   PIN FE_OFN10067_b_4_3_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 276.05 497.495 276.15 498.005 ;
      END
   END FE_OFN10067_b_4_3_4

   PIN FE_OFN10070_b_4_3_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 312.05 497.495 312.15 498.005 ;
      END
   END FE_OFN10070_b_4_3_3

   PIN FE_OFN10072_b_4_3_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 348.45 497.495 348.55 498.005 ;
      END
   END FE_OFN10072_b_4_3_2

   PIN FE_OFN10076_b_4_3_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 297.05 497.495 297.15 498.005 ;
      END
   END FE_OFN10076_b_4_3_1

   PIN FE_OFN10077_b_4_3_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 306.05 497.495 306.15 498.005 ;
      END
   END FE_OFN10077_b_4_3_0

   PIN FE_OFN10078_b_4_3_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 368.25 497.495 368.35 498.005 ;
      END
   END FE_OFN10078_b_4_3_0

   PIN FE_OFN10180_b_4_0_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 208.2 497.75 208.4 498.005 ;
      END
   END FE_OFN10180_b_4_0_3

   PIN FE_OFN10188_b_4_0_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 294.05 497.495 294.15 498.005 ;
      END
   END FE_OFN10188_b_4_0_0

   PIN FE_OFN10818_a_3_6_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 774.05 497.495 774.15 498.005 ;
      END
   END FE_OFN10818_a_3_6_7

   PIN FE_OFN10857_a_2_8_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 786.25 497.495 786.35 498.005 ;
      END
   END FE_OFN10857_a_2_8_1

   PIN FE_OFN10871_a_2_6_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 765.85 497.495 765.95 498.005 ;
      END
   END FE_OFN10871_a_2_6_7

   PIN FE_OFN10986_a_0_6_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 752.45 497.495 752.55 498.005 ;
      END
   END FE_OFN10986_a_0_6_1

   PIN FE_OFN11519_n_40714
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 297.15 805.945 297.25 ;
      END
   END FE_OFN11519_n_40714

   PIN FE_OFN11549_n_142793
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 365.85 497.495 365.95 498.005 ;
      END
   END FE_OFN11549_n_142793

   PIN FE_OFN1154_n_10378
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 474.05 0 474.15 0.51 ;
      END
   END FE_OFN1154_n_10378

   PIN FE_OFN11610_n_39244
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 428.45 497.495 428.55 498.005 ;
      END
   END FE_OFN11610_n_39244

   PIN FE_OFN11880_n_143202
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 346.45 497.495 346.55 498.005 ;
      END
   END FE_OFN11880_n_143202

   PIN FE_OFN11883_n_143200
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 234.05 497.495 234.15 498.005 ;
      END
   END FE_OFN11883_n_143200

   PIN FE_OFN12031_n_143507
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 262.25 497.495 262.35 498.005 ;
      END
   END FE_OFN12031_n_143507

   PIN FE_OFN12057_n_140222
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 258.45 497.495 258.55 498.005 ;
      END
   END FE_OFN12057_n_140222

   PIN FE_OFN12086_n_143619
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 293.85 497.495 293.95 498.005 ;
      END
   END FE_OFN12086_n_143619

   PIN FE_OFN12427_n_143003
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 246.45 497.495 246.55 498.005 ;
      END
   END FE_OFN12427_n_143003

   PIN FE_OFN12759_n_142961
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 344.65 497.495 344.75 498.005 ;
      END
   END FE_OFN12759_n_142961

   PIN FE_OFN13003_n_39130
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 343.45 497.495 343.55 498.005 ;
      END
   END FE_OFN13003_n_39130

   PIN FE_OFN13192_n_37615
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 257.85 497.495 257.95 498.005 ;
      END
   END FE_OFN13192_n_37615

   PIN FE_OFN13223_n_143620
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 286.25 497.495 286.35 498.005 ;
      END
   END FE_OFN13223_n_143620

   PIN FE_OFN13288_n_143034
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 282.65 497.495 282.75 498.005 ;
      END
   END FE_OFN13288_n_143034

   PIN FE_OFN13294_n_143033
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 376.05 497.495 376.15 498.005 ;
      END
   END FE_OFN13294_n_143033

   PIN FE_OFN13296_n_143032
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 287.65 497.495 287.75 498.005 ;
      END
   END FE_OFN13296_n_143032

   PIN FE_OFN13353_n_142795
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 355.85 497.495 355.95 498.005 ;
      END
   END FE_OFN13353_n_142795

   PIN FE_OFN13512_n_112357
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 281.85 497.495 281.95 498.005 ;
      END
   END FE_OFN13512_n_112357

   PIN FE_OFN13586_n_143006
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 233.65 497.495 233.75 498.005 ;
      END
   END FE_OFN13586_n_143006

   PIN FE_OFN14074_n_142964
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 337.45 497.495 337.55 498.005 ;
      END
   END FE_OFN14074_n_142964

   PIN FE_OFN14079_n_142963
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 275.85 497.495 275.95 498.005 ;
      END
   END FE_OFN14079_n_142963

   PIN FE_OFN14083_n_142962
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 188.65 497.495 188.75 498.005 ;
      END
   END FE_OFN14083_n_142962

   PIN FE_OFN14327_n_140207
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 329.8 497.75 330 498.005 ;
      END
   END FE_OFN14327_n_140207

   PIN FE_OFN14360_n_143300
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 161.65 497.495 161.75 498.005 ;
      END
   END FE_OFN14360_n_143300

   PIN FE_OFN14403_n_142794
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 275.4 497.75 275.6 498.005 ;
      END
   END FE_OFN14403_n_142794

   PIN FE_OFN14479_n_112183
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 402.05 497.495 402.15 498.005 ;
      END
   END FE_OFN14479_n_112183

   PIN FE_OFN14487_n_143005
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 321.25 497.495 321.35 498.005 ;
      END
   END FE_OFN14487_n_143005

   PIN FE_OFN14698_a_9_6_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 771.85 497.495 771.95 498.005 ;
      END
   END FE_OFN14698_a_9_6_7

   PIN FE_OFN14912_n_142849
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 281.45 497.495 281.55 498.005 ;
      END
   END FE_OFN14912_n_142849

   PIN FE_OFN14984_n_112030
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 318.25 497.495 318.35 498.005 ;
      END
   END FE_OFN14984_n_112030

   PIN FE_OFN15130_n_20599
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 772.25 0 772.35 0.51 ;
      END
   END FE_OFN15130_n_20599

   PIN FE_OFN15291_n_111917
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 281.65 497.495 281.75 498.005 ;
      END
   END FE_OFN15291_n_111917

   PIN FE_OFN15295_n_111917
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 401.85 497.495 401.95 498.005 ;
      END
   END FE_OFN15295_n_111917

   PIN FE_OFN15366_delay_mul_ln34_unr5_unr5_stage2_stallmux_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 468.35 805.945 468.45 ;
      END
   END FE_OFN15366_delay_mul_ln34_unr5_unr5_stage2_stallmux_z_13_

   PIN FE_OFN15383_n_22225
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 751.65 0 751.75 0.51 ;
      END
   END FE_OFN15383_n_22225

   PIN FE_OFN15982_n_36821
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 248.45 497.495 248.55 498.005 ;
      END
   END FE_OFN15982_n_36821

   PIN FE_OFN16234_n_40172
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 227.95 805.945 228.05 ;
      END
   END FE_OFN16234_n_40172

   PIN FE_OFN16237_n_40170
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 228.15 805.945 228.25 ;
      END
   END FE_OFN16237_n_40170

   PIN FE_OFN16239_n_40166
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 227.95 805.945 228.05 ;
      END
   END FE_OFN16239_n_40166

   PIN FE_OFN16241_n_40166
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 741.85 0 741.95 0.51 ;
      END
   END FE_OFN16241_n_40166

   PIN FE_OFN16256_n_40159
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 236.75 805.945 236.85 ;
      END
   END FE_OFN16256_n_40159

   PIN FE_OFN16649_n_7003
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 714.25 0 714.35 0.51 ;
      END
   END FE_OFN16649_n_7003

   PIN FE_OFN17473_n_142961
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 396.35 805.945 396.45 ;
      END
   END FE_OFN17473_n_142961

   PIN FE_OFN17490_n_142849
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 334.05 497.495 334.15 498.005 ;
      END
   END FE_OFN17490_n_142849

   PIN FE_OFN17556_delay_mul_ln34_unr5_unr7_stage2_stallmux_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 378.05 497.495 378.15 498.005 ;
      END
   END FE_OFN17556_delay_mul_ln34_unr5_unr7_stage2_stallmux_z_13_

   PIN FE_OFN18570_b_4_7_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 432.35 0.51 432.45 ;
      END
   END FE_OFN18570_b_4_7_9

   PIN FE_OFN4555_n_142963
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 214.05 497.495 214.15 498.005 ;
      END
   END FE_OFN4555_n_142963

   PIN FE_OFN4568_n_41387
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 473.65 497.495 473.75 498.005 ;
      END
   END FE_OFN4568_n_41387

   PIN FE_OFN4613_n_142796
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 246.25 497.495 246.35 498.005 ;
      END
   END FE_OFN4613_n_142796

   PIN FE_OFN4646_n_142850
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 207.8 497.75 208 498.005 ;
      END
   END FE_OFN4646_n_142850

   PIN FE_OFN4665_n_137232
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 271.85 497.495 271.95 498.005 ;
      END
   END FE_OFN4665_n_137232

   PIN FE_OFN4702_n_143619
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 238.25 497.495 238.35 498.005 ;
      END
   END FE_OFN4702_n_143619

   PIN FE_OFN4762_n_137230
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 250.85 497.495 250.95 498.005 ;
      END
   END FE_OFN4762_n_137230

   PIN FE_OFN4773_n_143004
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 258.25 497.495 258.35 498.005 ;
      END
   END FE_OFN4773_n_143004

   PIN FE_OFN4784_n_143003
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 42.45 497.495 42.55 498.005 ;
      END
   END FE_OFN4784_n_143003

   PIN FE_OFN4791_n_41686
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 369.85 497.495 369.95 498.005 ;
      END
   END FE_OFN4791_n_41686

   PIN FE_OFN4796_n_143145
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 234.85 497.495 234.95 498.005 ;
      END
   END FE_OFN4796_n_143145

   PIN FE_OFN4798_n_143146
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 293.85 497.495 293.95 498.005 ;
      END
   END FE_OFN4798_n_143146

   PIN FE_OFN4806_n_143143
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 386.65 497.495 386.75 498.005 ;
      END
   END FE_OFN4806_n_143143

   PIN FE_OFN4826_n_143199
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 198.05 497.495 198.15 498.005 ;
      END
   END FE_OFN4826_n_143199

   PIN FE_OFN4885_n_36821
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 245.25 497.495 245.35 498.005 ;
      END
   END FE_OFN4885_n_36821

   PIN FE_OFN4999_delay_mul_ln34_unr5_unr7_stage2_stallmux_z_11_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 491.95 805.945 492.05 ;
      END
   END FE_OFN4999_delay_mul_ln34_unr5_unr7_stage2_stallmux_z_11_

   PIN FE_OFN635_n_11194
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 84.75 805.945 84.85 ;
      END
   END FE_OFN635_n_11194

   PIN FE_OFN637_n_8336
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 766.65 0 766.75 0.51 ;
      END
   END FE_OFN637_n_8336

   PIN FE_OFN654_n_8338
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 762.85 0 762.95 0.51 ;
      END
   END FE_OFN654_n_8338

   PIN FE_OFN747_n_22238
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 522.25 0 522.35 0.51 ;
      END
   END FE_OFN747_n_22238

   PIN FE_OFN7582_n_40036
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 683.45 0 683.55 0.51 ;
      END
   END FE_OFN7582_n_40036

   PIN FE_OFN758_n_21703
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 623.05 0 623.15 0.51 ;
      END
   END FE_OFN758_n_21703

   PIN FE_OFN7819_n_40176
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 116.95 805.945 117.05 ;
      END
   END FE_OFN7819_n_40176

   PIN FE_OFN9214_delay_add_ln34_unr2_unr8_stage2_stallmux_q_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 210.05 0 210.15 0.51 ;
      END
   END FE_OFN9214_delay_add_ln34_unr2_unr8_stage2_stallmux_q_13_

   PIN FE_OFN9216_delay_add_ln34_unr2_unr8_stage2_stallmux_q_12_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 702.05 0 702.15 0.51 ;
      END
   END FE_OFN9216_delay_add_ln34_unr2_unr8_stage2_stallmux_q_12_

   PIN FE_OFN9895_b_4_7_12
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 233.45 497.495 233.55 498.005 ;
      END
   END FE_OFN9895_b_4_7_12

   PIN FE_OFN9897_b_4_7_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 226.45 497.495 226.55 498.005 ;
      END
   END FE_OFN9897_b_4_7_11

   PIN FE_OFN9899_b_4_7_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 282.45 497.495 282.55 498.005 ;
      END
   END FE_OFN9899_b_4_7_10

   PIN FE_OFN9905_b_4_7_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 220.65 497.495 220.75 498.005 ;
      END
   END FE_OFN9905_b_4_7_8

   PIN FE_OFN9908_b_4_7_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 234.45 497.495 234.55 498.005 ;
      END
   END FE_OFN9908_b_4_7_7

   PIN FE_OFN9910_b_4_7_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 234.65 497.495 234.75 498.005 ;
      END
   END FE_OFN9910_b_4_7_6

   PIN FE_OFN9911_b_4_7_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 234.45 497.495 234.55 498.005 ;
      END
   END FE_OFN9911_b_4_7_6

   PIN FE_OFN9913_b_4_7_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 258.45 497.495 258.55 498.005 ;
      END
   END FE_OFN9913_b_4_7_5

   PIN FE_OFN9914_b_4_7_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 269.25 497.495 269.35 498.005 ;
      END
   END FE_OFN9914_b_4_7_5

   PIN FE_OFN9916_b_4_7_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 245.45 497.495 245.55 498.005 ;
      END
   END FE_OFN9916_b_4_7_4

   PIN FE_OFN9917_b_4_7_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 298.25 497.495 298.35 498.005 ;
      END
   END FE_OFN9917_b_4_7_4

   PIN FE_OFN9919_b_4_7_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 258.65 497.495 258.75 498.005 ;
      END
   END FE_OFN9919_b_4_7_3

   PIN FE_OFN9920_b_4_7_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 271.05 497.495 271.15 498.005 ;
      END
   END FE_OFN9920_b_4_7_3

   PIN FE_OFN9922_b_4_7_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 273.85 497.495 273.95 498.005 ;
      END
   END FE_OFN9922_b_4_7_2

   PIN FE_OFN9923_b_4_7_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 318.25 497.495 318.35 498.005 ;
      END
   END FE_OFN9923_b_4_7_2

   PIN FE_OFN9925_b_4_7_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 159.45 497.495 159.55 498.005 ;
      END
   END FE_OFN9925_b_4_7_1

   PIN FE_OFN9928_b_4_7_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 240.05 497.495 240.15 498.005 ;
      END
   END FE_OFN9928_b_4_7_0

   PIN a_0_4_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 266.95 805.945 267.05 ;
      END
   END a_0_4_0

   PIN a_0_4_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 774.45 497.495 774.55 498.005 ;
      END
   END a_0_4_7

   PIN a_0_6_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 798.45 497.495 798.55 498.005 ;
      END
   END a_0_6_4

   PIN a_1_4_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 774.25 497.495 774.35 498.005 ;
      END
   END a_1_4_0

   PIN a_1_4_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 266.75 805.945 266.85 ;
      END
   END a_1_4_1

   PIN a_1_4_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 450.25 0 450.35 0.51 ;
      END
   END a_1_4_6

   PIN a_1_6_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 786.45 497.495 786.55 498.005 ;
      END
   END a_1_6_1

   PIN a_1_6_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 419.35 805.945 419.45 ;
      END
   END a_1_6_4

   PIN a_2_4_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 357.35 805.945 357.45 ;
      END
   END a_2_4_0

   PIN a_2_4_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 798.65 497.495 798.75 498.005 ;
      END
   END a_2_4_1

   PIN a_2_4_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 237.15 805.945 237.25 ;
      END
   END a_2_4_5

   PIN a_2_4_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 786.65 497.495 786.75 498.005 ;
      END
   END a_2_4_7

   PIN a_2_6_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 108.15 0.51 108.25 ;
      END
   END a_2_6_1

   PIN a_2_6_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 419.15 805.945 419.25 ;
      END
   END a_2_6_4

   PIN a_2_8_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 418.95 805.945 419.05 ;
      END
   END a_2_8_4

   PIN a_3_4_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 357.15 805.945 357.25 ;
      END
   END a_3_4_0

   PIN a_3_4_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 798.25 497.495 798.35 498.005 ;
      END
   END a_3_4_5

   PIN a_3_4_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 716.05 497.495 716.15 498.005 ;
      END
   END a_3_4_6

   PIN a_3_6_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 237.15 805.945 237.25 ;
      END
   END a_3_6_1

   PIN a_3_6_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 798.45 497.495 798.55 498.005 ;
      END
   END a_3_6_4

   PIN a_3_8_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 418.75 805.945 418.85 ;
      END
   END a_3_8_7

   PIN a_4_0_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 297.35 805.945 297.45 ;
      END
   END a_4_0_5

   PIN a_4_2_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 768.45 0 768.55 0.51 ;
      END
   END a_4_2_1

   PIN a_4_4_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 786.45 497.495 786.55 498.005 ;
      END
   END a_4_4_4

   PIN a_4_6_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 798.25 497.495 798.35 498.005 ;
      END
   END a_4_6_4

   PIN a_5_6_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 702.85 0 702.95 0.51 ;
      END
   END a_5_6_1

   PIN a_5_6_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 448.95 805.945 449.05 ;
      END
   END a_5_6_4

   PIN a_6_4_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 146.75 805.945 146.85 ;
      END
   END a_6_4_1

   PIN a_6_6_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 774.25 497.495 774.35 498.005 ;
      END
   END a_6_6_1

   PIN a_7_4_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 147.15 805.945 147.25 ;
      END
   END a_7_4_1

   PIN a_7_4_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 740.85 497.495 740.95 498.005 ;
      END
   END a_7_4_5

   PIN a_7_6_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 356.95 805.945 357.05 ;
      END
   END a_7_6_4

   PIN a_8_8_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 448.75 805.945 448.85 ;
      END
   END a_8_8_4

   PIN a_9_4_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 774.05 497.495 774.15 498.005 ;
      END
   END a_9_4_0

   PIN b_4_8_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 432.15 0.51 432.25 ;
      END
   END b_4_8_1

   PIN delay_add_ln34_unr2_unr7_stage2_stallmux_q_0_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 672.05 0 672.15 0.51 ;
      END
   END delay_add_ln34_unr2_unr7_stage2_stallmux_q_0_

   PIN delay_add_ln34_unr2_unr7_stage2_stallmux_q_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 630.25 0 630.35 0.51 ;
      END
   END delay_add_ln34_unr2_unr7_stage2_stallmux_q_5_

   PIN delay_add_ln34_unr2_unr7_stage2_stallmux_q_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 605.05 0 605.15 0.51 ;
      END
   END delay_add_ln34_unr2_unr7_stage2_stallmux_q_6_

   PIN delay_add_ln34_unr2_unr8_stage2_stallmux_q_0_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 176.75 805.945 176.85 ;
      END
   END delay_add_ln34_unr2_unr8_stage2_stallmux_q_0_

   PIN delay_mul_ln34_unr3_unr0_stage2_stallmux_q_0_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 287.55 805.945 287.65 ;
      END
   END delay_mul_ln34_unr3_unr0_stage2_stallmux_q_0_

   PIN delay_mul_ln34_unr3_unr5_stage2_stallmux_q_15_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 480.75 805.945 480.85 ;
      END
   END delay_mul_ln34_unr3_unr5_stage2_stallmux_q_15_

   PIN delay_mul_ln34_unr3_unr7_stage2_stallmux_q_0_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 311.95 805.945 312.05 ;
      END
   END delay_mul_ln34_unr3_unr7_stage2_stallmux_q_0_

   PIN delay_mul_ln34_unr3_unr7_stage2_stallmux_q_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 621.85 0 621.95 0.51 ;
      END
   END delay_mul_ln34_unr3_unr7_stage2_stallmux_q_5_

   PIN delay_mul_ln34_unr3_unr7_stage2_stallmux_q_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 251.75 805.945 251.85 ;
      END
   END delay_mul_ln34_unr3_unr7_stage2_stallmux_q_6_

   PIN delay_mul_ln34_unr3_unr8_stage2_stallmux_q_0_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 275.55 805.945 275.65 ;
      END
   END delay_mul_ln34_unr3_unr8_stage2_stallmux_q_0_

   PIN delay_mul_ln34_unr4_unr0_stage2_stallmux_q_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 630.25 497.495 630.35 498.005 ;
      END
   END delay_mul_ln34_unr4_unr0_stage2_stallmux_q_4_

   PIN delay_mul_ln34_unr4_unr0_stage2_stallmux_q_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 282.25 497.495 282.35 498.005 ;
      END
   END delay_mul_ln34_unr4_unr0_stage2_stallmux_q_5_

   PIN delay_mul_ln34_unr4_unr0_stage2_stallmux_q_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 282.05 497.495 282.15 498.005 ;
      END
   END delay_mul_ln34_unr4_unr0_stage2_stallmux_q_6_

   PIN delay_mul_ln34_unr4_unr0_stage2_stallmux_z_7_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 269.85 497.495 269.95 498.005 ;
      END
   END delay_mul_ln34_unr4_unr0_stage2_stallmux_z_7_

   PIN delay_mul_ln34_unr4_unr5_stage2_stallmux_q_15_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 757.25 497.495 757.35 498.005 ;
      END
   END delay_mul_ln34_unr4_unr5_stage2_stallmux_q_15_

   PIN delay_mul_ln34_unr4_unr5_stage2_stallmux_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 700.65 497.495 700.75 498.005 ;
      END
   END delay_mul_ln34_unr4_unr5_stage2_stallmux_z_14_

   PIN delay_mul_ln34_unr5_unr0_stage2_stallmux_q_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 612.65 497.495 612.75 498.005 ;
      END
   END delay_mul_ln34_unr5_unr0_stage2_stallmux_q_2_

   PIN delay_mul_ln34_unr5_unr0_stage2_stallmux_q_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 356.75 805.945 356.85 ;
      END
   END delay_mul_ln34_unr5_unr0_stage2_stallmux_q_6_

   PIN delay_mul_ln34_unr5_unr0_stage2_stallmux_q_7_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 449.75 805.945 449.85 ;
      END
   END delay_mul_ln34_unr5_unr0_stage2_stallmux_q_7_

   PIN delay_mul_ln34_unr5_unr0_stage2_stallmux_z_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 750.85 497.495 750.95 498.005 ;
      END
   END delay_mul_ln34_unr5_unr0_stage2_stallmux_z_4_

   PIN delay_mul_ln34_unr5_unr0_stage2_stallmux_z_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 388.75 805.945 388.85 ;
      END
   END delay_mul_ln34_unr5_unr0_stage2_stallmux_z_5_

   PIN delay_mul_ln34_unr5_unr3_stage2_stallmux_q_0_
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 594.25 497.495 594.35 498.005 ;
      END
   END delay_mul_ln34_unr5_unr3_stage2_stallmux_q_0_

   PIN delay_mul_ln34_unr5_unr3_stage2_stallmux_q_1_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 431.95 805.945 432.05 ;
      END
   END delay_mul_ln34_unr5_unr3_stage2_stallmux_q_1_

   PIN delay_mul_ln34_unr5_unr3_stage2_stallmux_q_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 408.35 805.945 408.45 ;
      END
   END delay_mul_ln34_unr5_unr3_stage2_stallmux_q_4_

   PIN delay_mul_ln34_unr5_unr3_stage2_stallmux_q_5_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 395.95 805.945 396.05 ;
      END
   END delay_mul_ln34_unr5_unr3_stage2_stallmux_q_5_

   PIN delay_mul_ln34_unr5_unr3_stage2_stallmux_q_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 408.15 805.945 408.25 ;
      END
   END delay_mul_ln34_unr5_unr3_stage2_stallmux_q_6_

   PIN delay_mul_ln34_unr5_unr3_stage2_stallmux_q_8_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 336.15 805.945 336.25 ;
      END
   END delay_mul_ln34_unr5_unr3_stage2_stallmux_q_8_

   PIN delay_mul_ln34_unr5_unr5_stage2_stallmux_z_10_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 708.05 497.495 708.15 498.005 ;
      END
   END delay_mul_ln34_unr5_unr5_stage2_stallmux_z_10_

   PIN delay_mul_ln34_unr5_unr5_stage2_stallmux_z_11_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 581.85 497.495 581.95 498.005 ;
      END
   END delay_mul_ln34_unr5_unr5_stage2_stallmux_z_11_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_q_6_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 467.95 805.945 468.05 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_q_6_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_q_7_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 407.95 805.945 408.05 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_q_7_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 478.75 805.945 478.85 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_z_13_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 478.95 805.945 479.05 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_z_14_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_z_2_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 468.15 805.945 468.25 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_z_2_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_z_4_
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 390.05 497.495 390.15 498.005 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_z_4_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_z_8_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 347.95 805.945 348.05 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_z_8_

   PIN delay_mul_ln34_unr5_unr7_stage2_stallmux_z_9_
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 510.25 497.495 510.35 498.005 ;
      END
   END delay_mul_ln34_unr5_unr7_stage2_stallmux_z_9_

   PIN ispd_clk
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 410 497.75 410.2 498.005 ;
      END
   END ispd_clk

   PIN mul_4646_72_n_116
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 245.05 497.495 245.15 498.005 ;
      END
   END mul_4646_72_n_116

   PIN mul_4646_72_n_124
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 197.45 497.495 197.55 498.005 ;
      END
   END mul_4646_72_n_124

   PIN mul_4646_72_n_212
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 318.05 497.495 318.15 498.005 ;
      END
   END mul_4646_72_n_212

   PIN mul_4646_72_n_213
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 458.25 497.495 458.35 498.005 ;
      END
   END mul_4646_72_n_213

   PIN mul_4646_72_n_214
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 449.85 497.495 449.95 498.005 ;
      END
   END mul_4646_72_n_214

   PIN mul_4646_72_n_96
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 270.05 497.495 270.15 498.005 ;
      END
   END mul_4646_72_n_96

   PIN mul_4646_72_n_97
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.25 0 317.35 0.51 ;
      END
   END mul_4646_72_n_97

   PIN mul_4646_72_n_98
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.45 0 317.55 0.51 ;
      END
   END mul_4646_72_n_98

   PIN mul_4650_72_n_288
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 183.05 497.495 183.15 498.005 ;
      END
   END mul_4650_72_n_288

   PIN mul_4650_72_n_307
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 194.45 497.495 194.55 498.005 ;
      END
   END mul_4650_72_n_307

   PIN mul_4650_72_n_312
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 258.25 497.495 258.35 498.005 ;
      END
   END mul_4650_72_n_312

   PIN mul_4650_72_n_50
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 185.85 0 185.95 0.51 ;
      END
   END mul_4650_72_n_50

   PIN mul_4650_72_n_51
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 137.85 0 137.95 0.51 ;
      END
   END mul_4650_72_n_51

   PIN mul_4650_72_n_57
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 333.65 0 333.75 0.51 ;
      END
   END mul_4650_72_n_57

   PIN mul_4650_72_n_66
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 137.85 497.495 137.95 498.005 ;
      END
   END mul_4650_72_n_66

   PIN mul_4650_72_n_67
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 161.65 0 161.75 0.51 ;
      END
   END mul_4650_72_n_67

   PIN mul_4650_72_n_71
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 174.25 0 174.35 0.51 ;
      END
   END mul_4650_72_n_71

   PIN mul_4650_72_n_752
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 478.45 497.495 478.55 498.005 ;
      END
   END mul_4650_72_n_752

   PIN mul_4650_72_n_767
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 333.05 0 333.15 0.51 ;
      END
   END mul_4650_72_n_767

   PIN mul_4650_72_n_773
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 173.85 0 173.95 0.51 ;
      END
   END mul_4650_72_n_773

   PIN mul_4650_72_n_789
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 115.45 0 115.55 0.51 ;
      END
   END mul_4650_72_n_789

   PIN mul_4650_72_n_837
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 192.05 0 192.15 0.51 ;
      END
   END mul_4650_72_n_837

   PIN mul_4650_72_n_840
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 162.05 0 162.15 0.51 ;
      END
   END mul_4650_72_n_840

   PIN n_112253
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 114.25 497.495 114.35 498.005 ;
      END
   END n_112253

   PIN n_112259
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 457.65 497.495 457.75 498.005 ;
      END
   END n_112259

   PIN n_112755
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 426.45 497.495 426.55 498.005 ;
      END
   END n_112755

   PIN n_113329
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 322.65 497.495 322.75 498.005 ;
      END
   END n_113329

   PIN n_113795
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 322.45 497.495 322.55 498.005 ;
      END
   END n_113795

   PIN n_113875
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 258.25 0 258.35 0.51 ;
      END
   END n_113875

   PIN n_114487
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 257.65 497.495 257.75 498.005 ;
      END
   END n_114487

   PIN n_115523
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 162.25 497.495 162.35 498.005 ;
      END
   END n_115523

   PIN n_115564
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 354.05 497.495 354.15 498.005 ;
      END
   END n_115564

   PIN n_115565
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 367.65 497.495 367.75 498.005 ;
      END
   END n_115565

   PIN n_116610
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 146.85 497.495 146.95 498.005 ;
      END
   END n_116610

   PIN n_116849
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 354.05 497.495 354.15 498.005 ;
      END
   END n_116849

   PIN n_116850
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 353.85 497.495 353.95 498.005 ;
      END
   END n_116850

   PIN n_117661
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 322.05 497.495 322.15 498.005 ;
      END
   END n_117661

   PIN n_117721
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 294.05 0 294.15 0.51 ;
      END
   END n_117721

   PIN n_119045
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 90.05 497.495 90.15 498.005 ;
      END
   END n_119045

   PIN n_120348
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 150.05 497.495 150.15 498.005 ;
      END
   END n_120348

   PIN n_120860
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 149.45 497.495 149.55 498.005 ;
      END
   END n_120860

   PIN n_121613
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 101.85 497.495 101.95 498.005 ;
      END
   END n_121613

   PIN n_121641
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 390.25 497.495 390.35 498.005 ;
      END
   END n_121641

   PIN n_121888
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 217.45 0 217.55 0.51 ;
      END
   END n_121888

   PIN n_123339
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 138.05 497.495 138.15 498.005 ;
      END
   END n_123339

   PIN n_124376
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 222.05 0 222.15 0.51 ;
      END
   END n_124376

   PIN n_124377
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 217.25 0 217.35 0.51 ;
      END
   END n_124377

   PIN n_124389
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 233.05 497.495 233.15 498.005 ;
      END
   END n_124389

   PIN n_124393
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 293.05 0 293.15 0.51 ;
      END
   END n_124393

   PIN n_124629
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 234.05 0 234.15 0.51 ;
      END
   END n_124629

   PIN n_124852
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 270.05 0 270.15 0.51 ;
      END
   END n_124852

   PIN n_124877
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 280.85 0 280.95 0.51 ;
      END
   END n_124877

   PIN n_125649
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 234.25 0 234.35 0.51 ;
      END
   END n_125649

   PIN n_126016
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 101.05 497.495 101.15 498.005 ;
      END
   END n_126016

   PIN n_127097
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 246.45 0 246.55 0.51 ;
      END
   END n_127097

   PIN n_127103
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 209.05 0 209.15 0.51 ;
      END
   END n_127103

   PIN n_127612
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 305.25 0 305.35 0.51 ;
      END
   END n_127612

   PIN n_128902
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 116.25 497.495 116.35 498.005 ;
      END
   END n_128902

   PIN n_129209
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 198.25 0 198.35 0.51 ;
      END
   END n_129209

   PIN n_129975
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 326.75 0.51 326.85 ;
      END
   END n_129975

   PIN n_133431
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 329.65 497.495 329.75 498.005 ;
      END
   END n_133431

   PIN n_134167
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 138.45 0 138.55 0.51 ;
      END
   END n_134167

   PIN n_134694
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 161.85 0 161.95 0.51 ;
      END
   END n_134694

   PIN n_13477
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 414.05 0 414.15 0.51 ;
      END
   END n_13477

   PIN n_13502
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 156.15 805.945 156.25 ;
      END
   END n_13502

   PIN n_137787
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 498.25 497.495 498.35 498.005 ;
      END
   END n_137787

   PIN n_137874
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 335.95 805.945 336.05 ;
      END
   END n_137874

   PIN n_143007
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 197.85 497.495 197.95 498.005 ;
      END
   END n_143007

   PIN n_144214
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 132.15 805.945 132.25 ;
      END
   END n_144214

   PIN n_16610
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 444.85 497.495 444.95 498.005 ;
      END
   END n_16610

   PIN n_16611
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 445.45 497.495 445.55 498.005 ;
      END
   END n_16611

   PIN n_18394
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 681.45 0 681.55 0.51 ;
      END
   END n_18394

   PIN n_18395
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 578.05 0 578.15 0.51 ;
      END
   END n_18395

   PIN n_18396
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 630.05 0 630.15 0.51 ;
      END
   END n_18396

   PIN n_18397
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 630.65 0 630.75 0.51 ;
      END
   END n_18397

   PIN n_18398
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 107.95 805.945 108.05 ;
      END
   END n_18398

   PIN n_18400
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 108.15 805.945 108.25 ;
      END
   END n_18400

   PIN n_18779
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 593.05 0 593.15 0.51 ;
      END
   END n_18779

   PIN n_19896
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 25.15 805.945 25.25 ;
      END
   END n_19896

   PIN n_19897
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 733.85 0 733.95 0.51 ;
      END
   END n_19897

   PIN n_19898
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 546.45 0 546.55 0.51 ;
      END
   END n_19898

   PIN n_19899
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 570.45 0 570.55 0.51 ;
      END
   END n_19899

   PIN n_20359
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 714.05 0 714.15 0.51 ;
      END
   END n_20359

   PIN n_20449
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 474.25 497.495 474.35 498.005 ;
      END
   END n_20449

   PIN n_20564
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 534.25 0 534.35 0.51 ;
      END
   END n_20564

   PIN n_20565
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 510.05 0 510.15 0.51 ;
      END
   END n_20565

   PIN n_20644
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 96.15 805.945 96.25 ;
      END
   END n_20644

   PIN n_20800
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 738.25 0 738.35 0.51 ;
      END
   END n_20800

   PIN n_21064
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 462.65 497.495 462.75 498.005 ;
      END
   END n_21064

   PIN n_21065
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 550.25 497.495 550.35 498.005 ;
      END
   END n_21065

   PIN n_21066
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 662.05 497.495 662.15 498.005 ;
      END
   END n_21066

   PIN n_21069
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 522.25 497.495 522.35 498.005 ;
      END
   END n_21069

   PIN n_21096
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 207.35 805.945 207.45 ;
      END
   END n_21096

   PIN n_21097
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 207.15 805.945 207.25 ;
      END
   END n_21097

   PIN n_21145
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 533.85 0 533.95 0.51 ;
      END
   END n_21145

   PIN n_21358
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 445.05 497.495 445.15 498.005 ;
      END
   END n_21358

   PIN n_21365
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 207.55 805.945 207.65 ;
      END
   END n_21365

   PIN n_21400
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 462.45 497.495 462.55 498.005 ;
      END
   END n_21400

   PIN n_21449
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 514.05 497.495 514.15 498.005 ;
      END
   END n_21449

   PIN n_21451
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 738.05 0 738.15 0.51 ;
      END
   END n_21451

   PIN n_21616
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 618.25 0 618.35 0.51 ;
      END
   END n_21616

   PIN n_21617
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 618.05 0 618.15 0.51 ;
      END
   END n_21617

   PIN n_21621
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 629.65 0 629.75 0.51 ;
      END
   END n_21621

   PIN n_21671
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 750.25 0 750.35 0.51 ;
      END
   END n_21671

   PIN n_21890
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 617.85 0 617.95 0.51 ;
      END
   END n_21890

   PIN n_22137
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 643.05 497.495 643.15 498.005 ;
      END
   END n_22137

   PIN n_22166
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 641.85 0 641.95 0.51 ;
      END
   END n_22166

   PIN n_22167
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 654.25 0 654.35 0.51 ;
      END
   END n_22167

   PIN n_22235
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 534.05 0 534.15 0.51 ;
      END
   END n_22235

   PIN n_22448
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 227.55 805.945 227.65 ;
      END
   END n_22448

   PIN n_22449
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 192.15 805.945 192.25 ;
      END
   END n_22449

   PIN n_22475
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 630.45 0 630.55 0.51 ;
      END
   END n_22475

   PIN n_22476
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 630.25 0 630.35 0.51 ;
      END
   END n_22476

   PIN n_22516
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 642.25 0 642.35 0.51 ;
      END
   END n_22516

   PIN n_22541
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 642.05 0 642.15 0.51 ;
      END
   END n_22541

   PIN n_22817
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 538.25 0 538.35 0.51 ;
      END
   END n_22817

   PIN n_23018
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 116.75 805.945 116.85 ;
      END
   END n_23018

   PIN n_23041
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 438.05 0 438.15 0.51 ;
      END
   END n_23041

   PIN n_23125
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 326.75 805.945 326.85 ;
      END
   END n_23125

   PIN n_23330
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 312.15 805.945 312.25 ;
      END
   END n_23330

   PIN n_23555
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 414.25 0 414.35 0.51 ;
      END
   END n_23555

   PIN n_23647
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 296.95 805.945 297.05 ;
      END
   END n_23647

   PIN n_23667
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 372.05 0 372.15 0.51 ;
      END
   END n_23667

   PIN n_23669
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 329.65 0 329.75 0.51 ;
      END
   END n_23669

   PIN n_23722
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 330.05 0 330.15 0.51 ;
      END
   END n_23722

   PIN n_23768
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 371.95 805.945 372.05 ;
      END
   END n_23768

   PIN n_24318
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 366.45 0 366.55 0.51 ;
      END
   END n_24318

   PIN n_24395
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 630.45 497.495 630.55 498.005 ;
      END
   END n_24395

   PIN n_24709
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 629.85 0 629.95 0.51 ;
      END
   END n_24709

   PIN n_25046
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 296.75 805.945 296.85 ;
      END
   END n_25046

   PIN n_26039
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 647.05 0 647.15 0.51 ;
      END
   END n_26039

   PIN n_26266
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 327.15 805.945 327.25 ;
      END
   END n_26266

   PIN n_26268
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 179.95 805.945 180.05 ;
      END
   END n_26268

   PIN n_26406
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 683.45 497.495 683.55 498.005 ;
      END
   END n_26406

   PIN n_26895
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 268.15 805.945 268.25 ;
      END
   END n_26895

   PIN n_26897
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 216.15 805.945 216.25 ;
      END
   END n_26897

   PIN n_26908
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 85.55 805.945 85.65 ;
      END
   END n_26908

   PIN n_27622
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 678.05 497.495 678.15 498.005 ;
      END
   END n_27622

   PIN n_27970
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 570.25 0 570.35 0.51 ;
      END
   END n_27970

   PIN n_27972
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 570.05 0 570.15 0.51 ;
      END
   END n_27972

   PIN n_2799
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 114.05 0 114.15 0.51 ;
      END
   END n_2799

   PIN n_28572
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 642.45 497.495 642.55 498.005 ;
      END
   END n_28572

   PIN n_28574
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 720.05 497.495 720.15 498.005 ;
      END
   END n_28574

   PIN n_2861
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 534.25 497.495 534.35 498.005 ;
      END
   END n_2861

   PIN n_2871
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 433.45 0 433.55 0.51 ;
      END
   END n_2871

   PIN n_28733
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 719.65 497.495 719.75 498.005 ;
      END
   END n_28733

   PIN n_29056
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 711.45 497.495 711.55 498.005 ;
      END
   END n_29056

   PIN n_29058
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 710.85 497.495 710.95 498.005 ;
      END
   END n_29058

   PIN n_32114
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 251.25 497.495 251.35 498.005 ;
      END
   END n_32114

   PIN n_32115
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 250.65 497.495 250.75 498.005 ;
      END
   END n_32115

   PIN n_32440
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 271.65 497.495 271.75 498.005 ;
      END
   END n_32440

   PIN n_32718
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 119.85 497.495 119.95 498.005 ;
      END
   END n_32718

   PIN n_32740
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 160.85 497.495 160.95 498.005 ;
      END
   END n_32740

   PIN n_32741
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 160.25 497.495 160.35 498.005 ;
      END
   END n_32741

   PIN n_32769
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 217.85 497.495 217.95 498.005 ;
      END
   END n_32769

   PIN n_33082
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 193.05 497.495 193.15 498.005 ;
      END
   END n_33082

   PIN n_33167
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 137.65 497.495 137.75 498.005 ;
      END
   END n_33167

   PIN n_33364
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 257.45 497.495 257.55 498.005 ;
      END
   END n_33364

   PIN n_33881
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 269.65 497.495 269.75 498.005 ;
      END
   END n_33881

   PIN n_34014
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 126.05 497.495 126.15 498.005 ;
      END
   END n_34014

   PIN n_34377
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 125.85 497.495 125.95 498.005 ;
      END
   END n_34377

   PIN n_34609
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 251.05 497.495 251.15 498.005 ;
      END
   END n_34609

   PIN n_34610
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 251.65 497.495 251.75 498.005 ;
      END
   END n_34610

   PIN n_34731
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 269.45 497.495 269.55 498.005 ;
      END
   END n_34731

   PIN n_34808
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 11.05 497.495 11.15 498.005 ;
      END
   END n_34808

   PIN n_3513
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 534.65 497.495 534.75 498.005 ;
      END
   END n_3513

   PIN n_35434
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 171.45 497.495 171.55 498.005 ;
      END
   END n_35434

   PIN n_36613
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 197.65 497.495 197.75 498.005 ;
      END
   END n_36613

   PIN n_37477
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 79.45 497.495 79.55 498.005 ;
      END
   END n_37477

   PIN n_37556
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 317.45 497.495 317.55 498.005 ;
      END
   END n_37556

   PIN n_37622
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 286.45 497.495 286.55 498.005 ;
      END
   END n_37622

   PIN n_37665
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 453.85 497.495 453.95 498.005 ;
      END
   END n_37665

   PIN n_37690
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 233.85 497.495 233.95 498.005 ;
      END
   END n_37690

   PIN n_382
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 477.85 497.495 477.95 498.005 ;
      END
   END n_382

   PIN n_39240
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 215.85 497.495 215.95 498.005 ;
      END
   END n_39240

   PIN n_39453
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 318.25 0 318.35 0.51 ;
      END
   END n_39453

   PIN n_39845
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 426.05 497.495 426.15 498.005 ;
      END
   END n_39845

   PIN n_40155
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.69 85.1 805.945 85.3 ;
      END
   END n_40155

   PIN n_40158
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 252.35 805.945 252.45 ;
      END
   END n_40158

   PIN n_40330
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 227.75 805.945 227.85 ;
      END
   END n_40330

   PIN n_40445
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 176.95 805.945 177.05 ;
      END
   END n_40445

   PIN n_40476
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 228.55 805.945 228.65 ;
      END
   END n_40476

   PIN n_40561
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 288.15 805.945 288.25 ;
      END
   END n_40561

   PIN n_40564
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 275.95 805.945 276.05 ;
      END
   END n_40564

   PIN n_40626
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 236.95 805.945 237.05 ;
      END
   END n_40626

   PIN n_40648
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 236.75 805.945 236.85 ;
      END
   END n_40648

   PIN n_40695
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 633.65 0 633.75 0.51 ;
      END
   END n_40695

   PIN n_40706
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 236.95 805.945 237.05 ;
      END
   END n_40706

   PIN n_40727
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 276.15 805.945 276.25 ;
      END
   END n_40727

   PIN n_48178
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 231.65 497.495 231.75 498.005 ;
      END
   END n_48178

   PIN n_48510
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 209.85 497.495 209.95 498.005 ;
      END
   END n_48510

   PIN n_48907
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 242.25 497.495 242.35 498.005 ;
      END
   END n_48907

   PIN n_49236
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 206.95 805.945 207.05 ;
      END
   END n_49236

   PIN n_5058
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 470.85 0 470.95 0.51 ;
      END
   END n_5058

   PIN n_5059
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 471.45 0 471.55 0.51 ;
      END
   END n_5059

   PIN n_5115
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 461.85 497.495 461.95 498.005 ;
      END
   END n_5115

   PIN n_51768
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 233.65 497.495 233.75 498.005 ;
      END
   END n_51768

   PIN n_54235
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 242.05 497.495 242.15 498.005 ;
      END
   END n_54235

   PIN n_54706
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 206.75 805.945 206.85 ;
      END
   END n_54706

   PIN n_5505
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 426.25 497.495 426.35 498.005 ;
      END
   END n_5505

   PIN n_5571
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 509.45 0 509.55 0.51 ;
      END
   END n_5571

   PIN n_57100
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 241.65 497.495 241.75 498.005 ;
      END
   END n_57100

   PIN n_58492
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 227.75 805.945 227.85 ;
      END
   END n_58492

   PIN n_58941
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 226.65 497.495 226.75 498.005 ;
      END
   END n_58941

   PIN n_60391
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 239.75 805.945 239.85 ;
      END
   END n_60391

   PIN n_6364
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 534.45 497.495 534.55 498.005 ;
      END
   END n_6364

   PIN n_63870
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 805.435 251.75 805.945 251.85 ;
      END
   END n_63870

   PIN n_6635
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 805.435 478.75 805.945 478.85 ;
      END
   END n_6635

   PIN n_7003
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 771.85 0 771.95 0.51 ;
      END
   END n_7003

   PIN n_7337
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 294.45 497.495 294.55 498.005 ;
      END
   END n_7337

   PIN n_7696
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 150.45 0 150.55 0.51 ;
      END
   END n_7696

   PIN n_7848
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 294.25 497.495 294.35 498.005 ;
      END
   END n_7848

   OBS
      LAYER via1 ;
         RECT 0 0 805.945 498.005 ;
      LAYER metal5 ;
         RECT 0.63 0.00 805.315 498.005 ;
      LAYER metal4 ;
         RECT 0.00 0.63 805.945 497.375 ;
      LAYER metal3 ;
         RECT 0.63 0.00 805.315 498.005 ;
      LAYER metal2 ;
         RECT 0.00 0.63 805.945 497.375 ;
      LAYER metal1 ;
         RECT 0.00 0.00 805.945 498.005 ;
   END
END h1

MACRO h0
   CLASS BLOCK ;
   FOREIGN h0 ;
   ORIGIN 0 0 ;
   SIZE 979.355 BY 382 ;
   SYMMETRY X Y R90 ;
   PIN FE_OFN10233_b_2_6_0
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 269.77 0.51 269.87 ;
      END
   END FE_OFN10233_b_2_6_0

   PIN FE_OFN10257_b_2_4_6
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 305.57 0.51 305.67 ;
      END
   END FE_OFN10257_b_2_4_6

   PIN FE_OFN10260_b_2_4_5
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 426.255 381.49 426.355 382 ;
      END
   END FE_OFN10260_b_2_4_5

   PIN FE_OFN10293_b_2_2_3
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 354.37 0.51 354.47 ;
      END
   END FE_OFN10293_b_2_2_3

   PIN FE_OFN1071_n_16034
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 887.655 381.49 887.755 382 ;
      END
   END FE_OFN1071_n_16034

   PIN FE_OFN1086_n_21187
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 745.055 381.49 745.155 382 ;
      END
   END FE_OFN1086_n_21187

   PIN FE_OFN11430_n_142905
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 282.17 0.51 282.27 ;
      END
   END FE_OFN11430_n_142905

   PIN FE_OFN11434_n_142919
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 318.37 0.51 318.47 ;
      END
   END FE_OFN11434_n_142919

   PIN FE_OFN11435_n_142919
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 660.655 381.49 660.755 382 ;
      END
   END FE_OFN11435_n_142919

   PIN FE_OFN1157_n_10648
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 673.855 381.49 673.955 382 ;
      END
   END FE_OFN1157_n_10648

   PIN FE_OFN11706_n_142947
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 370.37 0.51 370.47 ;
      END
   END FE_OFN11706_n_142947

   PIN FE_OFN11707_n_142947
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 258.97 0.51 259.07 ;
      END
   END FE_OFN11707_n_142947

   PIN FE_OFN12301_n_111727
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 479.655 381.49 479.755 382 ;
      END
   END FE_OFN12301_n_111727

   PIN FE_OFN12386_n_142906
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 143.455 381.49 143.555 382 ;
      END
   END FE_OFN12386_n_142906

   PIN FE_OFN12400_n_694
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 355.97 0.51 356.07 ;
      END
   END FE_OFN12400_n_694

   PIN FE_OFN12617_n_112689
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 430.655 381.49 430.755 382 ;
      END
   END FE_OFN12617_n_112689

   PIN FE_OFN12618_n_112689
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 418.055 381.49 418.155 382 ;
      END
   END FE_OFN12618_n_112689

   PIN FE_OFN13018_n_142950
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 305.97 0.51 306.07 ;
      END
   END FE_OFN13018_n_142950

   PIN FE_OFN15062_n_12711
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 107.255 381.49 107.355 382 ;
      END
   END FE_OFN15062_n_12711

   PIN FE_OFN15077_n_14458
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 670.855 381.49 670.955 382 ;
      END
   END FE_OFN15077_n_14458

   PIN FE_OFN15252_n_39084
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 370.57 0.51 370.67 ;
      END
   END FE_OFN15252_n_39084

   PIN FE_OFN15923_n_143045
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 234.37 0.51 234.47 ;
      END
   END FE_OFN15923_n_143045

   PIN FE_OFN15925_n_112550
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 15.655 381.49 15.755 382 ;
      END
   END FE_OFN15925_n_112550

   PIN FE_OFN15930_n_143241
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 307.97 0.51 308.07 ;
      END
   END FE_OFN15930_n_143241

   PIN FE_OFN16294_delay_add_ln34_unr2_unr3_stage2_stallmux_q_15_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 419.055 381.49 419.155 382 ;
      END
   END FE_OFN16294_delay_add_ln34_unr2_unr3_stage2_stallmux_q_15_

   PIN FE_OFN16366_b_2_4_1
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 372.655 381.49 372.755 382 ;
      END
   END FE_OFN16366_b_2_4_1

   PIN FE_OFN16771_n_16098
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 743.655 381.49 743.755 382 ;
      END
   END FE_OFN16771_n_16098

   PIN FE_OFN17162_n_132699
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 330.77 0.51 330.87 ;
      END
   END FE_OFN17162_n_132699

   PIN FE_OFN17165_n_134675
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 539.055 381.49 539.155 382 ;
      END
   END FE_OFN17165_n_134675

   PIN FE_OFN17200_n_16166
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 646.855 381.49 646.955 382 ;
      END
   END FE_OFN17200_n_16166

   PIN FE_OFN17265_n_140245
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 330.77 0.51 330.87 ;
      END
   END FE_OFN17265_n_140245

   PIN FE_OFN18609_b_2_2_0
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 354.97 0.51 355.07 ;
      END
   END FE_OFN18609_b_2_2_0

   PIN FE_OFN18810_n_143645
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 341.77 0.51 341.87 ;
      END
   END FE_OFN18810_n_143645

   PIN FE_OFN19059_n_19681
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 344.77 0.51 344.87 ;
      END
   END FE_OFN19059_n_19681

   PIN FE_OFN19145_n_143045
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 245.97 0.51 246.07 ;
      END
   END FE_OFN19145_n_143045

   PIN FE_OFN19307_b_2_2_1
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 155.455 381.49 155.555 382 ;
      END
   END FE_OFN19307_b_2_2_1

   PIN FE_OFN2160_n_19626
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 671.255 381.49 671.355 382 ;
      END
   END FE_OFN2160_n_19626

   PIN FE_OFN2283_n_19629
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 287.055 381.49 287.155 382 ;
      END
   END FE_OFN2283_n_19629

   PIN FE_OFN3286_n_117368
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 275.255 381.49 275.355 382 ;
      END
   END FE_OFN3286_n_117368

   PIN FE_OFN3294_n_8246
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 748.255 381.49 748.355 382 ;
      END
   END FE_OFN3294_n_8246

   PIN FE_OFN3442_n_12341
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 676.855 381.49 676.955 382 ;
      END
   END FE_OFN3442_n_12341

   PIN FE_OFN3574_n_133235
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 306.17 0.51 306.27 ;
      END
   END FE_OFN3574_n_133235

   PIN FE_OFN3613_n_112427
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 384.855 381.49 384.955 382 ;
      END
   END FE_OFN3613_n_112427

   PIN FE_OFN3656_n_112550
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 267.37 0.51 267.47 ;
      END
   END FE_OFN3656_n_112550

   PIN FE_OFN3723_n_143241
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 314.655 381.49 314.755 382 ;
      END
   END FE_OFN3723_n_143241

   PIN FE_OFN606_n_8387
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 455.855 381.49 455.955 382 ;
      END
   END FE_OFN606_n_8387

   PIN FE_OFN703_n_21657
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 739.055 381.49 739.155 382 ;
      END
   END FE_OFN703_n_21657

   PIN FE_OFN757_n_21703
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 668.855 381.49 668.955 382 ;
      END
   END FE_OFN757_n_21703

   PIN FE_OFN797_n_21129
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 743.455 381.49 743.555 382 ;
      END
   END FE_OFN797_n_21129

   PIN add_5900_51_n_148
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 827.655 381.49 827.755 382 ;
      END
   END add_5900_51_n_148

   PIN add_5900_51_n_77
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 563.055 381.49 563.155 382 ;
      END
   END add_5900_51_n_77

   PIN delay_add_ln34_unr2_unr1_stage2_stallmux_q_15_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 371.255 381.49 371.355 382 ;
      END
   END delay_add_ln34_unr2_unr1_stage2_stallmux_q_15_

   PIN delay_add_ln34_unr2_unr2_stage2_stallmux_z_12_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 467.455 381.49 467.555 382 ;
      END
   END delay_add_ln34_unr2_unr2_stage2_stallmux_z_12_

   PIN delay_add_ln34_unr2_unr3_stage2_stallmux_q_10_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 635.655 381.49 635.755 382 ;
      END
   END delay_add_ln34_unr2_unr3_stage2_stallmux_q_10_

   PIN delay_add_ln34_unr2_unr3_stage2_stallmux_q_3_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 443.255 381.49 443.355 382 ;
      END
   END delay_add_ln34_unr2_unr3_stage2_stallmux_q_3_

   PIN delay_add_ln34_unr2_unr3_stage2_stallmux_q_4_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 702.855 381.49 702.955 382 ;
      END
   END delay_add_ln34_unr2_unr3_stage2_stallmux_q_4_

   PIN delay_add_ln34_unr2_unr3_stage2_stallmux_q_8_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 407.255 381.49 407.355 382 ;
      END
   END delay_add_ln34_unr2_unr3_stage2_stallmux_q_8_

   PIN delay_add_ln34_unr2_unr5_stage2_stallmux_q_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 382.855 381.49 382.955 382 ;
      END
   END delay_add_ln34_unr2_unr5_stage2_stallmux_q_14_

   PIN delay_add_ln34_unr2_unr5_stage2_stallmux_q_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 455.055 381.49 455.155 382 ;
      END
   END delay_add_ln34_unr2_unr5_stage2_stallmux_q_7_

   PIN delay_add_ln34_unr2_unr5_stage2_stallmux_q_8_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 641.055 381.49 641.155 382 ;
      END
   END delay_add_ln34_unr2_unr5_stage2_stallmux_q_8_

   PIN delay_add_ln34_unr2_unr7_stage2_stallmux_q_3_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 419.055 381.49 419.155 382 ;
      END
   END delay_add_ln34_unr2_unr7_stage2_stallmux_q_3_

   PIN delay_add_ln34_unr2_unr7_stage2_stallmux_q_4_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 597.855 381.49 597.955 382 ;
      END
   END delay_add_ln34_unr2_unr7_stage2_stallmux_q_4_

   PIN delay_add_ln34_unr2_unr8_stage2_stallmux_q_3_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 659.255 381.49 659.355 382 ;
      END
   END delay_add_ln34_unr2_unr8_stage2_stallmux_q_3_

   PIN mul_4665_72_n_202
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 366.97 0.51 367.07 ;
      END
   END mul_4665_72_n_202

   PIN mul_4665_72_n_221
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 88.055 381.49 88.155 382 ;
      END
   END mul_4665_72_n_221

   PIN mul_4665_72_n_230
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 95.655 381.49 95.755 382 ;
      END
   END mul_4665_72_n_230

   PIN mul_4665_72_n_295
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 341.97 0.51 342.07 ;
      END
   END mul_4665_72_n_295

   PIN mul_4665_72_n_337
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 281.37 0.51 281.47 ;
      END
   END mul_4665_72_n_337

   PIN mul_4665_72_n_848
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 328.57 0.51 328.67 ;
      END
   END mul_4665_72_n_848

   PIN mul_4667_72_n_184
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 347.655 381.49 347.755 382 ;
      END
   END mul_4667_72_n_184

   PIN mul_4667_72_n_265
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 83.255 381.49 83.355 382 ;
      END
   END mul_4667_72_n_265

   PIN mul_4667_72_n_304
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 306.97 0.51 307.07 ;
      END
   END mul_4667_72_n_304

   PIN mul_4667_72_n_308
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 270.37 0.51 270.47 ;
      END
   END mul_4667_72_n_308

   PIN mul_4667_72_n_316
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 203.655 381.49 203.755 382 ;
      END
   END mul_4667_72_n_316

   PIN mul_4667_72_n_323
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 249.655 381.49 249.755 382 ;
      END
   END mul_4667_72_n_323

   PIN mul_4667_72_n_324
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 258.655 381.49 258.755 382 ;
      END
   END mul_4667_72_n_324

   PIN mul_4667_72_n_327
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 318.57 0.51 318.67 ;
      END
   END mul_4667_72_n_327

   PIN mul_4667_72_n_66
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 11.655 381.49 11.755 382 ;
      END
   END mul_4667_72_n_66

   PIN mul_4669_72_n_225
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 126.37 0.51 126.47 ;
      END
   END mul_4669_72_n_225

   PIN mul_4669_72_n_304
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 246.17 0.51 246.27 ;
      END
   END mul_4669_72_n_304

   PIN mul_4669_72_n_314
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 319.77 0.51 319.87 ;
      END
   END mul_4669_72_n_314

   PIN mul_4669_72_n_316
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 319.57 0.51 319.67 ;
      END
   END mul_4669_72_n_316

   PIN mul_4669_72_n_66
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 210.17 0.51 210.27 ;
      END
   END mul_4669_72_n_66

   PIN mul_ln34_unr0_unr6_z_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 407.455 381.49 407.555 382 ;
      END
   END mul_ln34_unr0_unr6_z_14_

   PIN mul_ln34_unr2_unr2_z_0_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 467.055 381.49 467.155 382 ;
      END
   END mul_ln34_unr2_unr2_z_0_

   PIN mul_ln34_unr2_unr2_z_14_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 827.655 381.49 827.755 382 ;
      END
   END mul_ln34_unr2_unr2_z_14_

   PIN mul_ln34_unr2_unr2_z_7_
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 515.055 381.49 515.155 382 ;
      END
   END mul_ln34_unr2_unr2_z_7_

   PIN n_10378
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 299.455 381.49 299.555 382 ;
      END
   END n_10378

   PIN n_10669
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 401.055 381.49 401.155 382 ;
      END
   END n_10669

   PIN n_11011
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 24.055 381.49 24.155 382 ;
      END
   END n_11011

   PIN n_111968
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 47.255 381.49 47.355 382 ;
      END
   END n_111968

   PIN n_112778
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 354.17 979.355 354.27 ;
      END
   END n_112778

   PIN n_112779
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 174.77 979.355 174.87 ;
      END
   END n_112779

   PIN n_112812
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 210.37 979.355 210.47 ;
      END
   END n_112812

   PIN n_112817
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 317.57 0.51 317.67 ;
      END
   END n_112817

   PIN n_112831
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 976.255 381.49 976.355 382 ;
      END
   END n_112831

   PIN n_112845
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 924.055 381.49 924.155 382 ;
      END
   END n_112845

   PIN n_112880
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 795.455 381.49 795.555 382 ;
      END
   END n_112880

   PIN n_112890
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 258.17 0.51 258.27 ;
      END
   END n_112890

   PIN n_112959
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 342.97 0.51 343.07 ;
      END
   END n_112959

   PIN n_113054
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 755.455 381.49 755.555 382 ;
      END
   END n_113054

   PIN n_113100
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 340.97 0.51 341.07 ;
      END
   END n_113100

   PIN n_113160
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 344.37 0.51 344.47 ;
      END
   END n_113160

   PIN n_113191
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 331.77 0.51 331.87 ;
      END
   END n_113191

   PIN n_113195
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 140.77 979.355 140.87 ;
      END
   END n_113195

   PIN n_113217
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 961.255 381.49 961.355 382 ;
      END
   END n_113217

   PIN n_113223
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 259.17 0.51 259.27 ;
      END
   END n_113223

   PIN n_113308
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 267.57 0.51 267.67 ;
      END
   END n_113308

   PIN n_113317
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 266.77 0.51 266.87 ;
      END
   END n_113317

   PIN n_113342
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 83.255 381.49 83.355 382 ;
      END
   END n_113342

   PIN n_113343
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 83.455 381.49 83.555 382 ;
      END
   END n_113343

   PIN n_113447
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 511.055 381.49 511.155 382 ;
      END
   END n_113447

   PIN n_113479
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 754.855 381.49 754.955 382 ;
      END
   END n_113479

   PIN n_113480
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 328.77 0.51 328.87 ;
      END
   END n_113480

   PIN n_113481
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 328.97 0.51 329.07 ;
      END
   END n_113481

   PIN n_113503
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 16.055 381.49 16.155 382 ;
      END
   END n_113503

   PIN n_113516
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 83.655 381.49 83.755 382 ;
      END
   END n_113516

   PIN n_113517
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 83.855 381.49 83.955 382 ;
      END
   END n_113517

   PIN n_113545
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 331.97 0.51 332.07 ;
      END
   END n_113545

   PIN n_113830
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 935.255 381.49 935.355 382 ;
      END
   END n_113830

   PIN n_113933
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 503.255 381.49 503.355 382 ;
      END
   END n_113933

   PIN n_113934
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 502.855 381.49 502.955 382 ;
      END
   END n_113934

   PIN n_114134
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 234.37 0.51 234.47 ;
      END
   END n_114134

   PIN n_114136
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 355.17 0.51 355.27 ;
      END
   END n_114136

   PIN n_114331
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 246.57 0.51 246.67 ;
      END
   END n_114331

   PIN n_114597
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 503.055 381.49 503.155 382 ;
      END
   END n_114597

   PIN n_114598
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 503.855 381.49 503.955 382 ;
      END
   END n_114598

   PIN n_114821
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 306.37 0.51 306.47 ;
      END
   END n_114821

   PIN n_114951
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 198.37 0.51 198.47 ;
      END
   END n_114951

   PIN n_115117
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 344.97 0.51 345.07 ;
      END
   END n_115117

   PIN n_115119
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 234.97 0.51 235.07 ;
      END
   END n_115119

   PIN n_115219
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 270.57 0.51 270.67 ;
      END
   END n_115219

   PIN n_116269
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 216.77 0.51 216.87 ;
      END
   END n_116269

   PIN n_116470
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 23.855 381.49 23.955 382 ;
      END
   END n_116470

   PIN n_117525
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 975.055 381.49 975.155 382 ;
      END
   END n_117525

   PIN n_117559
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 947.455 381.49 947.555 382 ;
      END
   END n_117559

   PIN n_117560
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 975.255 381.49 975.355 382 ;
      END
   END n_117560

   PIN n_117582
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 292.97 0.51 293.07 ;
      END
   END n_117582

   PIN n_117603
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 356.17 0.51 356.27 ;
      END
   END n_117603

   PIN n_117620
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 258.37 0.51 258.47 ;
      END
   END n_117620

   PIN n_118017
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 341.17 0.51 341.27 ;
      END
   END n_118017

   PIN n_118035
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 935.655 381.49 935.755 382 ;
      END
   END n_118035

   PIN n_118166
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 263.055 381.49 263.155 382 ;
      END
   END n_118166

   PIN n_118364
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 15.855 381.49 15.955 382 ;
      END
   END n_118364

   PIN n_119552
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 329.17 0.51 329.27 ;
      END
   END n_119552

   PIN n_119619
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 694.855 381.49 694.955 382 ;
      END
   END n_119619

   PIN n_119690
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 356.57 0.51 356.67 ;
      END
   END n_119690

   PIN n_119691
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 367.77 0.51 367.87 ;
      END
   END n_119691

   PIN n_119709
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 357.17 0.51 357.27 ;
      END
   END n_119709

   PIN n_119812
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 71.455 381.49 71.555 382 ;
      END
   END n_119812

   PIN n_119886
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 728.255 381.49 728.355 382 ;
      END
   END n_119886

   PIN n_119969
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 306.17 0.51 306.27 ;
      END
   END n_119969

   PIN n_120042
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 330.97 0.51 331.07 ;
      END
   END n_120042

   PIN n_120044
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 266.97 0.51 267.07 ;
      END
   END n_120044

   PIN n_120045
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 355.37 0.51 355.47 ;
      END
   END n_120045

   PIN n_120129
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 234.57 0.51 234.67 ;
      END
   END n_120129

   PIN n_120131
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 216.97 0.51 217.07 ;
      END
   END n_120131

   PIN n_120499
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 282.37 0.51 282.47 ;
      END
   END n_120499

   PIN n_120794
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 305.77 0.51 305.87 ;
      END
   END n_120794

   PIN n_121083
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 368.37 0.51 368.47 ;
      END
   END n_121083

   PIN n_121084
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 343.37 0.51 343.47 ;
      END
   END n_121084

   PIN n_121196
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 976.455 381.49 976.555 382 ;
      END
   END n_121196

   PIN n_121291
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 959.655 381.49 959.755 382 ;
      END
   END n_121291

   PIN n_121522
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 791.255 381.49 791.355 382 ;
      END
   END n_121522

   PIN n_121732
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 899.455 381.49 899.555 382 ;
      END
   END n_121732

   PIN n_121779
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 190.77 0.51 190.87 ;
      END
   END n_121779

   PIN n_121908
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 293.17 0.51 293.27 ;
      END
   END n_121908

   PIN n_121917
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 257.77 0.51 257.87 ;
      END
   END n_121917

   PIN n_121918
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 258.57 0.51 258.67 ;
      END
   END n_121918

   PIN n_122005
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 334.855 381.49 334.955 382 ;
      END
   END n_122005

   PIN n_122026
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 293.97 0.51 294.07 ;
      END
   END n_122026

   PIN n_122106
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 295.17 0.51 295.27 ;
      END
   END n_122106

   PIN n_122300
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 263.255 381.49 263.355 382 ;
      END
   END n_122300

   PIN n_122476
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 479.255 381.49 479.355 382 ;
      END
   END n_122476

   PIN n_122532
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 743.255 381.49 743.355 382 ;
      END
   END n_122532

   PIN n_123300
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 217.17 0.51 217.27 ;
      END
   END n_123300

   PIN n_123316
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 305.77 0.51 305.87 ;
      END
   END n_123316

   PIN n_123618
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 264.055 381.49 264.155 382 ;
      END
   END n_123618

   PIN n_123955
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 976.655 381.49 976.755 382 ;
      END
   END n_123955

   PIN n_124058
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 174.37 0.51 174.47 ;
      END
   END n_124058

   PIN n_124589
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 35.455 381.49 35.555 382 ;
      END
   END n_124589

   PIN n_124590
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 35.655 381.49 35.755 382 ;
      END
   END n_124590

   PIN n_124859
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 773.855 381.49 773.955 382 ;
      END
   END n_124859

   PIN n_125049
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 318.37 979.355 318.47 ;
      END
   END n_125049

   PIN n_125190
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 803.455 381.49 803.555 382 ;
      END
   END n_125190

   PIN n_125260
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 270.77 979.355 270.87 ;
      END
   END n_125260

   PIN n_125261
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 961.455 381.49 961.555 382 ;
      END
   END n_125261

   PIN n_125371
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 294.97 0.51 295.07 ;
      END
   END n_125371

   PIN n_125378
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 295.97 0.51 296.07 ;
      END
   END n_125378

   PIN n_125536
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 736.055 381.49 736.155 382 ;
      END
   END n_125536

   PIN n_125537
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 723.655 381.49 723.755 382 ;
      END
   END n_125537

   PIN n_125551
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 78.37 0.51 78.47 ;
      END
   END n_125551

   PIN n_12570
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 267.77 0.51 267.87 ;
      END
   END n_12570

   PIN n_125714
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 527.055 381.49 527.155 382 ;
      END
   END n_125714

   PIN n_125785
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 252.055 381.49 252.155 382 ;
      END
   END n_125785

   PIN n_126191
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 266.055 381.49 266.155 382 ;
      END
   END n_126191

   PIN n_126306
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 978.845 358.37 979.355 358.47 ;
      END
   END n_126306

   PIN n_126307
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 354.37 979.355 354.47 ;
      END
   END n_126307

   PIN n_126587
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 35.855 381.49 35.955 382 ;
      END
   END n_126587

   PIN n_126600
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 250.855 381.49 250.955 382 ;
      END
   END n_126600

   PIN n_126601
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 255.655 381.49 255.755 382 ;
      END
   END n_126601

   PIN n_12712
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 443.055 381.49 443.155 382 ;
      END
   END n_12712

   PIN n_127297
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 367.17 0.51 367.27 ;
      END
   END n_127297

   PIN n_127737
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 766.055 381.49 766.155 382 ;
      END
   END n_127737

   PIN n_127742
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 742.855 381.49 742.955 382 ;
      END
   END n_127742

   PIN n_127891
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 366.57 0.51 366.67 ;
      END
   END n_127891

   PIN n_128372
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 367.37 0.51 367.47 ;
      END
   END n_128372

   PIN n_128584
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 767.455 381.49 767.555 382 ;
      END
   END n_128584

   PIN n_128848
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 947.655 381.49 947.755 382 ;
      END
   END n_128848

   PIN n_128849
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 975.455 381.49 975.555 382 ;
      END
   END n_128849

   PIN n_128989
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 203.455 381.49 203.555 382 ;
      END
   END n_128989

   PIN n_129129
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 150.57 0.51 150.67 ;
      END
   END n_129129

   PIN n_129403
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 368.57 0.51 368.67 ;
      END
   END n_129403

   PIN n_129491
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 975.655 381.49 975.755 382 ;
      END
   END n_129491

   PIN n_129545
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 11.855 381.49 11.955 382 ;
      END
   END n_129545

   PIN n_129619
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 827.855 381.49 827.955 382 ;
      END
   END n_129619

   PIN n_129824
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 329.97 0.51 330.07 ;
      END
   END n_129824

   PIN n_129826
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 366.37 0.51 366.47 ;
      END
   END n_129826

   PIN n_129827
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 975.855 381.49 975.955 382 ;
      END
   END n_129827

   PIN n_129828
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 203.255 381.49 203.355 382 ;
      END
   END n_129828

   PIN n_129897
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 12.055 381.49 12.155 382 ;
      END
   END n_129897

   PIN n_130137
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 190.77 979.355 190.87 ;
      END
   END n_130137

   PIN n_130202
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 90.77 979.355 90.87 ;
      END
   END n_130202

   PIN n_130204
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 366.37 979.355 366.47 ;
      END
   END n_130204

   PIN n_130594
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 443.255 381.49 443.355 382 ;
      END
   END n_130594

   PIN n_130626
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 899.655 381.49 899.755 382 ;
      END
   END n_130626

   PIN n_131059
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 887.855 381.49 887.955 382 ;
      END
   END n_131059

   PIN n_131060
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 815.655 381.49 815.755 382 ;
      END
   END n_131060

   PIN n_131305
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 307.17 0.51 307.27 ;
      END
   END n_131305

   PIN n_131421
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 899.855 381.49 899.955 382 ;
      END
   END n_131421

   PIN n_131475
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 258.77 0.51 258.87 ;
      END
   END n_131475

   PIN n_132026
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 346.455 381.49 346.555 382 ;
      END
   END n_132026

   PIN n_132027
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 362.255 381.49 362.355 382 ;
      END
   END n_132027

   PIN n_132085
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 455.255 381.49 455.355 382 ;
      END
   END n_132085

   PIN n_132293
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 23.655 381.49 23.755 382 ;
      END
   END n_132293

   PIN n_132825
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 335.255 381.49 335.355 382 ;
      END
   END n_132825

   PIN n_132870
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 618.455 381.49 618.555 382 ;
      END
   END n_132870

   PIN n_133002
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 356.37 0.51 356.47 ;
      END
   END n_133002

   PIN n_133183
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 330.97 0.51 331.07 ;
      END
   END n_133183

   PIN n_133738
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 282.37 0.51 282.47 ;
      END
   END n_133738

   PIN n_133859
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 975.655 381.49 975.755 382 ;
      END
   END n_133859

   PIN n_133940
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 976.055 381.49 976.155 382 ;
      END
   END n_133940

   PIN n_134182
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 361.055 381.49 361.155 382 ;
      END
   END n_134182

   PIN n_134553
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 959.455 381.49 959.555 382 ;
      END
   END n_134553

   PIN n_134648
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 976.255 381.49 976.355 382 ;
      END
   END n_134648

   PIN n_134804
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 348.055 381.49 348.155 382 ;
      END
   END n_134804

   PIN n_135056
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 355.57 0.51 355.67 ;
      END
   END n_135056

   PIN n_135073
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 245.57 0.51 245.67 ;
      END
   END n_135073

   PIN n_135074
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 245.77 0.51 245.87 ;
      END
   END n_135074

   PIN n_135796
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 935.455 381.49 935.555 382 ;
      END
   END n_135796

   PIN n_135808
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 541.255 381.49 541.355 382 ;
      END
   END n_135808

   PIN n_136154
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 875.855 381.49 875.955 382 ;
      END
   END n_136154

   PIN n_136201
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 178.655 381.49 178.755 382 ;
      END
   END n_136201

   PIN n_136203
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 188.655 381.49 188.755 382 ;
      END
   END n_136203

   PIN n_136211
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 179.055 381.49 179.155 382 ;
      END
   END n_136211

   PIN n_136212
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 179.255 381.49 179.355 382 ;
      END
   END n_136212

   PIN n_136268
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 419.255 381.49 419.355 382 ;
      END
   END n_136268

   PIN n_136598
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 888.055 381.49 888.155 382 ;
      END
   END n_136598

   PIN n_136630
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 863.455 381.49 863.555 382 ;
      END
   END n_136630

   PIN n_136660
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 54.57 0.51 54.67 ;
      END
   END n_136660

   PIN n_136842
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 54.17 0.51 54.27 ;
      END
   END n_136842

   PIN n_136875
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 582.855 381.49 582.955 382 ;
      END
   END n_136875

   PIN n_136876
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 559.655 381.49 559.755 382 ;
      END
   END n_136876

   PIN n_136887
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 563.255 381.49 563.355 382 ;
      END
   END n_136887

   PIN n_137597
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 827.255 381.49 827.355 382 ;
      END
   END n_137597

   PIN n_14162
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 400.655 381.49 400.755 382 ;
      END
   END n_14162

   PIN n_143063
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 367.57 0.51 367.67 ;
      END
   END n_143063

   PIN n_143692
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 407.655 381.49 407.755 382 ;
      END
   END n_143692

   PIN n_143725
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 269.77 0.51 269.87 ;
      END
   END n_143725

   PIN n_143810
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 479.455 381.49 479.555 382 ;
      END
   END n_143810

   PIN n_143811
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 688.255 381.49 688.355 382 ;
      END
   END n_143811

   PIN n_14682
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 307.37 0.51 307.47 ;
      END
   END n_14682

   PIN n_16033
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 527.455 381.49 527.555 382 ;
      END
   END n_16033

   PIN n_16164
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 359.255 381.49 359.355 382 ;
      END
   END n_16164

   PIN n_16207
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 383.455 381.49 383.555 382 ;
      END
   END n_16207

   PIN n_16296
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 671.055 381.49 671.155 382 ;
      END
   END n_16296

   PIN n_18629
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 755.455 381.49 755.555 382 ;
      END
   END n_18629

   PIN n_18630
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 754.055 381.49 754.155 382 ;
      END
   END n_18630

   PIN n_18732
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 671.455 381.49 671.555 382 ;
      END
   END n_18732

   PIN n_18908
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 119.455 381.49 119.555 382 ;
      END
   END n_18908

   PIN n_18997
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 527.255 381.49 527.355 382 ;
      END
   END n_18997

   PIN n_19022
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 755.255 381.49 755.355 382 ;
      END
   END n_19022

   PIN n_19642
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 24.255 381.49 24.355 382 ;
      END
   END n_19642

   PIN n_20025
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 383.655 381.49 383.755 382 ;
      END
   END n_20025

   PIN n_20054
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 343.57 0.51 343.67 ;
      END
   END n_20054

   PIN n_20260
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 647.055 381.49 647.155 382 ;
      END
   END n_20260

   PIN n_20282
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 419.255 381.49 419.355 382 ;
      END
   END n_20282

   PIN n_20329
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 700.655 381.49 700.755 382 ;
      END
   END n_20329

   PIN n_20334
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 575.055 381.49 575.155 382 ;
      END
   END n_20334

   PIN n_20442
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 635.055 381.49 635.155 382 ;
      END
   END n_20442

   PIN n_20443
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 635.255 381.49 635.355 382 ;
      END
   END n_20443

   PIN n_20690
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 635.455 381.49 635.555 382 ;
      END
   END n_20690

   PIN n_20855
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 887.855 381.49 887.955 382 ;
      END
   END n_20855

   PIN n_20865
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 719.055 381.49 719.155 382 ;
      END
   END n_20865

   PIN n_20867
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 430.855 381.49 430.955 382 ;
      END
   END n_20867

   PIN n_20880
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 407.255 381.49 407.355 382 ;
      END
   END n_20880

   PIN n_21104
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 578.855 381.49 578.955 382 ;
      END
   END n_21104

   PIN n_21252
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 575.855 381.49 575.955 382 ;
      END
   END n_21252

   PIN n_21408
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 659.455 381.49 659.555 382 ;
      END
   END n_21408

   PIN n_21512
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 211.055 381.49 211.155 382 ;
      END
   END n_21512

   PIN n_21514
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 211.855 381.49 211.955 382 ;
      END
   END n_21514

   PIN n_21917
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 978.845 367.97 979.355 368.07 ;
      END
   END n_21917

   PIN n_22013
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 659.055 381.49 659.155 382 ;
      END
   END n_22013

   PIN n_22014
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 659.255 381.49 659.355 382 ;
      END
   END n_22014

   PIN n_22238
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 248.255 381.49 248.355 382 ;
      END
   END n_22238

   PIN n_22308
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 647.255 381.49 647.355 382 ;
      END
   END n_22308

   PIN n_22322
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 647.655 381.49 647.755 382 ;
      END
   END n_22322

   PIN n_22555
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 611.255 381.49 611.355 382 ;
      END
   END n_22555

   PIN n_22556
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 621.055 381.49 621.155 382 ;
      END
   END n_22556

   PIN n_22569
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 575.655 381.49 575.755 382 ;
      END
   END n_22569

   PIN n_22576
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 575.255 381.49 575.355 382 ;
      END
   END n_22576

   PIN n_23134
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 718.055 381.49 718.155 382 ;
      END
   END n_23134

   PIN n_23144
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 695.055 381.49 695.155 382 ;
      END
   END n_23144

   PIN n_23481
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 624.455 381.49 624.555 382 ;
      END
   END n_23481

   PIN n_23793
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 443.455 381.49 443.555 382 ;
      END
   END n_23793

   PIN n_23795
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 443.455 381.49 443.555 382 ;
      END
   END n_23795

   PIN n_24123
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 642.055 381.49 642.155 382 ;
      END
   END n_24123

   PIN n_24149
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 691.655 381.49 691.755 382 ;
      END
   END n_24149

   PIN n_24687
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 612.055 381.49 612.155 382 ;
      END
   END n_24687

   PIN n_24724
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 503.255 381.49 503.355 382 ;
      END
   END n_24724

   PIN n_24767
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 695.455 381.49 695.555 382 ;
      END
   END n_24767

   PIN n_24775
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 776.655 381.49 776.755 382 ;
      END
   END n_24775

   PIN n_24776
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 689.455 381.49 689.555 382 ;
      END
   END n_24776

   PIN n_24781
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 515.255 381.49 515.355 382 ;
      END
   END n_24781

   PIN n_25313
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 689.255 381.49 689.355 382 ;
      END
   END n_25313

   PIN n_25456
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 12.455 381.49 12.555 382 ;
      END
   END n_25456

   PIN n_26039
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 599.455 381.49 599.555 382 ;
      END
   END n_26039

   PIN n_26051
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 435.655 381.49 435.755 382 ;
      END
   END n_26051

   PIN n_27859
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 342.37 979.355 342.47 ;
      END
   END n_27859

   PIN n_3190
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 343.77 0.51 343.87 ;
      END
   END n_3190

   PIN n_32795
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 131.455 381.49 131.555 382 ;
      END
   END n_32795

   PIN n_33263
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 947.255 381.49 947.355 382 ;
      END
   END n_33263

   PIN n_3333
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 366.57 0.51 366.67 ;
      END
   END n_3333

   PIN n_33852
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 395.255 381.49 395.355 382 ;
      END
   END n_33852

   PIN n_34115
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 319.37 0.51 319.47 ;
      END
   END n_34115

   PIN n_34197
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 270.655 381.49 270.755 382 ;
      END
   END n_34197

   PIN n_34198
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 263.255 381.49 263.355 382 ;
      END
   END n_34198

   PIN n_34301
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 269.97 0.51 270.07 ;
      END
   END n_34301

   PIN n_34458
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 976.855 381.49 976.955 382 ;
      END
   END n_34458

   PIN n_34462
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 331.17 0.51 331.27 ;
      END
   END n_34462

   PIN n_34463
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 308.17 0.51 308.27 ;
      END
   END n_34463

   PIN n_34772
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 189.055 381.49 189.155 382 ;
      END
   END n_34772

   PIN n_34826
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 735.655 381.49 735.755 382 ;
      END
   END n_34826

   PIN n_34941
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 307.57 0.51 307.67 ;
      END
   END n_34941

   PIN n_35030
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 95.455 381.49 95.555 382 ;
      END
   END n_35030

   PIN n_35071
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 947.455 381.49 947.555 382 ;
      END
   END n_35071

   PIN n_36024
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 959.855 381.49 959.955 382 ;
      END
   END n_36024

   PIN n_3760
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 282.57 0.51 282.67 ;
      END
   END n_3760

   PIN n_5402
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 567.455 381.49 567.555 382 ;
      END
   END n_5402

   PIN n_5571
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 503.455 381.49 503.555 382 ;
      END
   END n_5571

   PIN n_7597
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 755.055 381.49 755.155 382 ;
      END
   END n_7597

   PIN n_7782
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 260.97 0.51 261.07 ;
      END
   END n_7782

   PIN n_7815
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 12.255 381.49 12.355 382 ;
      END
   END n_7815

   PIN n_7857
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 140.97 0.51 141.07 ;
      END
   END n_7857

   PIN n_9933
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal4 ;
             RECT 683.255 381.49 683.355 382 ;
      END
   END n_9933

   PIN FE_OCPN19344_n_142919
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 647.455 381.49 647.555 382 ;
      END
   END FE_OCPN19344_n_142919

   PIN FE_OFN10229_b_2_6_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 266.77 0.51 266.87 ;
      END
   END FE_OFN10229_b_2_6_2

   PIN FE_OFN10255_b_2_4_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 292.855 381.49 292.955 382 ;
      END
   END FE_OFN10255_b_2_4_7

   PIN FE_OFN10258_b_2_4_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 367.97 0.51 368.07 ;
      END
   END FE_OFN10258_b_2_4_5

   PIN FE_OFN10270_b_2_4_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 294.57 0.51 294.67 ;
      END
   END FE_OFN10270_b_2_4_1

   PIN FE_OFN10273_b_2_4_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 36.055 381.49 36.155 382 ;
      END
   END FE_OFN10273_b_2_4_0

   PIN FE_OFN10291_b_2_2_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 112.655 381.49 112.755 382 ;
      END
   END FE_OFN10291_b_2_2_4

   PIN FE_OFN1088_n_20334
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 587.255 381.49 587.355 382 ;
      END
   END FE_OFN1088_n_20334

   PIN FE_OFN1106_n_19671
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 654.855 381.49 654.955 382 ;
      END
   END FE_OFN1106_n_19671

   PIN FE_OFN11336_n_143645
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 282.17 0.51 282.27 ;
      END
   END FE_OFN11336_n_143645

   PIN FE_OFN11351_n_140257
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 367.37 0.51 367.47 ;
      END
   END FE_OFN11351_n_140257

   PIN FE_OFN11361_n_143059
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 447.655 381.49 447.755 382 ;
      END
   END FE_OFN11361_n_143059

   PIN FE_OFN11368_n_143045
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 549.255 381.49 549.355 382 ;
      END
   END FE_OFN11368_n_143045

   PIN FE_OFN11370_n_143045
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 419.655 381.49 419.755 382 ;
      END
   END FE_OFN11370_n_143045

   PIN FE_OFN11397_n_140245
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 283.57 0.51 283.67 ;
      END
   END FE_OFN11397_n_140245

   PIN FE_OFN11427_n_142905
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 519.055 381.49 519.155 382 ;
      END
   END FE_OFN11427_n_142905

   PIN FE_OFN11432_n_142919
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 660.855 381.49 660.955 382 ;
      END
   END FE_OFN11432_n_142919

   PIN FE_OFN11590_n_143231
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 23.855 381.49 23.955 382 ;
      END
   END FE_OFN11590_n_143231

   PIN FE_OFN11596_n_112428
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 293.37 0.51 293.47 ;
      END
   END FE_OFN11596_n_112428

   PIN FE_OFN11705_n_142947
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 370.97 0.51 371.07 ;
      END
   END FE_OFN11705_n_142947

   PIN FE_OFN11865_n_143230
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 191.17 0.51 191.27 ;
      END
   END FE_OFN11865_n_143230

   PIN FE_OFN11869_n_143229
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 234.77 0.51 234.87 ;
      END
   END FE_OFN11869_n_143229

   PIN FE_OFN11871_n_143229
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 335.655 381.49 335.755 382 ;
      END
   END FE_OFN11871_n_143229

   PIN FE_OFN11875_n_143227
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 431.655 381.49 431.755 382 ;
      END
   END FE_OFN11875_n_143227

   PIN FE_OFN11889_n_143104
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 304.97 0.51 305.07 ;
      END
   END FE_OFN11889_n_143104

   PIN FE_OFN11896_n_143102
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 275.655 381.49 275.755 382 ;
      END
   END FE_OFN11896_n_143102

   PIN FE_OFN11917_n_143048
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 369.97 0.51 370.07 ;
      END
   END FE_OFN11917_n_143048

   PIN FE_OFN12298_n_111727
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 435.455 381.49 435.555 382 ;
      END
   END FE_OFN12298_n_111727

   PIN FE_OFN12309_n_111875
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 315.605 381.745 315.805 382 ;
      END
   END FE_OFN12309_n_111875

   PIN FE_OFN12318_n_111878
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 294.37 0.51 294.47 ;
      END
   END FE_OFN12318_n_111878

   PIN FE_OFN12322_n_112427
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 330.57 0.51 330.67 ;
      END
   END FE_OFN12322_n_112427

   PIN FE_OFN12325_n_112470
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 24.055 381.49 24.155 382 ;
      END
   END FE_OFN12325_n_112470

   PIN FE_OFN12332_n_137473
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 59.255 381.49 59.355 382 ;
      END
   END FE_OFN12332_n_137473

   PIN FE_OFN12348_n_142991
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 331.655 381.49 331.755 382 ;
      END
   END FE_OFN12348_n_142991

   PIN FE_OFN12350_n_142991
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 267.17 0.51 267.27 ;
      END
   END FE_OFN12350_n_142991

   PIN FE_OFN12378_n_142908
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 47.255 381.49 47.355 382 ;
      END
   END FE_OFN12378_n_142908

   PIN FE_OFN12597_n_111737
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 218.37 0.51 218.47 ;
      END
   END FE_OFN12597_n_111737

   PIN FE_OFN12599_n_111738
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 329.77 0.51 329.87 ;
      END
   END FE_OFN12599_n_111738

   PIN FE_OFN12609_n_112606
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 293.92 0.255 294.12 ;
      END
   END FE_OFN12609_n_112606

   PIN FE_OFN12611_n_112608
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 341.855 381.49 341.955 382 ;
      END
   END FE_OFN12611_n_112608

   PIN FE_OFN12616_n_112689
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 317.77 0.51 317.87 ;
      END
   END FE_OFN12616_n_112689

   PIN FE_OFN12621_n_112690
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 59.455 381.49 59.555 382 ;
      END
   END FE_OFN12621_n_112690

   PIN FE_OFN12627_n_143646
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 257.97 0.51 258.07 ;
      END
   END FE_OFN12627_n_143646

   PIN FE_OFN12655_n_111913
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 266.97 0.51 267.07 ;
      END
   END FE_OFN12655_n_111913

   PIN FE_OFN12715_n_142865
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 827.455 381.49 827.555 382 ;
      END
   END FE_OFN12715_n_142865

   PIN FE_OFN12960_n_111998
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 827.205 381.745 827.405 382 ;
      END
   END FE_OFN12960_n_111998

   PIN FE_OFN12965_n_112000
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 661.455 381.49 661.555 382 ;
      END
   END FE_OFN12965_n_112000

   PIN FE_OFN12970_n_112611
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 683.605 381.745 683.805 382 ;
      END
   END FE_OFN12970_n_112611

   PIN FE_OFN12985_n_112681
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 899.255 381.49 899.355 382 ;
      END
   END FE_OFN12985_n_112681

   PIN FE_OFN13013_n_142950
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 358.77 0.51 358.87 ;
      END
   END FE_OFN13013_n_142950

   PIN FE_OFN13023_n_142949
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 246.37 0.51 246.47 ;
      END
   END FE_OFN13023_n_142949

   PIN FE_OFN13543_n_143609
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 899.455 381.49 899.555 382 ;
      END
   END FE_OFN13543_n_143609

   PIN FE_OFN13547_n_112256
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 706.455 381.49 706.555 382 ;
      END
   END FE_OFN13547_n_112256

   PIN FE_OFN13556_n_143397
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 292.77 0.51 292.87 ;
      END
   END FE_OFN13556_n_143397

   PIN FE_OFN13659_n_112318
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 851.455 381.49 851.555 382 ;
      END
   END FE_OFN13659_n_112318

   PIN FE_OFN13700_n_143384
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 923.855 381.49 923.955 382 ;
      END
   END FE_OFN13700_n_143384

   PIN FE_OFN13708_n_143383
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 875.655 381.49 875.755 382 ;
      END
   END FE_OFN13708_n_143383

   PIN FE_OFN13818_n_112257
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 887.655 381.49 887.755 382 ;
      END
   END FE_OFN13818_n_112257

   PIN FE_OFN14269_n_140244
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 369.77 0.51 369.87 ;
      END
   END FE_OFN14269_n_140244

   PIN FE_OFN14270_n_140244
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 283.37 0.51 283.47 ;
      END
   END FE_OFN14270_n_140244

   PIN FE_OFN15080_n_19611
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 464.455 381.49 464.555 382 ;
      END
   END FE_OFN15080_n_19611

   PIN FE_OFN15155_n_23384
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 649.255 381.49 649.355 382 ;
      END
   END FE_OFN15155_n_23384

   PIN FE_OFN15251_n_39084
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 974.855 381.49 974.955 382 ;
      END
   END FE_OFN15251_n_39084

   PIN FE_OFN16362_b_2_6_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 281.97 0.51 282.07 ;
      END
   END FE_OFN16362_b_2_6_1

   PIN FE_OFN16770_n_16098
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 743.855 381.49 743.955 382 ;
      END
   END FE_OFN16770_n_16098

   PIN FE_OFN16941_n_135332
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 647.255 381.49 647.355 382 ;
      END
   END FE_OFN16941_n_135332

   PIN FE_OFN17141_n_22815
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 210.57 0.51 210.67 ;
      END
   END FE_OFN17141_n_22815

   PIN FE_OFN17145_n_22232
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 198.37 0.51 198.47 ;
      END
   END FE_OFN17145_n_22232

   PIN FE_OFN17169_n_16270
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 304.77 0.51 304.87 ;
      END
   END FE_OFN17169_n_16270

   PIN FE_OFN17207_n_21410
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 210.37 0.51 210.47 ;
      END
   END FE_OFN17207_n_21410

   PIN FE_OFN17264_n_140245
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 923.655 381.49 923.755 382 ;
      END
   END FE_OFN17264_n_140245

   PIN FE_OFN18602_b_2_6_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 294.17 0.51 294.27 ;
      END
   END FE_OFN18602_b_2_6_0

   PIN FE_OFN18750_n_112550
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 407.055 381.49 407.155 382 ;
      END
   END FE_OFN18750_n_112550

   PIN FE_OFN18809_n_143645
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 664.855 381.49 664.955 382 ;
      END
   END FE_OFN18809_n_143645

   PIN FE_OFN19061_n_21194
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 229.055 381.49 229.155 382 ;
      END
   END FE_OFN19061_n_21194

   PIN FE_OFN2152_n_19668
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 456.055 381.49 456.155 382 ;
      END
   END FE_OFN2152_n_19668

   PIN FE_OFN2159_n_19626
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 395.055 381.49 395.155 382 ;
      END
   END FE_OFN2159_n_19626

   PIN FE_OFN2284_n_19629
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 286.855 381.49 286.955 382 ;
      END
   END FE_OFN2284_n_19629

   PIN FE_OFN3204_n_14458
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 586.455 381.49 586.555 382 ;
      END
   END FE_OFN3204_n_14458

   PIN FE_OFN3244_n_19948
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 275.455 381.49 275.555 382 ;
      END
   END FE_OFN3244_n_19948

   PIN FE_OFN3293_n_8246
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 234.17 0.51 234.27 ;
      END
   END FE_OFN3293_n_8246

   PIN FE_OFN3382_n_14610
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 305.37 0.51 305.47 ;
      END
   END FE_OFN3382_n_14610

   PIN FE_OFN3441_n_12341
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 222.17 0.51 222.27 ;
      END
   END FE_OFN3441_n_12341

   PIN FE_OFN3505_n_12951
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 150.37 0.51 150.47 ;
      END
   END FE_OFN3505_n_12951

   PIN FE_OFN3587_n_142906
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 143.255 381.49 143.355 382 ;
      END
   END FE_OFN3587_n_142906

   PIN FE_OFN3683_n_142948
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 295.77 0.51 295.87 ;
      END
   END FE_OFN3683_n_142948

   PIN FE_OFN3701_n_143060
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 242.77 0.51 242.87 ;
      END
   END FE_OFN3701_n_143060

   PIN FE_OFN3720_n_143241
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 381.055 381.49 381.155 382 ;
      END
   END FE_OFN3720_n_143241

   PIN FE_OFN3726_n_143241
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 281.17 0.51 281.27 ;
      END
   END FE_OFN3726_n_143241

   PIN FE_OFN3737_n_143396
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 318.17 0.51 318.27 ;
      END
   END FE_OFN3737_n_143396

   PIN FE_OFN3743_n_143551
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 257.57 0.51 257.67 ;
      END
   END FE_OFN3743_n_143551

   PIN FE_OFN3751_n_143549
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 316.77 0.51 316.87 ;
      END
   END FE_OFN3751_n_143549

   PIN FE_OFN596_n_8407
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 623.255 381.49 623.355 382 ;
      END
   END FE_OFN596_n_8407

   PIN FE_OFN700_n_22202
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 478.855 381.49 478.955 382 ;
      END
   END FE_OFN700_n_22202

   PIN FE_OFN791_n_19612
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 767.055 381.49 767.155 382 ;
      END
   END FE_OFN791_n_19612

   PIN FE_OFN794_n_20260
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 658.855 381.49 658.955 382 ;
      END
   END FE_OFN794_n_20260

   PIN FE_OFN832_n_22177
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 635.455 381.49 635.555 382 ;
      END
   END FE_OFN832_n_22177

   PIN FE_OFN9231_delay_add_ln34_unr2_unr3_stage2_stallmux_q_15_
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 523.055 381.49 523.155 382 ;
      END
   END FE_OFN9231_delay_add_ln34_unr2_unr3_stage2_stallmux_q_15_

   PIN add_5900_51_n_88
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 815.655 381.49 815.755 382 ;
      END
   END add_5900_51_n_88

   PIN b_0_2_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 979.1 144.72 979.355 144.92 ;
      END
   END b_0_2_0

   PIN b_0_2_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 670.005 381.745 670.205 382 ;
      END
   END b_0_2_1

   PIN b_0_2_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 979.1 97.92 979.355 98.12 ;
      END
   END b_0_2_2

   PIN b_0_2_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 979.1 62.32 979.355 62.52 ;
      END
   END b_0_2_3

   PIN b_0_4_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 696.005 381.745 696.205 382 ;
      END
   END b_0_4_1

   PIN b_0_6_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 979.1 125.32 979.355 125.52 ;
      END
   END b_0_6_0

   PIN b_0_6_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 695.605 381.745 695.805 382 ;
      END
   END b_0_6_1

   PIN b_0_6_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 979.1 39.72 979.355 39.92 ;
      END
   END b_0_6_2

   PIN b_0_6_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 89.77 979.355 89.87 ;
      END
   END b_0_6_5

   PIN b_1_9_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 755.805 381.745 756.005 382 ;
      END
   END b_1_9_0

   PIN b_2_2_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 288.255 0 288.355 0.51 ;
      END
   END b_2_2_0

   PIN b_2_2_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 344.17 0.51 344.27 ;
      END
   END b_2_2_1

   PIN b_2_2_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 142.255 0 142.355 0.51 ;
      END
   END b_2_2_11

   PIN b_2_2_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 359.855 0 359.955 0.51 ;
      END
   END b_2_2_2

   PIN b_2_2_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 351.855 0 351.955 0.51 ;
      END
   END b_2_2_3

   PIN b_2_2_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 344.77 0.51 344.87 ;
      END
   END b_2_2_4

   PIN b_2_2_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 340.77 0.51 340.87 ;
      END
   END b_2_2_5

   PIN b_2_2_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 319.37 0.51 319.47 ;
      END
   END b_2_2_6

   PIN b_2_2_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 331.57 0.51 331.67 ;
      END
   END b_2_2_7

   PIN b_2_2_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 370.17 0.51 370.27 ;
      END
   END b_2_2_8

   PIN b_2_4_0
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 455.655 381.49 455.755 382 ;
      END
   END b_2_4_0

   PIN b_2_4_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 267.17 0.51 267.27 ;
      END
   END b_2_4_1

   PIN b_2_4_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 441.855 381.49 441.955 382 ;
      END
   END b_2_4_11

   PIN b_2_4_12
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 343.97 0.51 344.07 ;
      END
   END b_2_4_12

   PIN b_2_4_13
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 339.655 0 339.755 0.51 ;
      END
   END b_2_4_13

   PIN b_2_4_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 217.455 0 217.555 0.51 ;
      END
   END b_2_4_2

   PIN b_2_4_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 451.855 381.49 451.955 382 ;
      END
   END b_2_4_3

   PIN b_2_4_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 435.255 381.49 435.355 382 ;
      END
   END b_2_4_4

   PIN b_2_4_5
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 274.455 0 274.555 0.51 ;
      END
   END b_2_4_5

   PIN b_2_4_6
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 296.255 0 296.355 0.51 ;
      END
   END b_2_4_6

   PIN b_2_4_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 388.255 381.49 388.355 382 ;
      END
   END b_2_4_7

   PIN b_2_4_8
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 318.97 0.51 319.07 ;
      END
   END b_2_4_8

   PIN b_2_6_1
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 426.455 381.49 426.555 382 ;
      END
   END b_2_6_1

   PIN b_2_6_10
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 431.855 381.49 431.955 382 ;
      END
   END b_2_6_10

   PIN b_2_6_11
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 377.255 381.49 377.355 382 ;
      END
   END b_2_6_11

   PIN b_2_6_12
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 407.455 381.49 407.555 382 ;
      END
   END b_2_6_12

   PIN b_2_6_13
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 294.77 0.51 294.87 ;
      END
   END b_2_6_13

   PIN b_2_6_2
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 415.655 381.49 415.755 382 ;
      END
   END b_2_6_2

   PIN b_2_6_3
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 477.855 381.49 477.955 382 ;
      END
   END b_2_6_3

   PIN b_2_6_4
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 481.655 381.49 481.755 382 ;
      END
   END b_2_6_4

   PIN b_2_6_7
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 501.255 381.49 501.355 382 ;
      END
   END b_2_6_7

   PIN b_2_6_9
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 393.855 0 393.955 0.51 ;
      END
   END b_2_6_9

   PIN ispd_clk
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 641.005 381.745 641.205 382 ;
      END
   END ispd_clk

   PIN mul_4370_72_n_149
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 961.055 381.49 961.155 382 ;
      END
   END mul_4370_72_n_149

   PIN mul_4370_72_n_50
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 803.455 381.49 803.555 382 ;
      END
   END mul_4370_72_n_50

   PIN mul_4370_72_n_66
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 974.655 381.49 974.755 382 ;
      END
   END mul_4370_72_n_66

   PIN mul_4370_72_n_793
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 971.855 381.49 971.955 382 ;
      END
   END mul_4370_72_n_793

   PIN mul_4370_72_n_840
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 960.255 381.49 960.355 382 ;
      END
   END mul_4370_72_n_840

   PIN mul_4377_72_n_106
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 776.455 381.49 776.555 382 ;
      END
   END mul_4377_72_n_106

   PIN mul_4377_72_n_114
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 467.655 381.49 467.755 382 ;
      END
   END mul_4377_72_n_114

   PIN mul_4377_72_n_116
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 719.455 381.49 719.555 382 ;
      END
   END mul_4377_72_n_116

   PIN mul_4665_72_n_244
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 354.17 0.51 354.27 ;
      END
   END mul_4665_72_n_244

   PIN mul_4665_72_n_330
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 366.37 0.51 366.47 ;
      END
   END mul_4665_72_n_330

   PIN mul_4665_72_n_338
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 137.97 0.51 138.07 ;
      END
   END mul_4665_72_n_338

   PIN mul_4665_72_n_339
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 126.17 0.51 126.27 ;
      END
   END mul_4665_72_n_339

   PIN mul_4667_72_n_334
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 318.055 381.49 318.155 382 ;
      END
   END mul_4667_72_n_334

   PIN mul_4667_72_n_340
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 234.17 0.51 234.27 ;
      END
   END mul_4667_72_n_340

   PIN mul_4669_72_n_315
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 318.77 0.51 318.87 ;
      END
   END mul_4669_72_n_315

   PIN mul_4669_72_n_340
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 197.97 0.51 198.07 ;
      END
   END mul_4669_72_n_340

   PIN mul_ln34_unr2_unr2_z_11_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 304.37 0.51 304.47 ;
      END
   END mul_ln34_unr2_unr2_z_11_

   PIN mul_ln34_unr2_unr5_z_13_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 190.97 0.51 191.07 ;
      END
   END mul_ln34_unr2_unr5_z_13_

   PIN mul_ln34_unr2_unr5_z_14_
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 141.17 0.51 141.27 ;
      END
   END mul_ln34_unr2_unr5_z_14_

   PIN n_10106
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 368.17 0.51 368.27 ;
      END
   END n_10106

   PIN n_10396
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 347.255 381.49 347.355 382 ;
      END
   END n_10396

   PIN n_10648
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 491.255 381.49 491.355 382 ;
      END
   END n_10648

   PIN n_10996
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 383.255 381.49 383.355 382 ;
      END
   END n_10996

   PIN n_10998
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 827.055 381.49 827.155 382 ;
      END
   END n_10998

   PIN n_111930
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 699.655 381.49 699.755 382 ;
      END
   END n_111930

   PIN n_112180
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 35.455 381.49 35.555 382 ;
      END
   END n_112180

   PIN n_112566
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 24.655 381.49 24.755 382 ;
      END
   END n_112566

   PIN n_112607
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 47.605 381.745 47.805 382 ;
      END
   END n_112607

   PIN n_112707
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 974.455 381.49 974.555 382 ;
      END
   END n_112707

   PIN n_112826
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 35.255 381.49 35.355 382 ;
      END
   END n_112826

   PIN n_112827
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 35.055 381.49 35.155 382 ;
      END
   END n_112827

   PIN n_112875
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 47.655 381.49 47.755 382 ;
      END
   END n_112875

   PIN n_112887
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 887.455 381.49 887.555 382 ;
      END
   END n_112887

   PIN n_112910
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 976.055 381.49 976.155 382 ;
      END
   END n_112910

   PIN n_112911
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 971.655 381.49 971.755 382 ;
      END
   END n_112911

   PIN n_112930
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 707.055 381.49 707.155 382 ;
      END
   END n_112930

   PIN n_113050
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 923.055 381.49 923.155 382 ;
      END
   END n_113050

   PIN n_113218
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 358.57 0.51 358.67 ;
      END
   END n_113218

   PIN n_113364
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 170.77 979.355 170.87 ;
      END
   END n_113364

   PIN n_113365
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 366.17 979.355 366.27 ;
      END
   END n_113365

   PIN n_113366
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 597.655 381.49 597.755 382 ;
      END
   END n_113366

   PIN n_113426
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 923.655 381.49 923.755 382 ;
      END
   END n_113426

   PIN n_113502
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 11.455 381.49 11.555 382 ;
      END
   END n_113502

   PIN n_113544
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 370.77 0.51 370.87 ;
      END
   END n_113544

   PIN n_113546
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 354.77 0.51 354.87 ;
      END
   END n_113546

   PIN n_113561
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 306.77 0.51 306.87 ;
      END
   END n_113561

   PIN n_113602
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 978.845 330.37 979.355 330.47 ;
      END
   END n_113602

   PIN n_113603
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 166.77 979.355 166.87 ;
      END
   END n_113603

   PIN n_113699
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 293.77 0.51 293.87 ;
      END
   END n_113699

   PIN n_113855
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 23.455 381.49 23.555 382 ;
      END
   END n_113855

   PIN n_113856
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 293.57 0.51 293.67 ;
      END
   END n_113856

   PIN n_113866
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 281.77 0.51 281.87 ;
      END
   END n_113866

   PIN n_113926
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 257.37 0.51 257.47 ;
      END
   END n_113926

   PIN n_113994
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 356.97 0.51 357.07 ;
      END
   END n_113994

   PIN n_114084
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 233.97 0.51 234.07 ;
      END
   END n_114084

   PIN n_114198
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 209.97 0.51 210.07 ;
      END
   END n_114198

   PIN n_114263
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 246.57 0.51 246.67 ;
      END
   END n_114263

   PIN n_114274
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 367.97 0.51 368.07 ;
      END
   END n_114274

   PIN n_114292
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 922.855 381.49 922.955 382 ;
      END
   END n_114292

   PIN n_114416
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 270.17 0.51 270.27 ;
      END
   END n_114416

   PIN n_114432
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 306.57 0.51 306.67 ;
      END
   END n_114432

   PIN n_114581
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 915.455 381.49 915.555 382 ;
      END
   END n_114581

   PIN n_114701
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 329.57 0.51 329.67 ;
      END
   END n_114701

   PIN n_115305
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 366.17 0.51 366.27 ;
      END
   END n_115305

   PIN n_11535
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 347.055 381.49 347.155 382 ;
      END
   END n_11535

   PIN n_115461
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 166.77 0.51 166.87 ;
      END
   END n_115461

   PIN n_115480
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 150.17 0.51 150.27 ;
      END
   END n_115480

   PIN n_115635
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 23.655 381.49 23.755 382 ;
      END
   END n_115635

   PIN n_115636
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 71.255 381.49 71.355 382 ;
      END
   END n_115636

   PIN n_116469
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 23.455 381.49 23.555 382 ;
      END
   END n_116469

   PIN n_117228
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 455.855 381.49 455.955 382 ;
      END
   END n_117228

   PIN n_117236
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 763.855 381.49 763.955 382 ;
      END
   END n_117236

   PIN n_117237
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 974.255 381.49 974.355 382 ;
      END
   END n_117237

   PIN n_117368
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 375.655 381.49 375.755 382 ;
      END
   END n_117368

   PIN n_117402
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 671.055 381.49 671.155 382 ;
      END
   END n_117402

   PIN n_117521
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 34.855 381.49 34.955 382 ;
      END
   END n_117521

   PIN n_118323
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 281.77 0.51 281.87 ;
      END
   END n_118323

   PIN n_119297
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 285.855 381.49 285.955 382 ;
      END
   END n_119297

   PIN n_119298
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 285.255 381.49 285.355 382 ;
      END
   END n_119298

   PIN n_119316
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 34.655 381.49 34.755 382 ;
      END
   END n_119316

   PIN n_119738
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 198.17 0.51 198.27 ;
      END
   END n_119738

   PIN n_119899
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 454.855 381.49 454.955 382 ;
      END
   END n_119899

   PIN n_119933
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 978.845 366.17 979.355 366.27 ;
      END
   END n_119933

   PIN n_119934
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 166.97 979.355 167.07 ;
      END
   END n_119934

   PIN n_119959
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 779.255 381.49 779.355 382 ;
      END
   END n_119959

   PIN n_119983
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 233.77 0.51 233.87 ;
      END
   END n_119983

   PIN n_120078
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 191.255 381.49 191.355 382 ;
      END
   END n_120078

   PIN n_120079
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 191.055 381.49 191.155 382 ;
      END
   END n_120079

   PIN n_120193
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 306.37 979.355 306.47 ;
      END
   END n_120193

   PIN n_120437
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 479.055 381.49 479.155 382 ;
      END
   END n_120437

   PIN n_120635
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 329.37 0.51 329.47 ;
      END
   END n_120635

   PIN n_120746
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 281.97 0.51 282.07 ;
      END
   END n_120746

   PIN n_120996
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 367.77 0.51 367.87 ;
      END
   END n_120996

   PIN n_121285
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 974.055 381.49 974.155 382 ;
      END
   END n_121285

   PIN n_121633
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 771.455 381.49 771.555 382 ;
      END
   END n_121633

   PIN n_121772
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 259.055 381.49 259.155 382 ;
      END
   END n_121772

   PIN n_121803
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 978.845 294.37 979.355 294.47 ;
      END
   END n_121803

   PIN n_121832
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 911.655 381.49 911.755 382 ;
      END
   END n_121832

   PIN n_121834
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 851.255 381.49 851.355 382 ;
      END
   END n_121834

   PIN n_121906
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 114.77 0.51 114.87 ;
      END
   END n_121906

   PIN n_121932
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 839.455 381.49 839.555 382 ;
      END
   END n_121932

   PIN n_121933
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 758.655 381.49 758.755 382 ;
      END
   END n_121933

   PIN n_122107
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 305.97 0.51 306.07 ;
      END
   END n_122107

   PIN n_122555
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 803.255 381.49 803.355 382 ;
      END
   END n_122555

   PIN n_122556
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 815.455 381.49 815.555 382 ;
      END
   END n_122556

   PIN n_12342
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 90.77 0.51 90.87 ;
      END
   END n_12342

   PIN n_123546
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 923.255 381.49 923.355 382 ;
      END
   END n_123546

   PIN n_123558
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 923.455 381.49 923.555 382 ;
      END
   END n_123558

   PIN n_123606
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 342.77 0.51 342.87 ;
      END
   END n_123606

   PIN n_123620
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 839.255 381.49 839.355 382 ;
      END
   END n_123620

   PIN n_123678
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 195.455 381.49 195.555 382 ;
      END
   END n_123678

   PIN n_123759
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 960.855 381.49 960.955 382 ;
      END
   END n_123759

   PIN n_124048
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 283.17 0.51 283.27 ;
      END
   END n_124048

   PIN n_124617
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 282.97 0.51 283.07 ;
      END
   END n_124617

   PIN n_124974
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 330.57 0.51 330.67 ;
      END
   END n_124974

   PIN n_124975
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 330.37 0.51 330.47 ;
      END
   END n_124975

   PIN n_125043
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 683.055 381.49 683.155 382 ;
      END
   END n_125043

   PIN n_125044
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 745.655 381.49 745.755 382 ;
      END
   END n_125044

   PIN n_125081
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 467.455 381.49 467.555 382 ;
      END
   END n_125081

   PIN n_125082
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 467.255 381.49 467.355 382 ;
      END
   END n_125082

   PIN n_125769
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 973.855 381.49 973.955 382 ;
      END
   END n_125769

   PIN n_125781
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 972.855 381.49 972.955 382 ;
      END
   END n_125781

   PIN n_125786
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 975.855 381.49 975.955 382 ;
      END
   END n_125786

   PIN n_12587
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 246.37 0.51 246.47 ;
      END
   END n_12587

   PIN n_126291
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 216.77 979.355 216.87 ;
      END
   END n_126291

   PIN n_126292
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 234.37 979.355 234.47 ;
      END
   END n_126292

   PIN n_126559
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 342.17 979.355 342.27 ;
      END
   END n_126559

   PIN n_126560
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 64.77 979.355 64.87 ;
      END
   END n_126560

   PIN n_12711
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 555.655 381.49 555.755 382 ;
      END
   END n_12711

   PIN n_127736
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 766.255 381.49 766.355 382 ;
      END
   END n_127736

   PIN n_127873
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 971.455 381.49 971.555 382 ;
      END
   END n_127873

   PIN n_127889
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 343.17 0.51 343.27 ;
      END
   END n_127889

   PIN n_127896
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 767.255 381.49 767.355 382 ;
      END
   END n_127896

   PIN n_127954
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 972.655 381.49 972.755 382 ;
      END
   END n_127954

   PIN n_128003
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 295.37 0.51 295.47 ;
      END
   END n_128003

   PIN n_128515
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 803.255 381.49 803.355 382 ;
      END
   END n_128515

   PIN n_128527
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 735.255 381.49 735.355 382 ;
      END
   END n_128527

   PIN n_128971
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 319.17 0.51 319.27 ;
      END
   END n_128971

   PIN n_128973
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 318.97 0.51 319.07 ;
      END
   END n_128973

   PIN n_129101
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 280.97 0.51 281.07 ;
      END
   END n_129101

   PIN n_12956
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 400.855 381.49 400.955 382 ;
      END
   END n_12956

   PIN n_130212
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 293.57 0.51 293.67 ;
      END
   END n_130212

   PIN n_130734
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 305.17 0.51 305.27 ;
      END
   END n_130734

   PIN n_131017
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 240.77 0.51 240.87 ;
      END
   END n_131017

   PIN n_131069
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 203.255 381.49 203.355 382 ;
      END
   END n_131069

   PIN n_131070
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 203.455 381.49 203.555 382 ;
      END
   END n_131070

   PIN n_131430
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 64.97 0.51 65.07 ;
      END
   END n_131430

   PIN n_131641
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 227.455 381.49 227.555 382 ;
      END
   END n_131641

   PIN n_132252
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 345.855 381.49 345.955 382 ;
      END
   END n_132252

   PIN n_132417
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 960.055 381.49 960.155 382 ;
      END
   END n_132417

   PIN n_132434
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 959.855 381.49 959.955 382 ;
      END
   END n_132434

   PIN n_132699
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 369.57 0.51 369.67 ;
      END
   END n_132699

   PIN n_132892
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 369.37 0.51 369.47 ;
      END
   END n_132892

   PIN n_132893
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 369.17 0.51 369.27 ;
      END
   END n_132893

   PIN n_132961
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 143.455 381.49 143.555 382 ;
      END
   END n_132961

   PIN n_132962
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 143.255 381.49 143.355 382 ;
      END
   END n_132962

   PIN n_133201
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 358.37 0.51 358.47 ;
      END
   END n_133201

   PIN n_133273
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 260.57 0.51 260.67 ;
      END
   END n_133273

   PIN n_133287
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 260.77 0.51 260.87 ;
      END
   END n_133287

   PIN n_133303
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 347.655 381.49 347.755 382 ;
      END
   END n_133303

   PIN n_133427
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 83.055 381.49 83.155 382 ;
      END
   END n_133427

   PIN n_133450
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 960.655 381.49 960.755 382 ;
      END
   END n_133450

   PIN n_133506
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 176.37 0.51 176.47 ;
      END
   END n_133506

   PIN n_133858
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 899.255 381.49 899.355 382 ;
      END
   END n_133858

   PIN n_133861
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 317.77 0.51 317.87 ;
      END
   END n_133861

   PIN n_133939
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 960.455 381.49 960.555 382 ;
      END
   END n_133939

   PIN n_134000
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 260.37 0.51 260.47 ;
      END
   END n_134000

   PIN n_134256
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 947.255 381.49 947.355 382 ;
      END
   END n_134256

   PIN n_134400
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 304.57 0.51 304.67 ;
      END
   END n_134400

   PIN n_134706
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 887.255 381.49 887.355 382 ;
      END
   END n_134706

   PIN n_134708
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 529.655 381.49 529.755 382 ;
      END
   END n_134708

   PIN n_134825
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 269.57 0.51 269.67 ;
      END
   END n_134825

   PIN n_134924
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 317.17 0.51 317.27 ;
      END
   END n_134924

   PIN n_134992
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 24.255 381.49 24.355 382 ;
      END
   END n_134992

   PIN n_135296
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 875.455 381.49 875.555 382 ;
      END
   END n_135296

   PIN n_135308
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 269.37 0.51 269.47 ;
      END
   END n_135308

   PIN n_135370
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 551.055 381.49 551.155 382 ;
      END
   END n_135370

   PIN n_135438
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 341.37 0.51 341.47 ;
      END
   END n_135438

   PIN n_135524
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 281.57 0.51 281.67 ;
      END
   END n_135524

   PIN n_135528
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 169.855 381.49 169.955 382 ;
      END
   END n_135528

   PIN n_135704
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 972.455 381.49 972.555 382 ;
      END
   END n_135704

   PIN n_135859
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 140.77 0.51 140.87 ;
      END
   END n_135859

   PIN n_135947
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 167.455 381.49 167.555 382 ;
      END
   END n_135947

   PIN n_135957
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 188.055 381.49 188.155 382 ;
      END
   END n_135957

   PIN n_136054
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 959.655 381.49 959.755 382 ;
      END
   END n_136054

   PIN n_136077
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 923.255 381.49 923.355 382 ;
      END
   END n_136077

   PIN n_136078
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 791.455 381.49 791.555 382 ;
      END
   END n_136078

   PIN n_136095
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 540.055 381.49 540.155 382 ;
      END
   END n_136095

   PIN n_136295
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 887.455 381.49 887.555 382 ;
      END
   END n_136295

   PIN n_136526
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 179.455 381.49 179.555 382 ;
      END
   END n_136526

   PIN n_136551
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 875.455 381.49 875.555 382 ;
      END
   END n_136551

   PIN n_136552
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 875.255 381.49 875.355 382 ;
      END
   END n_136552

   PIN n_136555
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 863.455 381.49 863.555 382 ;
      END
   END n_136555

   PIN n_136727
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 855.655 381.49 855.755 382 ;
      END
   END n_136727

   PIN n_136754
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 875.055 381.49 875.155 382 ;
      END
   END n_136754

   PIN n_136800
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 959.455 381.49 959.555 382 ;
      END
   END n_136800

   PIN n_136807
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 911.455 381.49 911.555 382 ;
      END
   END n_136807

   PIN n_136808
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 911.255 381.49 911.355 382 ;
      END
   END n_136808

   PIN n_136922
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 569.055 381.49 569.155 382 ;
      END
   END n_136922

   PIN n_136951
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 886.855 381.49 886.955 382 ;
      END
   END n_136951

   PIN n_137637
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 179.455 381.49 179.555 382 ;
      END
   END n_137637

   PIN n_137650
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 863.255 381.49 863.355 382 ;
      END
   END n_137650

   PIN n_14254
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 107.055 381.49 107.155 382 ;
      END
   END n_14254

   PIN n_14255
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 82.855 381.49 82.955 382 ;
      END
   END n_14255

   PIN n_14287
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 209.77 0.51 209.87 ;
      END
   END n_14287

   PIN n_142906
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 344.57 0.51 344.67 ;
      END
   END n_142906

   PIN n_142909
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 367.17 0.51 367.27 ;
      END
   END n_142909

   PIN n_143255
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 714.455 381.49 714.555 382 ;
      END
   END n_143255

   PIN n_143341
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 454.655 381.49 454.755 382 ;
      END
   END n_143341

   PIN n_143721
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 316.97 0.51 317.07 ;
      END
   END n_143721

   PIN n_143848
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 221.97 0.51 222.07 ;
      END
   END n_143848

   PIN n_144235
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 319.17 0.51 319.27 ;
      END
   END n_144235

   PIN n_144239
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 64.77 0.51 64.87 ;
      END
   END n_144239

   PIN n_144318
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 210.37 0.51 210.47 ;
      END
   END n_144318

   PIN n_14452
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 815.255 381.49 815.355 382 ;
      END
   END n_14452

   PIN n_14557
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 38.77 0.51 38.87 ;
      END
   END n_14557

   PIN n_14659
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 670.855 381.49 670.955 382 ;
      END
   END n_14659

   PIN n_14956
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 686.055 381.49 686.155 382 ;
      END
   END n_14956

   PIN n_15206
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 330.37 0.51 330.47 ;
      END
   END n_15206

   PIN n_15462
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 685.655 381.49 685.755 382 ;
      END
   END n_15462

   PIN n_16034
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 757.455 381.49 757.555 382 ;
      END
   END n_16034

   PIN n_16166
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 341.57 0.51 341.67 ;
      END
   END n_16166

   PIN n_16255
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 551.455 381.49 551.555 382 ;
      END
   END n_16255

   PIN n_16364
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 24.455 381.49 24.555 382 ;
      END
   END n_16364

   PIN n_16366
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 887.255 381.49 887.355 382 ;
      END
   END n_16366

   PIN n_16486
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 292.97 0.51 293.07 ;
      END
   END n_16486

   PIN n_17494
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 242.97 0.51 243.07 ;
      END
   END n_17494

   PIN n_17661
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 357.57 0.51 357.67 ;
      END
   END n_17661

   PIN n_17796
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 357.37 0.51 357.47 ;
      END
   END n_17796

   PIN n_18022
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 743.655 381.49 743.755 382 ;
      END
   END n_18022

   PIN n_18128
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 555.455 381.49 555.555 382 ;
      END
   END n_18128

   PIN n_18199
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 701.855 381.49 701.955 382 ;
      END
   END n_18199

   PIN n_18869
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 455.655 381.49 455.755 382 ;
      END
   END n_18869

   PIN n_18877
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 887.055 381.49 887.155 382 ;
      END
   END n_18877

   PIN n_18948
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 551.255 381.49 551.355 382 ;
      END
   END n_18948

   PIN n_18989
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 456.255 381.49 456.355 382 ;
      END
   END n_18989

   PIN n_19350
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 754.655 381.49 754.755 382 ;
      END
   END n_19350

   PIN n_19373
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 574.055 381.49 574.155 382 ;
      END
   END n_19373

   PIN n_19607
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 419.455 381.49 419.555 382 ;
      END
   END n_19607

   PIN n_19629
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 539.455 381.49 539.555 382 ;
      END
   END n_19629

   PIN n_19657
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 539.255 381.49 539.355 382 ;
      END
   END n_19657

   PIN n_19681
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 443.055 381.49 443.155 382 ;
      END
   END n_19681

   PIN n_19914
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 395.455 381.49 395.555 382 ;
      END
   END n_19914

   PIN n_19971
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 539.255 381.49 539.355 382 ;
      END
   END n_19971

   PIN n_19983
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 306.57 0.51 306.67 ;
      END
   END n_19983

   PIN n_20006
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 407.655 381.49 407.755 382 ;
      END
   END n_20006

   PIN n_20085
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 587.255 381.49 587.355 382 ;
      END
   END n_20085

   PIN n_20090
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 592.655 381.49 592.755 382 ;
      END
   END n_20090

   PIN n_20275
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 887.055 381.49 887.155 382 ;
      END
   END n_20275

   PIN n_20413
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 275.055 381.49 275.155 382 ;
      END
   END n_20413

   PIN n_20639
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 305.57 0.51 305.67 ;
      END
   END n_20639

   PIN n_20872
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 491.455 381.49 491.555 382 ;
      END
   END n_20872

   PIN n_21109
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 306.37 0.51 306.47 ;
      END
   END n_21109

   PIN n_21129
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 753.855 381.49 753.955 382 ;
      END
   END n_21129

   PIN n_21187
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 355.77 0.51 355.87 ;
      END
   END n_21187

   PIN n_21414
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 621.255 381.49 621.355 382 ;
      END
   END n_21414

   PIN n_21637
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 359.255 381.49 359.355 382 ;
      END
   END n_21637

   PIN n_21657
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 467.255 381.49 467.355 382 ;
      END
   END n_21657

   PIN n_21680
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 615.455 381.49 615.555 382 ;
      END
   END n_21680

   PIN n_21703
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 356.77 0.51 356.87 ;
      END
   END n_21703

   PIN n_21708
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 307.77 0.51 307.87 ;
      END
   END n_21708

   PIN n_21709
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 456.055 381.49 456.155 382 ;
      END
   END n_21709

   PIN n_21771
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 239.455 381.49 239.555 382 ;
      END
   END n_21771

   PIN n_21806
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 247.655 381.49 247.755 382 ;
      END
   END n_21806

   PIN n_22159
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 239.455 381.49 239.555 382 ;
      END
   END n_22159

   PIN n_22224
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 342.17 0.51 342.27 ;
      END
   END n_22224

   PIN n_22231
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 292.77 0.51 292.87 ;
      END
   END n_22231

   PIN n_22243
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 286.055 381.49 286.155 382 ;
      END
   END n_22243

   PIN n_22795
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 330.17 0.51 330.27 ;
      END
   END n_22795

   PIN n_22822
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 455.455 381.49 455.555 382 ;
      END
   END n_22822

   PIN n_23394
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 669.655 381.49 669.755 382 ;
      END
   END n_23394

   PIN n_23404
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 443.655 381.49 443.755 382 ;
      END
   END n_23404

   PIN n_23460
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 611.055 381.49 611.155 382 ;
      END
   END n_23460

   PIN n_24014
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 383.055 381.49 383.155 382 ;
      END
   END n_24014

   PIN n_24074
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 717.055 381.49 717.155 382 ;
      END
   END n_24074

   PIN n_24124
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 702.255 381.49 702.355 382 ;
      END
   END n_24124

   PIN n_24141
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 682.855 381.49 682.955 382 ;
      END
   END n_24141

   PIN n_24645
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 395.455 381.49 395.555 382 ;
      END
   END n_24645

   PIN n_24723
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 347.255 381.49 347.355 382 ;
      END
   END n_24723

   PIN n_24774
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 776.655 381.49 776.755 382 ;
      END
   END n_24774

   PIN n_25460
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 354.57 0.51 354.67 ;
      END
   END n_25460

   PIN n_26642
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 648.855 381.49 648.955 382 ;
      END
   END n_26642

   PIN n_28886
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 923.455 381.49 923.555 382 ;
      END
   END n_28886

   PIN n_31620
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 71.655 381.49 71.755 382 ;
      END
   END n_31620

   PIN n_31789
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 354.57 979.355 354.67 ;
      END
   END n_31789

   PIN n_32482
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 258.37 979.355 258.47 ;
      END
   END n_32482

   PIN n_32483
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 978.845 330.37 979.355 330.47 ;
      END
   END n_32483

   PIN n_32637
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 366.77 0.51 366.87 ;
      END
   END n_32637

   PIN n_32919
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 47.455 381.49 47.555 382 ;
      END
   END n_32919

   PIN n_32920
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 47.055 381.49 47.155 382 ;
      END
   END n_32920

   PIN n_32934
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 268.97 0.51 269.07 ;
      END
   END n_32934

   PIN n_33003
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 269.17 0.51 269.27 ;
      END
   END n_33003

   PIN n_33076
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 227.255 381.49 227.355 382 ;
      END
   END n_33076

   PIN n_33077
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 403.255 381.49 403.355 382 ;
      END
   END n_33077

   PIN n_33264
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 899.055 381.49 899.155 382 ;
      END
   END n_33264

   PIN n_33268
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 972.255 381.49 972.355 382 ;
      END
   END n_33268

   PIN n_33473
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 259.37 0.51 259.47 ;
      END
   END n_33473

   PIN n_33483
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 318.77 0.51 318.87 ;
      END
   END n_33483

   PIN n_33921
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 317.57 0.51 317.67 ;
      END
   END n_33921

   PIN n_33953
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 131.255 381.49 131.355 382 ;
      END
   END n_33953

   PIN n_34366
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 131.655 381.49 131.755 382 ;
      END
   END n_34366

   PIN n_34708
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 366.17 0.51 366.27 ;
      END
   END n_34708

   PIN n_34720
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 387.655 381.49 387.755 382 ;
      END
   END n_34720

   PIN n_35010
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 63.055 381.49 63.155 382 ;
      END
   END n_35010

   PIN n_35016
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 191.455 381.49 191.555 382 ;
      END
   END n_35016

   PIN n_35029
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 103.855 381.49 103.955 382 ;
      END
   END n_35029

   PIN n_35032
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 106.455 381.49 106.555 382 ;
      END
   END n_35032

   PIN n_35033
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 107.455 381.49 107.555 382 ;
      END
   END n_35033

   PIN n_35070
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 911.055 381.49 911.155 382 ;
      END
   END n_35070

   PIN n_35739
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 143.655 381.49 143.755 382 ;
      END
   END n_35739

   PIN n_36449
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 54.37 0.51 54.47 ;
      END
   END n_36449

   PIN n_3711
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 317.37 0.51 317.47 ;
      END
   END n_3711

   PIN n_3868
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 269.57 0.51 269.67 ;
      END
   END n_3868

   PIN n_39087
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 367.57 0.51 367.67 ;
      END
   END n_39087

   PIN n_39278
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 295.57 0.51 295.67 ;
      END
   END n_39278

   PIN n_3945
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 972.055 381.49 972.155 382 ;
      END
   END n_3945

   PIN n_39484
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 368.97 0.51 369.07 ;
      END
   END n_39484

   PIN n_39485
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 368.77 0.51 368.87 ;
      END
   END n_39485

   PIN n_41711
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 851.655 381.49 851.755 382 ;
      END
   END n_41711

   PIN n_4199
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 190.855 381.49 190.955 382 ;
      END
   END n_4199

   PIN n_5193
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 251.055 381.49 251.155 382 ;
      END
   END n_5193

   PIN n_5196
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 317.97 0.51 318.07 ;
      END
   END n_5196

   PIN n_5565
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 203.055 381.49 203.155 382 ;
      END
   END n_5565

   PIN n_6522
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 283.77 0.51 283.87 ;
      END
   END n_6522

   PIN n_6525
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 331.37 0.51 331.47 ;
      END
   END n_6525

   PIN n_6542
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 340.57 0.51 340.67 ;
      END
   END n_6542

   PIN n_6619
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 346.855 381.49 346.955 382 ;
      END
   END n_6619

   PIN n_6693
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 166.97 0.51 167.07 ;
      END
   END n_6693

   PIN n_6697
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 245.37 0.51 245.47 ;
      END
   END n_6697

   PIN n_6937
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 198.57 0.51 198.67 ;
      END
   END n_6937

   PIN n_7273
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 551.055 381.49 551.155 382 ;
      END
   END n_7273

   PIN n_8119
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 317.37 0.51 317.47 ;
      END
   END n_8119

   PIN n_8247
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 194.77 0.51 194.87 ;
      END
   END n_8247

   PIN n_8343
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 210.77 0.51 210.87 ;
      END
   END n_8343

   PIN n_8387
      DIRECTION INPUT ;
      PORT 
         LAYER metal4 ;
             RECT 407.055 381.49 407.155 382 ;
      END
   END n_8387

   PIN n_890
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 282.77 0.51 282.87 ;
      END
   END n_890

   PIN n_912
      DIRECTION INPUT ;
      PORT 
         LAYER metal5 ;
             RECT 0 126.37 0.51 126.47 ;
      END
   END n_912

   PIN n_9132
      DIRECTION INPUT ;
      PORT 
         LAYER metal2 ;
             RECT 686.255 381.49 686.355 382 ;
      END
   END n_9132

   PIN n_9798
      DIRECTION INPUT ;
      PORT 
         LAYER metal3 ;
             RECT 0 174.17 0.51 174.27 ;
      END
   END n_9798

   OBS
      LAYER via1 ;
         RECT 0 0 979.355 382 ;
      LAYER metal5 ;
         RECT 0.63 0.00 978.725 382 ;
      LAYER metal4 ;
         RECT 0.00 0.63 979.355 381.37 ;
      LAYER metal3 ;
         RECT 0.63 0.00 978.725 382 ;
      LAYER metal2 ;
         RECT 0.00 0.63 979.355 381.37 ;
      LAYER metal1 ;
         RECT 0.00 0.00 979.355 382 ;
   END
END h0

MACRO ms00f80
   CLASS CORE ;
   FOREIGN ms00f80 ;
   ORIGIN 0 0 ;
   SIZE 1.6 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN ck
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.45 0.5 0.55 1.5 ;
      END
   END ck

   PIN d
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 1.05 0.5 1.15 1.5 ;
      END
   END d

END ms00f80

MACRO in01f01
   CLASS CORE ;
   FOREIGN in01f01 ;
   ORIGIN 0 0 ;
   SIZE 0.4 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

END in01f01

MACRO no02f01
   CLASS CORE ;
   FOREIGN no02f01 ;
   ORIGIN 0 0 ;
   SIZE 0.8 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.45 0.5 0.55 1.5 ;
      END
   END b

END no02f01

MACRO na02f01
   CLASS CORE ;
   FOREIGN na02f01 ;
   ORIGIN 0 0 ;
   SIZE 0.8 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.45 0.5 0.55 1.5 ;
      END
   END b

END na02f01

MACRO oa22f01
   CLASS CORE ;
   FOREIGN oa22f01 ;
   ORIGIN 0 0 ;
   SIZE 1.6 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal2 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.65 0.5 0.75 1.5 ;
      END
   END b

   PIN c
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.85 0.5 0.95 1.5 ;
      END
   END c

   PIN d
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 1.25 0.5 1.35 1.5 ;
      END
   END d

END oa22f01

MACRO ao22s01
   CLASS CORE ;
   FOREIGN ao22s01 ;
   ORIGIN 0 0 ;
   SIZE 1.6 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.65 0.5 0.75 1.5 ;
      END
   END b

   PIN c
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.85 0.5 0.95 1.5 ;
      END
   END c

   PIN d
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 1.25 0.5 1.35 1.5 ;
      END
   END d

END ao22s01

MACRO ao12f01
   CLASS CORE ;
   FOREIGN ao12f01 ;
   ORIGIN 0 0 ;
   SIZE 1.2 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.65 0.5 0.75 1.5 ;
      END
   END b

   PIN c
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.85 0.5 0.95 1.5 ;
      END
   END c

END ao12f01

MACRO oa12f01
   CLASS CORE ;
   FOREIGN oa12f01 ;
   ORIGIN 0 0 ;
   SIZE 1.2 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.65 0.5 0.75 1.5 ;
      END
   END b

   PIN c
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.85 0.5 0.95 1.5 ;
      END
   END c

END oa12f01

MACRO no03m01
   CLASS CORE ;
   FOREIGN no03m01 ;
   ORIGIN 0 0 ;
   SIZE 1.2 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.65 0.5 0.75 1.5 ;
      END
   END b

   PIN c
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.85 0.5 0.95 1.5 ;
      END
   END c

END no03m01

MACRO no04s01
   CLASS CORE ;
   FOREIGN no04s01 ;
   ORIGIN 0 0 ;
   SIZE 1.6 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.65 0.5 0.75 1.5 ;
      END
   END b

   PIN c
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.85 0.5 0.95 1.5 ;
      END
   END c

   PIN d
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 1.25 0.5 1.35 1.5 ;
      END
   END d

END no04s01

MACRO na04m01
   CLASS CORE ;
   FOREIGN na04m01 ;
   ORIGIN 0 0 ;
   SIZE 1.6 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.65 0.5 0.75 1.5 ;
      END
   END b

   PIN c
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.85 0.5 0.95 1.5 ;
      END
   END c

   PIN d
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 1.25 0.5 1.35 1.5 ;
      END
   END d

END na04m01

MACRO na02m01
   CLASS CORE ;
   FOREIGN na02m01 ;
   ORIGIN 0 0 ;
   SIZE 0.8 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.45 0.5 0.55 1.5 ;
      END
   END b

END na02m01

MACRO na03f01
   CLASS CORE ;
   FOREIGN na03f01 ;
   ORIGIN 0 0 ;
   SIZE 1.2 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.65 0.5 0.75 1.5 ;
      END
   END b

   PIN c
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.85 0.5 0.95 1.5 ;
      END
   END c

END na03f01

MACRO oa22m01
   CLASS CORE ;
   FOREIGN oa22m01 ;
   ORIGIN 0 0 ;
   SIZE 1.6 BY 2 ;
   SYMMETRY X Y R90 ;
   SITE core ;
   PIN o
      DIRECTION OUTPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.05 0.5 0.15 1.5 ;
      END
   END o

   PIN a
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.25 0.5 0.35 1.5 ;
      END
   END a

   PIN b
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.65 0.5 0.75 1.5 ;
      END
   END b

   PIN c
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 0.85 0.5 0.95 1.5 ;
      END
   END c

   PIN d
      DIRECTION INPUT ;
      PORT 
         LAYER metal1 ;
             RECT 1.25 0.5 1.35 1.5 ;
      END
   END d

END oa22m01

END LIBRARY
