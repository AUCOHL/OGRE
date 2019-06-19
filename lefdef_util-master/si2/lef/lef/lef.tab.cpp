/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         lefyyparse
#define yylex           lefyylex
#define yyerror         lefyyerror
#define yydebug         lefyydebug
#define yynerrs         lefyynerrs

#define yylval          lefyylval
#define yychar          lefyychar

/* Copy the first part of user declarations.  */
#line 52 "lef.y" /* yacc.c:339  */

#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "lex.h"
#include "lefiDefs.hpp"
#include "lefiUser.hpp"
#include "lefiUtil.hpp"

#include "lefrData.hpp"
#include "lefrCallBacks.hpp"
#include "lefrSettings.hpp"

BEGIN_LEFDEF_PARSER_NAMESPACE

#define LYPROP_ECAP "EDGE_CAPACITANCE"

#define YYINITDEPTH 10000  // pcr 640902 - initialize the yystacksize to 300 
                           // this may need to increase in a design gets 
                           // larger and a polygon has around 300 sizes 
                           // 11/21/2003 - incrreased to 500, design from 
                           // Artisan is greater than 300, need to find a 
                           // way to dynamically increase the size 
                           // 2/10/2004 - increased to 1000 for pcr 686073 
                           // 3/22/2004 - increased to 2000 for pcr 695879 
                           // 9/29/2004 - double the size for pcr 746865 
                           // tried to overwrite the yyoverflow definition 
                           // it is impossible due to the union structure 
                           // 10/03/2006 - increased to 10000 for pcr 913695 

#define YYMAXDEPTH 300000  // 1/24/2008 - increased from 150000 
                           // This value has to be greater than YYINITDEPTH 


// Macro to describe how we handle a callback.
// If the function was set then call it.
// If the function returns non zero then there was an error
// so call the error routine and exit.
#define CALLBACK(func, typ, data) \
    if (!lefData->lef_errors) { \
      if (func) { \
        if ((lefData->lefRetVal = (*func)(typ, data, lefSettings->UserData)) == 0) { \
        } else { \
          return lefData->lefRetVal; \
        } \
      } \
    }

#define CHKERR() \
    if (lefData->lef_errors > 20) { \
      lefError(1020, "Too many syntax errors."); \
      lefData->lef_errors = 0; \
      return 1; \
    }

// **********************************************************************
// **********************************************************************

#define C_EQ 0
#define C_NE 1
#define C_LT 2
#define C_LE 3
#define C_GT 4
#define C_GE 5


int comp_str(char *s1, int op, char *s2)
{
    int k = strcmp(s1, s2);
    switch (op) {
        case C_EQ: return k == 0;
        case C_NE: return k != 0;
        case C_GT: return k >  0;
        case C_GE: return k >= 0;
        case C_LT: return k <  0;
        case C_LE: return k <= 0;
        }
    return 0;
}
int comp_num(double s1, int op, double s2)
{
    double k = s1 - s2;
    switch (op) {
        case C_EQ: return k == 0;
        case C_NE: return k != 0;
        case C_GT: return k >  0;
        case C_GE: return k >= 0;
        case C_LT: return k <  0;
        case C_LE: return k <= 0;
        }
    return 0;
}

int validNum(int values) {
    switch (values) {
        case 100:
        case 200:
        case 1000:
        case 2000:
             return 1;
        case 400:
        case 800:
        case 4000:
        case 8000:
        case 10000:
        case 20000:
             if (lefData->versionNum < 5.6) {
                if (lefCallbacks->UnitsCbk) {
                  if (lefData->unitsWarnings++ < lefSettings->UnitsWarnings) {
                    lefData->outMsg = (char*)lefMalloc(10000);
                    sprintf (lefData->outMsg,
                       "Error found when processing LEF file '%s'\nUnit %d is a version 5.6 or later syntax\nYour lef file is defined with version %g.",
                    lefData->lefrFileName, values, lefData->versionNum);
                    lefError(1501, lefData->outMsg);
                    lefFree(lefData->outMsg);
                  }
                }
                return 0;
             } else {
                return 1;
             }        
    }
    if (lefData->unitsWarnings++ < lefSettings->UnitsWarnings) {
       lefData->outMsg = (char*)lefMalloc(10000);
       sprintf (lefData->outMsg,
          "The value %d defined for LEF UNITS DATABASE MICRONS is invalid\n. Correct value is 100, 200, 400, 800, 1000, 2000, 4000, 8000, 10000, or 20000", values);
       lefError(1502, lefData->outMsg);
       lefFree(lefData->outMsg);
    }
    CHKERR();
    return 0;
}

int zeroOrGt(double values) {
    if (values < 0)
      return 0;
    return 1;
}


#line 216 "lef.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "lef.tab.h".  */
#ifndef YY_LEFYY_LEF_TAB_H_INCLUDED
# define YY_LEFYY_LEF_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int lefyydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    K_HISTORY = 258,
    K_ABUT = 259,
    K_ABUTMENT = 260,
    K_ACTIVE = 261,
    K_ANALOG = 262,
    K_ARRAY = 263,
    K_AREA = 264,
    K_BLOCK = 265,
    K_BOTTOMLEFT = 266,
    K_BOTTOMRIGHT = 267,
    K_BY = 268,
    K_CAPACITANCE = 269,
    K_CAPMULTIPLIER = 270,
    K_CLASS = 271,
    K_CLOCK = 272,
    K_CLOCKTYPE = 273,
    K_COLUMNMAJOR = 274,
    K_DESIGNRULEWIDTH = 275,
    K_INFLUENCE = 276,
    K_CORE = 277,
    K_CORNER = 278,
    K_COVER = 279,
    K_CPERSQDIST = 280,
    K_CURRENT = 281,
    K_CURRENTSOURCE = 282,
    K_CUT = 283,
    K_DEFAULT = 284,
    K_DATABASE = 285,
    K_DATA = 286,
    K_DIELECTRIC = 287,
    K_DIRECTION = 288,
    K_DO = 289,
    K_EDGECAPACITANCE = 290,
    K_EEQ = 291,
    K_END = 292,
    K_ENDCAP = 293,
    K_FALL = 294,
    K_FALLCS = 295,
    K_FALLT0 = 296,
    K_FALLSATT1 = 297,
    K_FALLRS = 298,
    K_FALLSATCUR = 299,
    K_FALLTHRESH = 300,
    K_FEEDTHRU = 301,
    K_FIXED = 302,
    K_FOREIGN = 303,
    K_FROMPIN = 304,
    K_GENERATE = 305,
    K_GENERATOR = 306,
    K_GROUND = 307,
    K_HEIGHT = 308,
    K_HORIZONTAL = 309,
    K_INOUT = 310,
    K_INPUT = 311,
    K_INPUTNOISEMARGIN = 312,
    K_COMPONENTPIN = 313,
    K_INTRINSIC = 314,
    K_INVERT = 315,
    K_IRDROP = 316,
    K_ITERATE = 317,
    K_IV_TABLES = 318,
    K_LAYER = 319,
    K_LEAKAGE = 320,
    K_LEQ = 321,
    K_LIBRARY = 322,
    K_MACRO = 323,
    K_MATCH = 324,
    K_MAXDELAY = 325,
    K_MAXLOAD = 326,
    K_METALOVERHANG = 327,
    K_MILLIAMPS = 328,
    K_MILLIWATTS = 329,
    K_MINFEATURE = 330,
    K_MUSTJOIN = 331,
    K_NAMESCASESENSITIVE = 332,
    K_NANOSECONDS = 333,
    K_NETS = 334,
    K_NEW = 335,
    K_NONDEFAULTRULE = 336,
    K_NONINVERT = 337,
    K_NONUNATE = 338,
    K_OBS = 339,
    K_OHMS = 340,
    K_OFFSET = 341,
    K_ORIENTATION = 342,
    K_ORIGIN = 343,
    K_OUTPUT = 344,
    K_OUTPUTNOISEMARGIN = 345,
    K_OVERHANG = 346,
    K_OVERLAP = 347,
    K_OFF = 348,
    K_ON = 349,
    K_OVERLAPS = 350,
    K_PAD = 351,
    K_PATH = 352,
    K_PATTERN = 353,
    K_PICOFARADS = 354,
    K_PIN = 355,
    K_PITCH = 356,
    K_PLACED = 357,
    K_POLYGON = 358,
    K_PORT = 359,
    K_POST = 360,
    K_POWER = 361,
    K_PRE = 362,
    K_PULLDOWNRES = 363,
    K_RECT = 364,
    K_RESISTANCE = 365,
    K_RESISTIVE = 366,
    K_RING = 367,
    K_RISE = 368,
    K_RISECS = 369,
    K_RISERS = 370,
    K_RISESATCUR = 371,
    K_RISETHRESH = 372,
    K_RISESATT1 = 373,
    K_RISET0 = 374,
    K_RISEVOLTAGETHRESHOLD = 375,
    K_FALLVOLTAGETHRESHOLD = 376,
    K_ROUTING = 377,
    K_ROWMAJOR = 378,
    K_RPERSQ = 379,
    K_SAMENET = 380,
    K_SCANUSE = 381,
    K_SHAPE = 382,
    K_SHRINKAGE = 383,
    K_SIGNAL = 384,
    K_SITE = 385,
    K_SIZE = 386,
    K_SOURCE = 387,
    K_SPACER = 388,
    K_SPACING = 389,
    K_SPECIALNETS = 390,
    K_STACK = 391,
    K_START = 392,
    K_STEP = 393,
    K_STOP = 394,
    K_STRUCTURE = 395,
    K_SYMMETRY = 396,
    K_TABLE = 397,
    K_THICKNESS = 398,
    K_TIEHIGH = 399,
    K_TIELOW = 400,
    K_TIEOFFR = 401,
    K_TIME = 402,
    K_TIMING = 403,
    K_TO = 404,
    K_TOPIN = 405,
    K_TOPLEFT = 406,
    K_TOPRIGHT = 407,
    K_TOPOFSTACKONLY = 408,
    K_TRISTATE = 409,
    K_TYPE = 410,
    K_UNATENESS = 411,
    K_UNITS = 412,
    K_USE = 413,
    K_VARIABLE = 414,
    K_VERTICAL = 415,
    K_VHI = 416,
    K_VIA = 417,
    K_VIARULE = 418,
    K_VLO = 419,
    K_VOLTAGE = 420,
    K_VOLTS = 421,
    K_WIDTH = 422,
    K_X = 423,
    K_Y = 424,
    T_STRING = 425,
    QSTRING = 426,
    NUMBER = 427,
    K_N = 428,
    K_S = 429,
    K_E = 430,
    K_W = 431,
    K_FN = 432,
    K_FS = 433,
    K_FE = 434,
    K_FW = 435,
    K_R0 = 436,
    K_R90 = 437,
    K_R180 = 438,
    K_R270 = 439,
    K_MX = 440,
    K_MY = 441,
    K_MXR90 = 442,
    K_MYR90 = 443,
    K_USER = 444,
    K_MASTERSLICE = 445,
    K_ENDMACRO = 446,
    K_ENDMACROPIN = 447,
    K_ENDVIARULE = 448,
    K_ENDVIA = 449,
    K_ENDLAYER = 450,
    K_ENDSITE = 451,
    K_CANPLACE = 452,
    K_CANNOTOCCUPY = 453,
    K_TRACKS = 454,
    K_FLOORPLAN = 455,
    K_GCELLGRID = 456,
    K_DEFAULTCAP = 457,
    K_MINPINS = 458,
    K_WIRECAP = 459,
    K_STABLE = 460,
    K_SETUP = 461,
    K_HOLD = 462,
    K_DEFINE = 463,
    K_DEFINES = 464,
    K_DEFINEB = 465,
    K_IF = 466,
    K_THEN = 467,
    K_ELSE = 468,
    K_FALSE = 469,
    K_TRUE = 470,
    K_EQ = 471,
    K_NE = 472,
    K_LE = 473,
    K_LT = 474,
    K_GE = 475,
    K_GT = 476,
    K_OR = 477,
    K_AND = 478,
    K_NOT = 479,
    K_DELAY = 480,
    K_TABLEDIMENSION = 481,
    K_TABLEAXIS = 482,
    K_TABLEENTRIES = 483,
    K_TRANSITIONTIME = 484,
    K_EXTENSION = 485,
    K_PROPDEF = 486,
    K_STRING = 487,
    K_INTEGER = 488,
    K_REAL = 489,
    K_RANGE = 490,
    K_PROPERTY = 491,
    K_VIRTUAL = 492,
    K_BUSBITCHARS = 493,
    K_VERSION = 494,
    K_BEGINEXT = 495,
    K_ENDEXT = 496,
    K_UNIVERSALNOISEMARGIN = 497,
    K_EDGERATETHRESHOLD1 = 498,
    K_CORRECTIONTABLE = 499,
    K_EDGERATESCALEFACTOR = 500,
    K_EDGERATETHRESHOLD2 = 501,
    K_VICTIMNOISE = 502,
    K_NOISETABLE = 503,
    K_EDGERATE = 504,
    K_OUTPUTRESISTANCE = 505,
    K_VICTIMLENGTH = 506,
    K_CORRECTIONFACTOR = 507,
    K_OUTPUTPINANTENNASIZE = 508,
    K_INPUTPINANTENNASIZE = 509,
    K_INOUTPINANTENNASIZE = 510,
    K_CURRENTDEN = 511,
    K_PWL = 512,
    K_ANTENNALENGTHFACTOR = 513,
    K_TAPERRULE = 514,
    K_DIVIDERCHAR = 515,
    K_ANTENNASIZE = 516,
    K_ANTENNAMETALLENGTH = 517,
    K_ANTENNAMETALAREA = 518,
    K_RISESLEWLIMIT = 519,
    K_FALLSLEWLIMIT = 520,
    K_FUNCTION = 521,
    K_BUFFER = 522,
    K_INVERTER = 523,
    K_NAMEMAPSTRING = 524,
    K_NOWIREEXTENSIONATPIN = 525,
    K_WIREEXTENSION = 526,
    K_MESSAGE = 527,
    K_CREATEFILE = 528,
    K_OPENFILE = 529,
    K_CLOSEFILE = 530,
    K_WARNING = 531,
    K_ERROR = 532,
    K_FATALERROR = 533,
    K_RECOVERY = 534,
    K_SKEW = 535,
    K_ANYEDGE = 536,
    K_POSEDGE = 537,
    K_NEGEDGE = 538,
    K_SDFCONDSTART = 539,
    K_SDFCONDEND = 540,
    K_SDFCOND = 541,
    K_MPWH = 542,
    K_MPWL = 543,
    K_PERIOD = 544,
    K_ACCURRENTDENSITY = 545,
    K_DCCURRENTDENSITY = 546,
    K_AVERAGE = 547,
    K_PEAK = 548,
    K_RMS = 549,
    K_FREQUENCY = 550,
    K_CUTAREA = 551,
    K_MEGAHERTZ = 552,
    K_USELENGTHTHRESHOLD = 553,
    K_LENGTHTHRESHOLD = 554,
    K_ANTENNAINPUTGATEAREA = 555,
    K_ANTENNAINOUTDIFFAREA = 556,
    K_ANTENNAOUTPUTDIFFAREA = 557,
    K_ANTENNAAREARATIO = 558,
    K_ANTENNADIFFAREARATIO = 559,
    K_ANTENNACUMAREARATIO = 560,
    K_ANTENNACUMDIFFAREARATIO = 561,
    K_ANTENNAAREAFACTOR = 562,
    K_ANTENNASIDEAREARATIO = 563,
    K_ANTENNADIFFSIDEAREARATIO = 564,
    K_ANTENNACUMSIDEAREARATIO = 565,
    K_ANTENNACUMDIFFSIDEAREARATIO = 566,
    K_ANTENNASIDEAREAFACTOR = 567,
    K_DIFFUSEONLY = 568,
    K_MANUFACTURINGGRID = 569,
    K_FIXEDMASK = 570,
    K_ANTENNACELL = 571,
    K_CLEARANCEMEASURE = 572,
    K_EUCLIDEAN = 573,
    K_MAXXY = 574,
    K_USEMINSPACING = 575,
    K_ROWMINSPACING = 576,
    K_ROWABUTSPACING = 577,
    K_FLIP = 578,
    K_NONE = 579,
    K_ANTENNAPARTIALMETALAREA = 580,
    K_ANTENNAPARTIALMETALSIDEAREA = 581,
    K_ANTENNAGATEAREA = 582,
    K_ANTENNADIFFAREA = 583,
    K_ANTENNAMAXAREACAR = 584,
    K_ANTENNAMAXSIDEAREACAR = 585,
    K_ANTENNAPARTIALCUTAREA = 586,
    K_ANTENNAMAXCUTCAR = 587,
    K_SLOTWIREWIDTH = 588,
    K_SLOTWIRELENGTH = 589,
    K_SLOTWIDTH = 590,
    K_SLOTLENGTH = 591,
    K_MAXADJACENTSLOTSPACING = 592,
    K_MAXCOAXIALSLOTSPACING = 593,
    K_MAXEDGESLOTSPACING = 594,
    K_SPLITWIREWIDTH = 595,
    K_MINIMUMDENSITY = 596,
    K_MAXIMUMDENSITY = 597,
    K_DENSITYCHECKWINDOW = 598,
    K_DENSITYCHECKSTEP = 599,
    K_FILLACTIVESPACING = 600,
    K_MINIMUMCUT = 601,
    K_ADJACENTCUTS = 602,
    K_ANTENNAMODEL = 603,
    K_BUMP = 604,
    K_ENCLOSURE = 605,
    K_FROMABOVE = 606,
    K_FROMBELOW = 607,
    K_IMPLANT = 608,
    K_LENGTH = 609,
    K_MAXVIASTACK = 610,
    K_AREAIO = 611,
    K_BLACKBOX = 612,
    K_MAXWIDTH = 613,
    K_MINENCLOSEDAREA = 614,
    K_MINSTEP = 615,
    K_ORIENT = 616,
    K_OXIDE1 = 617,
    K_OXIDE2 = 618,
    K_OXIDE3 = 619,
    K_OXIDE4 = 620,
    K_PARALLELRUNLENGTH = 621,
    K_MINWIDTH = 622,
    K_PROTRUSIONWIDTH = 623,
    K_SPACINGTABLE = 624,
    K_WITHIN = 625,
    K_ABOVE = 626,
    K_BELOW = 627,
    K_CENTERTOCENTER = 628,
    K_CUTSIZE = 629,
    K_CUTSPACING = 630,
    K_DENSITY = 631,
    K_DIAG45 = 632,
    K_DIAG135 = 633,
    K_MASK = 634,
    K_DIAGMINEDGELENGTH = 635,
    K_DIAGSPACING = 636,
    K_DIAGPITCH = 637,
    K_DIAGWIDTH = 638,
    K_GENERATED = 639,
    K_GROUNDSENSITIVITY = 640,
    K_HARDSPACING = 641,
    K_INSIDECORNER = 642,
    K_LAYERS = 643,
    K_LENGTHSUM = 644,
    K_MICRONS = 645,
    K_MINCUTS = 646,
    K_MINSIZE = 647,
    K_NETEXPR = 648,
    K_OUTSIDECORNER = 649,
    K_PREFERENCLOSURE = 650,
    K_ROWCOL = 651,
    K_ROWPATTERN = 652,
    K_SOFT = 653,
    K_SUPPLYSENSITIVITY = 654,
    K_USEVIA = 655,
    K_USEVIARULE = 656,
    K_WELLTAP = 657,
    K_ARRAYCUTS = 658,
    K_ARRAYSPACING = 659,
    K_ANTENNAAREADIFFREDUCEPWL = 660,
    K_ANTENNAAREAMINUSDIFF = 661,
    K_ANTENNACUMROUTINGPLUSCUT = 662,
    K_ANTENNAGATEPLUSDIFF = 663,
    K_ENDOFLINE = 664,
    K_ENDOFNOTCHWIDTH = 665,
    K_EXCEPTEXTRACUT = 666,
    K_EXCEPTSAMEPGNET = 667,
    K_EXCEPTPGNET = 668,
    K_LONGARRAY = 669,
    K_MAXEDGES = 670,
    K_NOTCHLENGTH = 671,
    K_NOTCHSPACING = 672,
    K_ORTHOGONAL = 673,
    K_PARALLELEDGE = 674,
    K_PARALLELOVERLAP = 675,
    K_PGONLY = 676,
    K_PRL = 677,
    K_TWOEDGES = 678,
    K_TWOWIDTHS = 679,
    IF = 680,
    LNOT = 681,
    UMINUS = 682
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 194 "lef.y" /* yacc.c:355  */

        double    dval ;
        int       integer ;
        char *    string ;
        LefDefParser::lefPOINT  pt;

#line 691 "lef.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE lefyylval;

int lefyyparse (void);

#endif /* !YY_LEFYY_LEF_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 708 "lef.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2695

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  439
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  449
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1020
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2044

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   682

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     436,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     433,   434,   429,   428,     2,   427,     2,   430,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   432,
     437,   435,   438,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   431
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   334,   334,   355,   355,   394,   411,   424,   437,   438,
     439,   443,   449,   459,   459,   459,   459,   460,   460,   460,
     460,   460,   461,   461,   462,   462,   462,   462,   462,   462,
     462,   463,   463,   463,   464,   464,   465,   465,   466,   466,
     466,   467,   467,   468,   468,   468,   468,   468,   469,   469,
     469,   470,   473,   487,   505,   515,   526,   539,   546,   561,
     565,   566,   569,   570,   573,   574,   576,   582,   605,   606,
     609,   611,   613,   615,   617,   619,   621,   628,   631,   638,
     638,   670,   670,   728,   729,   734,   740,   733,   757,   763,
     778,   783,   788,   792,   796,   800,   804,   808,   812,   817,
     834,   833,   870,   869,   887,   901,   913,   924,   936,   947,
     959,   971,   983,   995,  1007,  1020,  1047,  1066,  1084,  1103,
    1103,  1108,  1107,  1122,  1137,  1153,  1176,  1152,  1179,  1202,
    1178,  1206,  1245,  1244,  1283,  1322,  1321,  1361,  1360,  1375,
    1414,  1413,  1452,  1491,  1490,  1530,  1529,  1570,  1569,  1608,
    1629,  1650,  1672,  1693,  1671,  1709,  1733,  1757,  1781,  1805,
    1829,  1853,  1877,  1900,  1918,  1936,  1954,  1972,  1990,  2015,
    2041,  2040,  2058,  2057,  2073,  2072,  2079,  2096,  2095,  2122,
    2121,  2141,  2140,  2158,  2176,  2202,  2201,  2219,  2221,  2227,
    2229,  2235,  2237,  2240,  2257,  2278,  2283,  2289,  2256,  2303,
    2307,  2302,  2339,  2338,  2363,  2365,  2368,  2375,  2376,  2377,
    2379,  2381,  2380,  2387,  2403,  2404,  2420,  2421,  2428,  2429,
    2445,  2446,  2465,  2484,  2485,  2503,  2504,  2507,  2511,  2515,
    2529,  2530,  2531,  2534,  2538,  2537,  2557,  2558,  2562,  2567,
    2568,  2602,  2603,  2604,  2608,  2610,  2613,  2607,  2617,  2619,
    2618,  2633,  2632,  2649,  2648,  2653,  2654,  2657,  2658,  2662,
    2663,  2667,  2675,  2683,  2695,  2697,  2700,  2704,  2705,  2708,
    2712,  2713,  2716,  2720,  2721,  2722,  2723,  2724,  2725,  2728,
    2729,  2730,  2731,  2733,  2734,  2741,  2746,  2751,  2756,  2763,
    2764,  2768,  2767,  2777,  2778,  2782,  2781,  2792,  2796,  2803,
    2804,  2807,  2810,  2846,  2846,  2873,  2873,  2883,  2886,  2895,
    2903,  2912,  2914,  2917,  2912,  2938,  2939,  2942,  2946,  2950,
    2954,  2954,  2960,  2961,  2963,  2966,  2967,  2971,  2973,  2975,
    2977,  2977,  2980,  2991,  2992,  2996,  3006,  3014,  3024,  3033,
    3042,  3051,  3061,  3061,  3065,  3066,  3067,  3068,  3069,  3070,
    3071,  3072,  3073,  3074,  3075,  3076,  3077,  3078,  3079,  3080,
    3082,  3085,  3085,  3092,  3094,  3098,  3112,  3111,  3135,  3135,
    3169,  3169,  3179,  3198,  3197,  3225,  3226,  3244,  3245,  3248,
    3250,  3254,  3255,  3258,  3258,  3263,  3264,  3268,  3276,  3284,
    3295,  3326,  3328,  3331,  3334,  3334,  3340,  3342,  3346,  3365,
    3384,  3420,  3422,  3425,  3427,  3429,  3459,  3487,  3487,  3521,
    3524,  3546,  3559,  3561,  3564,  3578,  3593,  3599,  3600,  3603,
    3606,  3617,  3626,  3628,  3631,  3639,  3641,  3644,  3647,  3650,
    3664,  3675,  3676,  3686,  3675,  3716,  3721,  3742,  3744,  3763,
    3764,  3768,  3769,  3770,  3771,  3772,  3773,  3774,  3777,  3794,
    3813,  3832,  3832,  3837,  3838,  3842,  3850,  3858,  3869,  3870,
    3879,  3883,  3869,  3925,  3927,  3931,  3936,  3939,  3963,  3986,
    4009,  4028,  4034,  4034,  4044,  4044,  4075,  4077,  4081,  4087,
    4089,  4094,  4098,  4099,  4100,  4102,  4105,  4107,  4111,  4113,
    4115,  4118,  4118,  4122,  4124,  4127,  4127,  4131,  4133,  4137,
    4136,  4144,  4144,  4162,  4162,  4184,  4186,  4190,  4191,  4192,
    4193,  4194,  4195,  4197,  4199,  4201,  4203,  4204,  4205,  4207,
    4209,  4211,  4213,  4215,  4217,  4219,  4221,  4223,  4223,  4228,
    4229,  4232,  4243,  4245,  4249,  4251,  4253,  4257,  4267,  4275,
    4284,  4292,  4293,  4312,  4313,  4314,  4333,  4352,  4353,  4365,
    4366,  4367,  4390,  4391,  4397,  4400,  4405,  4406,  4407,  4408,
    4409,  4410,  4413,  4414,  4415,  4416,  4435,  4454,  4475,  4476,
    4477,  4478,  4479,  4480,  4482,  4485,  4489,  4498,  4507,  4517,
    4527,  4567,  4571,  4575,  4579,  4585,  4595,  4595,  4598,  4598,
    4609,  4615,  4625,  4629,  4632,  4648,  4655,  4655,  4661,  4661,
    4683,  4684,  4688,  4697,  4706,  4715,  4724,  4733,  4742,  4742,
    4751,  4760,  4762,  4764,  4766,  4775,  4784,  4793,  4802,  4811,
    4820,  4829,  4838,  4840,  4840,  4842,  4842,  4851,  4851,  4860,
    4860,  4869,  4878,  4880,  4882,  4891,  4900,  4909,  4918,  4927,
    4936,  4945,  4947,  4947,  4950,  4964,  4976,  4997,  5018,  5039,
    5041,  5043,  5073,  5103,  5133,  5163,  5193,  5223,  5253,  5284,
    5283,  5313,  5313,  5329,  5329,  5345,  5345,  5363,  5368,  5373,
    5378,  5385,  5386,  5390,  5400,  5408,  5418,  5419,  5420,  5421,
    5422,  5424,  5436,  5437,  5442,  5443,  5444,  5445,  5446,  5447,
    5450,  5451,  5452,  5453,  5456,  5457,  5458,  5459,  5461,  5464,
    5465,  5464,  5481,  5493,  5514,  5535,  5555,  5575,  5597,  5618,
    5621,  5622,  5624,  5625,  5640,  5641,  5655,  5670,  5674,  5678,
    5680,  5684,  5684,  5697,  5697,  5712,  5716,  5727,  5740,  5748,
    5739,  5751,  5759,  5750,  5761,  5770,  5780,  5782,  5785,  5788,
    5797,  5807,  5818,  5830,  5842,  5863,  5864,  5867,  5868,  5867,
    5874,  5875,  5878,  5884,  5884,  5887,  5890,  5893,  5907,  5909,
    5914,  5913,  5924,  5924,  5927,  5926,  5930,  5939,  5941,  5943,
    5945,  5947,  5949,  5951,  5953,  5955,  5957,  5959,  5961,  5963,
    5965,  5967,  5969,  5971,  5973,  5977,  5979,  5981,  5985,  5987,
    5989,  5991,  5995,  5997,  5999,  6003,  6005,  6007,  6011,  6013,
    6017,  6019,  6022,  6026,  6028,  6033,  6034,  6036,  6041,  6043,
    6047,  6049,  6051,  6055,  6057,  6061,  6063,  6067,  6066,  6076,
    6076,  6086,  6086,  6110,  6111,  6115,  6115,  6122,  6122,  6129,
    6129,  6136,  6136,  6142,  6145,  6145,  6151,  6157,  6160,  6165,
    6166,  6170,  6170,  6177,  6177,  6187,  6188,  6191,  6195,  6195,
    6199,  6199,  6203,  6203,  6212,  6212,  6221,  6221,  6232,  6233,
    6234,  6237,  6238,  6242,  6243,  6247,  6248,  6249,  6250,  6251,
    6252,  6253,  6255,  6258,  6259,  6260,  6261,  6262,  6263,  6264,
    6265,  6266,  6267,  6268,  6269,  6270,  6272,  6273,  6276,  6282,
    6284,  6293,  6297,  6298,  6299,  6300,  6301,  6302,  6303,  6304,
    6305,  6309,  6308,  6321,  6322,  6326,  6326,  6335,  6335,  6344,
    6344,  6354,  6354,  6363,  6363,  6372,  6372,  6381,  6381,  6390,
    6390,  6401,  6406,  6411,  6416,  6421,  6429,  6430,  6435,  6442,
    6449,  6457,  6459,  6458,  6467,  6468,  6476,  6477,  6485,  6486,
    6491,  6492,  6497,  6498,  6501,  6503,  6505,  6530,  6529,  6554,
    6578,  6580,  6581,  6580,  6597,  6596,  6621,  6645,  6644,  6650,
    6656,  6664,  6663,  6679,  6693,  6710,  6711,  6719,  6720,  6737,
    6738,  6738,  6743,  6743,  6747,  6761,  6774,  6787,  6801,  6800,
    6806,  6819,  6820,  6824,  6831,  6835,  6834,  6840,  6843,  6848,
    6849,  6853,  6852,  6859,  6862,  6867,  6866,  6873,  6886,  6887,
    6891,  6898,  6902,  6901,  6908,  6911,  6916,  6917,  6922,  6921,
    6928,  6931,  6937,  6961,  6985,  7009,  7043,  7077,  7111,  7112,
    7114
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "K_HISTORY", "K_ABUT", "K_ABUTMENT",
  "K_ACTIVE", "K_ANALOG", "K_ARRAY", "K_AREA", "K_BLOCK", "K_BOTTOMLEFT",
  "K_BOTTOMRIGHT", "K_BY", "K_CAPACITANCE", "K_CAPMULTIPLIER", "K_CLASS",
  "K_CLOCK", "K_CLOCKTYPE", "K_COLUMNMAJOR", "K_DESIGNRULEWIDTH",
  "K_INFLUENCE", "K_CORE", "K_CORNER", "K_COVER", "K_CPERSQDIST",
  "K_CURRENT", "K_CURRENTSOURCE", "K_CUT", "K_DEFAULT", "K_DATABASE",
  "K_DATA", "K_DIELECTRIC", "K_DIRECTION", "K_DO", "K_EDGECAPACITANCE",
  "K_EEQ", "K_END", "K_ENDCAP", "K_FALL", "K_FALLCS", "K_FALLT0",
  "K_FALLSATT1", "K_FALLRS", "K_FALLSATCUR", "K_FALLTHRESH", "K_FEEDTHRU",
  "K_FIXED", "K_FOREIGN", "K_FROMPIN", "K_GENERATE", "K_GENERATOR",
  "K_GROUND", "K_HEIGHT", "K_HORIZONTAL", "K_INOUT", "K_INPUT",
  "K_INPUTNOISEMARGIN", "K_COMPONENTPIN", "K_INTRINSIC", "K_INVERT",
  "K_IRDROP", "K_ITERATE", "K_IV_TABLES", "K_LAYER", "K_LEAKAGE", "K_LEQ",
  "K_LIBRARY", "K_MACRO", "K_MATCH", "K_MAXDELAY", "K_MAXLOAD",
  "K_METALOVERHANG", "K_MILLIAMPS", "K_MILLIWATTS", "K_MINFEATURE",
  "K_MUSTJOIN", "K_NAMESCASESENSITIVE", "K_NANOSECONDS", "K_NETS", "K_NEW",
  "K_NONDEFAULTRULE", "K_NONINVERT", "K_NONUNATE", "K_OBS", "K_OHMS",
  "K_OFFSET", "K_ORIENTATION", "K_ORIGIN", "K_OUTPUT",
  "K_OUTPUTNOISEMARGIN", "K_OVERHANG", "K_OVERLAP", "K_OFF", "K_ON",
  "K_OVERLAPS", "K_PAD", "K_PATH", "K_PATTERN", "K_PICOFARADS", "K_PIN",
  "K_PITCH", "K_PLACED", "K_POLYGON", "K_PORT", "K_POST", "K_POWER",
  "K_PRE", "K_PULLDOWNRES", "K_RECT", "K_RESISTANCE", "K_RESISTIVE",
  "K_RING", "K_RISE", "K_RISECS", "K_RISERS", "K_RISESATCUR",
  "K_RISETHRESH", "K_RISESATT1", "K_RISET0", "K_RISEVOLTAGETHRESHOLD",
  "K_FALLVOLTAGETHRESHOLD", "K_ROUTING", "K_ROWMAJOR", "K_RPERSQ",
  "K_SAMENET", "K_SCANUSE", "K_SHAPE", "K_SHRINKAGE", "K_SIGNAL", "K_SITE",
  "K_SIZE", "K_SOURCE", "K_SPACER", "K_SPACING", "K_SPECIALNETS",
  "K_STACK", "K_START", "K_STEP", "K_STOP", "K_STRUCTURE", "K_SYMMETRY",
  "K_TABLE", "K_THICKNESS", "K_TIEHIGH", "K_TIELOW", "K_TIEOFFR", "K_TIME",
  "K_TIMING", "K_TO", "K_TOPIN", "K_TOPLEFT", "K_TOPRIGHT",
  "K_TOPOFSTACKONLY", "K_TRISTATE", "K_TYPE", "K_UNATENESS", "K_UNITS",
  "K_USE", "K_VARIABLE", "K_VERTICAL", "K_VHI", "K_VIA", "K_VIARULE",
  "K_VLO", "K_VOLTAGE", "K_VOLTS", "K_WIDTH", "K_X", "K_Y", "T_STRING",
  "QSTRING", "NUMBER", "K_N", "K_S", "K_E", "K_W", "K_FN", "K_FS", "K_FE",
  "K_FW", "K_R0", "K_R90", "K_R180", "K_R270", "K_MX", "K_MY", "K_MXR90",
  "K_MYR90", "K_USER", "K_MASTERSLICE", "K_ENDMACRO", "K_ENDMACROPIN",
  "K_ENDVIARULE", "K_ENDVIA", "K_ENDLAYER", "K_ENDSITE", "K_CANPLACE",
  "K_CANNOTOCCUPY", "K_TRACKS", "K_FLOORPLAN", "K_GCELLGRID",
  "K_DEFAULTCAP", "K_MINPINS", "K_WIRECAP", "K_STABLE", "K_SETUP",
  "K_HOLD", "K_DEFINE", "K_DEFINES", "K_DEFINEB", "K_IF", "K_THEN",
  "K_ELSE", "K_FALSE", "K_TRUE", "K_EQ", "K_NE", "K_LE", "K_LT", "K_GE",
  "K_GT", "K_OR", "K_AND", "K_NOT", "K_DELAY", "K_TABLEDIMENSION",
  "K_TABLEAXIS", "K_TABLEENTRIES", "K_TRANSITIONTIME", "K_EXTENSION",
  "K_PROPDEF", "K_STRING", "K_INTEGER", "K_REAL", "K_RANGE", "K_PROPERTY",
  "K_VIRTUAL", "K_BUSBITCHARS", "K_VERSION", "K_BEGINEXT", "K_ENDEXT",
  "K_UNIVERSALNOISEMARGIN", "K_EDGERATETHRESHOLD1", "K_CORRECTIONTABLE",
  "K_EDGERATESCALEFACTOR", "K_EDGERATETHRESHOLD2", "K_VICTIMNOISE",
  "K_NOISETABLE", "K_EDGERATE", "K_OUTPUTRESISTANCE", "K_VICTIMLENGTH",
  "K_CORRECTIONFACTOR", "K_OUTPUTPINANTENNASIZE", "K_INPUTPINANTENNASIZE",
  "K_INOUTPINANTENNASIZE", "K_CURRENTDEN", "K_PWL",
  "K_ANTENNALENGTHFACTOR", "K_TAPERRULE", "K_DIVIDERCHAR", "K_ANTENNASIZE",
  "K_ANTENNAMETALLENGTH", "K_ANTENNAMETALAREA", "K_RISESLEWLIMIT",
  "K_FALLSLEWLIMIT", "K_FUNCTION", "K_BUFFER", "K_INVERTER",
  "K_NAMEMAPSTRING", "K_NOWIREEXTENSIONATPIN", "K_WIREEXTENSION",
  "K_MESSAGE", "K_CREATEFILE", "K_OPENFILE", "K_CLOSEFILE", "K_WARNING",
  "K_ERROR", "K_FATALERROR", "K_RECOVERY", "K_SKEW", "K_ANYEDGE",
  "K_POSEDGE", "K_NEGEDGE", "K_SDFCONDSTART", "K_SDFCONDEND", "K_SDFCOND",
  "K_MPWH", "K_MPWL", "K_PERIOD", "K_ACCURRENTDENSITY",
  "K_DCCURRENTDENSITY", "K_AVERAGE", "K_PEAK", "K_RMS", "K_FREQUENCY",
  "K_CUTAREA", "K_MEGAHERTZ", "K_USELENGTHTHRESHOLD", "K_LENGTHTHRESHOLD",
  "K_ANTENNAINPUTGATEAREA", "K_ANTENNAINOUTDIFFAREA",
  "K_ANTENNAOUTPUTDIFFAREA", "K_ANTENNAAREARATIO",
  "K_ANTENNADIFFAREARATIO", "K_ANTENNACUMAREARATIO",
  "K_ANTENNACUMDIFFAREARATIO", "K_ANTENNAAREAFACTOR",
  "K_ANTENNASIDEAREARATIO", "K_ANTENNADIFFSIDEAREARATIO",
  "K_ANTENNACUMSIDEAREARATIO", "K_ANTENNACUMDIFFSIDEAREARATIO",
  "K_ANTENNASIDEAREAFACTOR", "K_DIFFUSEONLY", "K_MANUFACTURINGGRID",
  "K_FIXEDMASK", "K_ANTENNACELL", "K_CLEARANCEMEASURE", "K_EUCLIDEAN",
  "K_MAXXY", "K_USEMINSPACING", "K_ROWMINSPACING", "K_ROWABUTSPACING",
  "K_FLIP", "K_NONE", "K_ANTENNAPARTIALMETALAREA",
  "K_ANTENNAPARTIALMETALSIDEAREA", "K_ANTENNAGATEAREA",
  "K_ANTENNADIFFAREA", "K_ANTENNAMAXAREACAR", "K_ANTENNAMAXSIDEAREACAR",
  "K_ANTENNAPARTIALCUTAREA", "K_ANTENNAMAXCUTCAR", "K_SLOTWIREWIDTH",
  "K_SLOTWIRELENGTH", "K_SLOTWIDTH", "K_SLOTLENGTH",
  "K_MAXADJACENTSLOTSPACING", "K_MAXCOAXIALSLOTSPACING",
  "K_MAXEDGESLOTSPACING", "K_SPLITWIREWIDTH", "K_MINIMUMDENSITY",
  "K_MAXIMUMDENSITY", "K_DENSITYCHECKWINDOW", "K_DENSITYCHECKSTEP",
  "K_FILLACTIVESPACING", "K_MINIMUMCUT", "K_ADJACENTCUTS",
  "K_ANTENNAMODEL", "K_BUMP", "K_ENCLOSURE", "K_FROMABOVE", "K_FROMBELOW",
  "K_IMPLANT", "K_LENGTH", "K_MAXVIASTACK", "K_AREAIO", "K_BLACKBOX",
  "K_MAXWIDTH", "K_MINENCLOSEDAREA", "K_MINSTEP", "K_ORIENT", "K_OXIDE1",
  "K_OXIDE2", "K_OXIDE3", "K_OXIDE4", "K_PARALLELRUNLENGTH", "K_MINWIDTH",
  "K_PROTRUSIONWIDTH", "K_SPACINGTABLE", "K_WITHIN", "K_ABOVE", "K_BELOW",
  "K_CENTERTOCENTER", "K_CUTSIZE", "K_CUTSPACING", "K_DENSITY", "K_DIAG45",
  "K_DIAG135", "K_MASK", "K_DIAGMINEDGELENGTH", "K_DIAGSPACING",
  "K_DIAGPITCH", "K_DIAGWIDTH", "K_GENERATED", "K_GROUNDSENSITIVITY",
  "K_HARDSPACING", "K_INSIDECORNER", "K_LAYERS", "K_LENGTHSUM",
  "K_MICRONS", "K_MINCUTS", "K_MINSIZE", "K_NETEXPR", "K_OUTSIDECORNER",
  "K_PREFERENCLOSURE", "K_ROWCOL", "K_ROWPATTERN", "K_SOFT",
  "K_SUPPLYSENSITIVITY", "K_USEVIA", "K_USEVIARULE", "K_WELLTAP",
  "K_ARRAYCUTS", "K_ARRAYSPACING", "K_ANTENNAAREADIFFREDUCEPWL",
  "K_ANTENNAAREAMINUSDIFF", "K_ANTENNACUMROUTINGPLUSCUT",
  "K_ANTENNAGATEPLUSDIFF", "K_ENDOFLINE", "K_ENDOFNOTCHWIDTH",
  "K_EXCEPTEXTRACUT", "K_EXCEPTSAMEPGNET", "K_EXCEPTPGNET", "K_LONGARRAY",
  "K_MAXEDGES", "K_NOTCHLENGTH", "K_NOTCHSPACING", "K_ORTHOGONAL",
  "K_PARALLELEDGE", "K_PARALLELOVERLAP", "K_PGONLY", "K_PRL", "K_TWOEDGES",
  "K_TWOWIDTHS", "IF", "LNOT", "'-'", "'+'", "'*'", "'/'", "UMINUS", "';'",
  "'('", "')'", "'='", "'\\n'", "'<'", "'>'", "$accept", "lef_file",
  "version", "$@1", "int_number", "dividerchar", "busbitchars", "rules",
  "end_library", "rule", "case_sensitivity", "wireextension", "fixedmask",
  "manufacturing", "useminspacing", "clearancemeasure", "clearance_type",
  "spacing_type", "spacing_value", "units_section", "start_units",
  "units_rules", "units_rule", "layer_rule", "start_layer", "$@2",
  "end_layer", "$@3", "layer_options", "layer_option", "$@4", "$@5", "$@6",
  "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "$@27", "$@28", "$@29", "layer_arraySpacing_long",
  "layer_arraySpacing_width", "layer_arraySpacing_arraycuts",
  "layer_arraySpacing_arraycut", "sp_options", "$@30", "$@31", "$@32",
  "$@33", "$@34", "$@35", "$@36", "layer_spacingtable_opts",
  "layer_spacingtable_opt", "layer_enclosure_type_opt",
  "layer_enclosure_width_opt", "$@37", "layer_enclosure_width_except_opt",
  "layer_preferenclosure_width_opt", "layer_minimumcut_within",
  "layer_minimumcut_from", "layer_minimumcut_length",
  "layer_minstep_options", "layer_minstep_option", "layer_minstep_type",
  "layer_antenna_pwl", "$@38", "layer_diffusion_ratios",
  "layer_diffusion_ratio", "layer_antenna_duo", "layer_table_type",
  "layer_frequency", "$@39", "$@40", "$@41", "ac_layer_table_opt", "$@42",
  "$@43", "dc_layer_table", "$@44", "int_number_list", "number_list",
  "layer_prop_list", "layer_prop", "current_density_pwl_list",
  "current_density_pwl", "cap_points", "cap_point", "res_points",
  "res_point", "layer_type", "layer_direction", "layer_minen_width",
  "layer_oxide", "layer_sp_parallel_widths", "layer_sp_parallel_width",
  "$@45", "layer_sp_TwoWidths", "layer_sp_TwoWidth", "$@46",
  "layer_sp_TwoWidthsPRL", "layer_sp_influence_widths",
  "layer_sp_influence_width", "maxstack_via", "$@47", "via", "$@48",
  "via_keyword", "start_via", "via_viarule", "$@49", "$@50", "$@51",
  "via_viarule_options", "via_viarule_option", "$@52", "via_option",
  "via_other_options", "via_more_options", "via_other_option", "$@53",
  "via_prop_list", "via_name_value_pair", "via_foreign", "start_foreign",
  "$@54", "orientation", "via_layer_rule", "via_layer", "$@55",
  "via_geometries", "via_geometry", "$@56", "end_via", "$@57",
  "viarule_keyword", "$@58", "viarule", "viarule_generate", "$@59",
  "viarule_generate_default", "viarule_layer_list", "opt_viarule_props",
  "viarule_props", "viarule_prop", "$@60", "viarule_prop_list",
  "viarule_layer", "via_names", "via_name", "viarule_layer_name", "$@61",
  "viarule_layer_options", "viarule_layer_option", "end_viarule", "$@62",
  "spacing_rule", "start_spacing", "end_spacing", "spacings", "spacing",
  "samenet_keyword", "maskColor", "irdrop", "start_irdrop", "end_irdrop",
  "ir_tables", "ir_table", "ir_table_values", "ir_table_value",
  "ir_tablename", "minfeature", "dielectric", "nondefault_rule", "$@63",
  "$@64", "$@65", "end_nd_rule", "nd_hardspacing", "nd_rules", "nd_rule",
  "usevia", "useviarule", "mincuts", "nd_prop", "$@66", "nd_prop_list",
  "nd_layer", "$@67", "$@68", "$@69", "$@70", "nd_layer_stmts",
  "nd_layer_stmt", "site", "start_site", "$@71", "end_site", "$@72",
  "site_options", "site_option", "site_class", "site_symmetry_statement",
  "site_symmetries", "site_symmetry", "site_rowpattern_statement", "$@73",
  "site_rowpatterns", "site_rowpattern", "$@74", "pt", "macro", "$@75",
  "start_macro", "$@76", "end_macro", "$@77", "macro_options",
  "macro_option", "$@78", "macro_prop_list", "macro_symmetry_statement",
  "macro_symmetries", "macro_symmetry", "macro_name_value_pair",
  "macro_class", "class_type", "pad_type", "core_type", "endcap_type",
  "macro_generator", "macro_generate", "macro_source", "macro_power",
  "macro_origin", "macro_foreign", "macro_fixedMask", "macro_eeq", "$@79",
  "macro_leq", "$@80", "macro_site", "macro_site_word", "site_word",
  "macro_size", "macro_pin", "start_macro_pin", "$@81", "end_macro_pin",
  "$@82", "macro_pin_options", "macro_pin_option", "$@83", "$@84", "$@85",
  "$@86", "$@87", "$@88", "$@89", "$@90", "$@91", "$@92",
  "pin_layer_oxide", "pin_prop_list", "pin_name_value_pair",
  "electrical_direction", "start_macro_port", "macro_port_class_option",
  "macro_pin_use", "macro_scan_use", "pin_shape", "geometries", "geometry",
  "$@93", "$@94", "geometry_options", "layer_exceptpgnet", "layer_spacing",
  "firstPt", "nextPt", "otherPts", "via_placement", "$@95", "$@96",
  "stepPattern", "sitePattern", "trackPattern", "$@97", "$@98", "$@99",
  "$@100", "trackLayers", "layer_name", "gcellPattern", "macro_obs",
  "start_macro_obs", "macro_density", "density_layers", "density_layer",
  "$@101", "$@102", "density_layer_rects", "density_layer_rect",
  "macro_clocktype", "$@103", "timing", "start_timing", "end_timing",
  "timing_options", "timing_option", "$@104", "$@105", "$@106",
  "one_pin_trigger", "two_pin_trigger", "from_pin_trigger",
  "to_pin_trigger", "delay_or_transition", "list_of_table_entries",
  "table_entry", "list_of_table_axis_dnumbers", "slew_spec", "risefall",
  "unateness", "list_of_from_strings", "list_of_to_strings", "array",
  "$@107", "start_array", "$@108", "end_array", "$@109", "array_rules",
  "array_rule", "$@110", "$@111", "$@112", "$@113", "$@114",
  "floorplan_start", "floorplan_list", "floorplan_element", "$@115",
  "$@116", "cap_list", "one_cap", "msg_statement", "$@117",
  "create_file_statement", "$@118", "def_statement", "$@119", "$@120",
  "$@121", "dtrm", "then", "else", "expression", "b_expr", "s_expr",
  "relop", "prop_def_section", "$@122", "prop_stmts", "prop_stmt", "$@123",
  "$@124", "$@125", "$@126", "$@127", "$@128", "$@129", "$@130",
  "prop_define", "opt_range_second", "opt_endofline", "$@131",
  "opt_endofline_twoedges", "opt_samenetPGonly", "opt_def_range",
  "opt_def_value", "opt_def_dvalue", "layer_spacing_opts",
  "layer_spacing_opt", "$@132", "layer_spacing_cut_routing", "$@133",
  "$@134", "$@135", "$@136", "$@137", "spacing_cut_layer_opt",
  "opt_adjacentcuts_exceptsame", "opt_layer_name", "$@138",
  "req_layer_name", "$@139", "universalnoisemargin", "edgeratethreshold1",
  "edgeratethreshold2", "edgeratescalefactor", "noisetable", "$@140",
  "end_noisetable", "noise_table_list", "noise_table_entry",
  "output_resistance_entry", "$@141", "num_list", "victim_list", "victim",
  "$@142", "vnoiselist", "correctiontable", "$@143", "end_correctiontable",
  "correction_table_list", "correction_table_item", "output_list", "$@144",
  "numo_list", "corr_victim_list", "corr_victim", "$@145", "corr_list",
  "input_antenna", "output_antenna", "inout_antenna", "antenna_input",
  "antenna_inout", "antenna_output", "extension_opt", "extension", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,    45,    43,    42,
      47,   682,    59,    40,    41,    61,    10,    60,    62
};
# endif

#define YYPACT_NINF -1553

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1553)))

#define YYTABLE_NINF -736

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1383, -1553,   146,  2275, -1553, -1553,   -11, -1553, -1553, -1553,
     -11,   232, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553,    43, -1553, -1553,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,    52,   417, -1553, -1553,     3,   103,
     120,   -11,  -354,   242,    79,   -11, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553,    60, -1553,    57, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553,   314, -1553,   167, -1553,
    -114,   193,   213,   -11,    16,    23,   218,   297,   305,   312,
     317,   332, -1553,    93,   375,   -11,   118,   157,   166,   202,
   -1553,   228,   234,   236,   238,   247,   256,   410,   455,   264,
     268,   279,   284, -1553, -1553, -1553,   287, -1553, -1553,   527,
    -163,   446,  1920,     2,   469,   633, -1553,   567, -1553, -1553,
     141,    47,     1,    50,   485,   607, -1553, -1553, -1553, -1553,
   -1553,   290, -1553, -1553, -1553, -1553, -1553,   295,   298,   342,
    1098, -1553,   308,   353, -1553, -1553, -1553, -1553,   412, -1553,
   -1553, -1553, -1553, -1553, -1553,   379,   411, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553,   424, -1553, -1553,   771,   799,   515,
     749,   833,   823,   831,   744,   614, -1553,   745,   891,   -11,
     -21,   -11, -1553,   -11,   -11,   -11,   -36,   -11,   -11,   -11,
      63,   -11, -1553,  -122,   -11,   -11,   315,   630,   -11, -1553,
     -11, -1553,   -11,   -11, -1553,   -11, -1553,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11, -1553,   271,   -11,   751,   -11,   -11,   -11,   506,
     -11,   -11,   -11,   -11,   -11, -1553,   271, -1553,   492,   -11,
     496,   -11, -1553, -1553, -1553, -1553, -1553, -1553,   -11, -1553,
   -1553, -1553, -1553,   889, -1553, -1553, -1553,   578, -1553, -1553,
   -1553, -1553,   760, -1553,   350,   382,   797, -1553, -1553, -1553,
     770,   880,   772, -1553, -1553, -1553,    45, -1553,   -11, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553,   164, -1553, -1553,   774,
     775, -1553, -1553,   -78, -1553,   -11, -1553,   -11,    95, -1553,
   -1553, -1553,   385,   516,   888,   624,   916, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
     784, -1553, -1553, -1553, -1553,   494, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553,   785, -1553,   -11, -1553,   919, -1553,
   -1553, -1553, -1553, -1553,   571,   -49,  -116,   275,   727, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
     454,   519,  -116,  -116, -1553,   791,   -11,   -11,   -11, -1553,
     -11,   -11,   -11,   -11,   813,   531,   -61,   536, -1553, -1553,
   -1553, -1553,   556,   558,   826,   566,   -73,   -55,   -41,   572,
     574, -1553,   575, -1553, -1553, -1553, -1553, -1553, -1553,   576,
     580,   835,   598,   -11,   581,   608,   609, -1553, -1553, -1553,
     -11,    -1,   610,    22,   612,    22, -1553,   622,    22,   623,
      22, -1553,   626,   636,   637,   638,   639,   641,   643,   644,
     645,   648,   -11,   650,   651,   876,   374, -1553, -1553,   -11,
     661, -1553, -1553,   662,   724,   711,   -20,   663,   664,   665,
     -47,   667,   -78,   -11,   586,   -78,   668, -1553,   669,   932,
     933,   672,   953,   954, -1553, -1553,   404, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553,   -11,   -11,   693,   652,   493,   567,
     694,   611, -1553,   957,  1091,   143, -1553, -1553,   359,   -11,
     -11,   -78,   -11,   -11,   -11,   -11, -1553, -1553,   959, -1553,
   -1553,   -39,   698,   699,   700,   963,  1121,   -89, -1553,   148,
       7, -1553,   787,   573,    -4, -1553, -1553, -1553, -1553,   705,
     969,   971,   978,   717,   980,   723,   987,   726,  1146,   728,
     729,   731,   -79,   994,   735,   736, -1553, -1553, -1553, -1553,
     737,   796, -1553, -1553,     0,   738,  2296, -1553, -1553,   794,
     794,   794,   -30,   -11,  1137, -1553, -1553,  1557,  1006,  1006,
     654, -1553,   680, -1553,  1006, -1553, -1553,   243,   746, -1553,
     275,   -49,   -49, -1553,   299, -1553,   275,  -116,   127,   275,
   -1553, -1553,   275,   275,   843,   278,   869, -1553,  1026,  1027,
    1029,  1030,  1031,  1032,  1033,  1034,   -11, -1553,   169, -1553,
   -1553,   -11, -1553,   230, -1553, -1553,   127,   127,  1035,   776,
     777,   778,   779,   780,   790,   792,   793, -1553,   773,   800,
   -1553, -1553, -1553, -1553, -1553, -1553,   801, -1553,   802,   798,
     803, -1553, -1553,   -80, -1553, -1553, -1553,   646,   -87, -1553,
     805,   -11, -1553, -1553, -1553,   804,   882,   -11,  1045,   807,
   -1553,   808, -1553,   815, -1553,   817,   894, -1553,   820, -1553,
     824,   894, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553,   825, -1553, -1553,   -11, -1553, -1553, -1553, -1553,
     834,   -11, -1553,  1056, -1553, -1553,   -11,   -11,  1059,   -11,
    1073,   837, -1553, -1553, -1553, -1553,   844, -1553, -1553, -1553,
     -11, -1553,  1081,   -78, -1553, -1553, -1553,   845, -1553,   850,
     649,   -74, -1553,  1092, -1553,   -11, -1553, -1553, -1553,   851,
     794,   794, -1553,   300, -1553, -1553, -1553, -1553,   143,   852,
   -1553, -1553, -1553,   853,   854,   855,   857,   -78,   858,  1250,
    1126,   -11,   -11, -1553,   -11, -1553, -1553, -1553, -1553, -1553,
     -11, -1553, -1553, -1553, -1553, -1553,   -66, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553,   859,   860,   861, -1553,   862, -1553, -1553, -1553,
     -11, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,   671,
     -64, -1553, -1553, -1553,  1125,   100, -1553, -1553,   864,  1128,
   -1553,   -11, -1553,   -11,    56,   568, -1553,   -11,   -11, -1553,
    1129,   -11, -1553,   -11,   -11, -1553, -1553, -1553,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   462,   357,   -11,   763,   -11,
     -11, -1553, -1553,  1130,   -11,   -11,  1131,   -11,   -11,  1133,
    1136,  1138,  1139,  1140,  1141,  1143,  1144, -1553, -1553, -1553,
   -1553,   -91, -1553, -1553, -1553,   133,  1132,   -11,   -46,   -44,
     -25,   794,   -78,   877, -1553,   479,  1153, -1553,   -11,   -11,
     -11,   -11, -1553, -1553,   -11,   -11,   -11,   -11, -1553,   117,
    1111, -1553, -1553,   -11,   885,   890, -1553, -1553,  1149,  1150,
    1154, -1553, -1553, -1553, -1553, -1553,  1101,   594,   237,   -11,
     892,   896,   -11,   -11,   897,   -11,   -11,   898,    78,   899,
    1169,  1172, -1553, -1553, -1553, -1553,    58,   281, -1553,   199,
     -49,   -49,   -49,   -49, -1553, -1553, -1553,   281,   184,  -116,
   -1553,   281, -1553,   816,    81,   830, -1553, -1553, -1553, -1553,
   -1553, -1553,   -49,   -49, -1553, -1553, -1553,   -49,   275,   275,
     275,   275, -1553,  -116,  -116,  -116,   306,   306,   306,   306,
     306,   306,   306,   306,   911,   -11,  1100,    98, -1553,   913,
     -11,  1099,    98, -1553, -1553, -1553,   914, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553,   915, -1553, -1553, -1553,   917,
   -1553, -1553, -1553, -1553,    55,   -80, -1553, -1553, -1553, -1553,
   -1553,   -11,   420, -1553,   918, -1553,  1177, -1553, -1553, -1553,
   -1553,   -78, -1553, -1553, -1553,   921, -1553, -1553,   922, -1553,
   -1553, -1553, -1553,   -11,   923,   -65,  1184,  1223,   -11, -1553,
     -11, -1553, -1553,  -102, -1553,   -11,   984, -1553, -1553,   986,
   -1553, -1553, -1553, -1553, -1553, -1553,   927, -1553, -1553,   -78,
    1091, -1553,   -93, -1553,  1194, -1553, -1553, -1553, -1553,   935,
   -1553,   -11,   -11,   936,   -94, -1553,   937,  1007, -1553, -1553,
   -1553, -1553, -1553, -1553,   938, -1553, -1553, -1553, -1553, -1553,
     939, -1553, -1553, -1553, -1553,  1007,   943,   944,   945,   946,
     947,   948,  -100,  1195,   949,   950,   -11,  1215,   955,  1216,
     956,   958,  1219,   -11,   960,   961,   962,   964,   965,   966,
     967, -1553, -1553, -1553, -1553,   968, -1553, -1553, -1553,   970,
     973, -1553, -1553, -1553, -1553, -1553, -1553,   974,   975,   976,
    1225,   -11,   977,  1337,  1337,  1337,   981,   982,  1337,  1337,
    1337,  1337,  1339,  1339,  1337,  1339,   409,  1240,  1241,  1246,
     -85, -1553,   842,   164, -1553,   479, -1553, -1553,   -78, -1553,
     -78,   -78,   -78,   -78,   -78, -1553, -1553, -1553, -1553,   -11,
     -11,   -11,   -11,  1247,   -11,   -11,   -11,   -11,  1248, -1553,
   -1553, -1553,   989,   -11, -1553,     4,   -11,   461, -1553, -1553,
     990,   991,   992,   -11, -1553, -1553, -1553,   602,   -11, -1553,
   -1553,  1263, -1553, -1553,  1391,  1392, -1553,  1393,  1395, -1553,
    1228,   -11, -1553, -1553, -1553, -1553,  1006,  1006, -1553,   689,
   -1553,  1261,  1262,  1264, -1553, -1553,  1396, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553,  1224,   -49, -1553,   457,   457, -1553,
   -1553,  -116, -1553, -1553,   275, -1553,   363,   363,   363, -1553,
   -1553,   679,   378,  1009,  1009,  1009,  1267,  1200,  1200,  1269,
    1008,  1010,  1011,  1013,  1014,  1016,  1017,  1018, -1553, -1553,
      11, -1553, -1553, -1553, -1553,    18, -1553, -1553, -1553,   -11,
     464, -1553,   -11,   466, -1553,  1020,  1280, -1553,   -11,   -11,
     -11,   -11,   -11,   -11,  1021, -1553,   -11,  1022, -1553,  1023,
   -1553, -1553, -1553,   -78, -1553, -1553,  1086,   -40, -1553, -1553,
   -1553, -1553,   -11, -1553,   -11, -1553, -1553, -1553,   -11,   -11,
    1087, -1553,  1037, -1553, -1553, -1553,  1294, -1553,   -11, -1553,
     -11, -1553,   -78,   -78, -1553, -1553, -1553, -1553, -1553,  1036,
    1038, -1553,  1039, -1553, -1553, -1553, -1553, -1553,  1428, -1553,
   -1553, -1553, -1553, -1553, -1553,  1040, -1553, -1553, -1553, -1553,
     -11,  1041, -1553,  1042, -1553, -1553,  1043,   -11, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553,   719,   -62, -1553,   -11, -1553, -1553,  1044,  1046,  1047,
   -1553, -1553,  1048,  1049,  1050,  1051, -1553,  1053,  1054,  1055,
    1057, -1553, -1553, -1553, -1553,  1060,  1061,  1062,  1064, -1553,
     934, -1553,  1069,  1070,  1426,  1052, -1553,   -52,   -78,   -78,
     -78,  1071, -1553,  1296,  1072,  1074,  1075,  1076, -1553,   -60,
    1077,  1079,  1080,  1083, -1553,   -56, -1553,  1260, -1553, -1553,
     -11, -1553, -1553, -1553, -1553, -1553,   -11, -1553, -1553, -1553,
    1243,   -11,   117,   -11,   -11,   -11,   -11, -1553,  1273,  1084,
    1088,  1318, -1553, -1553, -1553,   326,   -11,  1089,  1093,  1321,
   -1553, -1553,  -121,   -29,   716,   331,   351, -1553,   -11,   -11,
    1333, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
    1268, -1553,  1275, -1553,   -11,  1095, -1553,   -11,  1096, -1553,
   -1553, -1553, -1553,  1348,   -11,  1289,  1159,  1160,  1114, -1553,
   -1553,  1102, -1553, -1553, -1553,    21,    25, -1553,   -11,   552,
     -11,   -11,  1103, -1553, -1553,  1105, -1553,   -11,   -11,   -11,
     -11,   -11,  1107, -1553,   -98,   -11,   -78,  1110, -1553, -1553,
   -1553, -1553,  1423,   -11, -1553,  1112, -1553, -1553, -1553,  1115,
   -1553, -1553, -1553, -1553, -1553,  1117,  1363, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553,  1364, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553,  1118, -1553, -1553, -1553, -1553,    39,
     -19, -1553,   -78, -1553,  1509, -1553,  1381,  1120, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
     -11,   -11,   -11,   -11, -1553,  1327,  1416,  1417,  1418,  1419,
     -11, -1553, -1553, -1553, -1553,   -88,  1134, -1553, -1553, -1553,
   -1553,  1345,   -49,  -116,   275,   -11, -1553, -1553, -1553, -1553,
     -11,  1268, -1553,   -11,  1275, -1553,  1127, -1553,  1135, -1553,
   -1553, -1553,   -11,   -11,   -11,   -11, -1553,    29, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553,  1206, -1553, -1553, -1553,
   -1553,  1193,  1433,  1403, -1553, -1553, -1553, -1553,  1173,  1145,
   -1553, -1553,  1148,   -78, -1553,   -78, -1553,  1565, -1553, -1553,
   -1553, -1553, -1553, -1553,   -11,   -11,  1151,   -11,  1156, -1553,
     -12,  1157,  1509, -1553,    91,  1147,  1158,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,  1163,  1415, -1553, -1553, -1553, -1553,
     363,  1009,   490, -1553,  1170, -1553,  1171, -1553, -1553, -1553,
    1449,    35,   -11, -1553, -1553,  1185, -1553,  1358,  1358,   -59,
     -11,  1175,  1197,   -11,  1178,  1193,   -11,   -11, -1553,   -11,
    1179,  1173, -1553,  1217, -1553,   -78,  1423,   -11, -1553, -1553,
   -1553,  1591, -1553,   -19, -1553, -1553,  1180,  1181, -1553, -1553,
     -11,   -11,  1450,   -11,  1183,  1186, -1553, -1553, -1553,   -11,
   -1553, -1553, -1553, -1553,   -11,   -11, -1553, -1553, -1553,  1204,
    1198,   -11,   -13,   -11, -1553, -1553, -1553,  1249, -1553,   -11,
   -1553,  1486, -1553, -1553, -1553, -1553,   -11,  1490, -1553, -1553,
   -1553, -1553,    -3,   -11, -1553,  1492,   -11,  1201, -1553, -1553,
    1202,   -11,   -11,   -11,  1568,  1571,  1207,  1388,  1394,  1407,
     -11, -1553, -1553,   -11, -1553, -1553,   -11,  1476,  1421, -1553,
     -11, -1553,   -11, -1553, -1553,  1483,   -11,  1481, -1553,  1220,
     -11,  1519, -1553, -1553,   -11,   -11,  1226, -1553, -1553, -1553,
     -11,   -11,   -11, -1553,  1290, -1553, -1553,  1487, -1553, -1553,
   -1553,  1494,   -11,   -11, -1553,  1483, -1553,  1493, -1553,   -11,
     -11,   -11,  1230, -1553, -1553, -1553, -1553, -1553,    49, -1553,
      53,   -11,   -11, -1553, -1553, -1553,    74,   -11, -1553, -1553,
    1037, -1553,  1495, -1553,   -11,   -11, -1553,  1497,  1497,    34,
   -1553, -1553, -1553, -1553, -1553, -1553,    75,    89, -1553, -1553,
    1303,  1511,   -11,  1232, -1553,   -11, -1553, -1553,  1654,   -11,
   -1553,  1556,   -11,   -11,   -11, -1553,  1258, -1553, -1553,    90,
     -11,   -11, -1553, -1553,  1307, -1553,   -11,  1259,  1520,   -11,
    1270,  1272,  1274, -1553, -1553, -1553,  1558, -1553, -1553,   -11,
    1276, -1553, -1553,  1277, -1553, -1553, -1553,   -11, -1553,   -11,
     -11, -1553, -1553, -1553,   -11,  1278,  1343,   -11,   -11,   -11,
     -11,  1279, -1553, -1553,   -23,   -11,   -11, -1553,   -11, -1553,
     -11,   -11,  1524,   -11,   -11,  1282,  1283,  1284,   -11, -1553,
   -1553, -1553,  1285, -1553
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    10,     0,  1018,     1,   819,     0,   420,    79,   501,
       0,     0,   431,   472,   410,    67,   307,   370,   852,   854,
     856,   901,     0,     3,  1020,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   848,   850,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    21,    14,     9,
      15,    22,    47,    46,    48,    49,    16,    68,    17,    83,
      50,    18,     0,   305,     0,    19,    20,    24,   412,    27,
     422,    26,    25,    32,    28,   476,    29,   505,    30,   823,
      23,    51,    31,    33,    34,    35,    37,    36,    38,    39,
      40,    41,    42,    43,    44,    45,    11,  1019,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   903,     0,     0,     0,     0,     0,     0,     0,
     978,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    61,    60,     0,    62,    63,     0,
       0,     0,     0,   308,     0,   375,   394,   391,   377,   396,
       0,     0,     0,   499,   817,     0,     2,   820,   430,    80,
     502,     0,    53,    52,   432,   473,   371,     0,     0,     0,
       0,     7,     0,     0,   975,   995,   977,   976,     0,  1013,
    1012,  1014,     6,    55,    54,     0,     0,  1015,  1016,  1017,
      57,    59,    65,    64,     0,   303,   302,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,     0,     0,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,   132,
       0,   135,     0,     0,   140,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,   207,     0,     0,     0,     0,     0,   177,
       0,     0,     0,     0,     0,   185,   207,    85,     0,     0,
       0,     0,    78,    84,   309,   310,   342,   361,     0,   332,
     311,   330,   322,     0,   323,   325,   327,     0,   328,   363,
     376,   373,     0,   378,   379,   390,     0,   416,   409,   413,
       0,     0,     0,   419,   423,   425,     0,   474,     0,   486,
     491,   471,   477,   480,   479,   481,     0,   753,   586,     0,
       0,   588,   743,     0,   596,     0,   592,     0,     0,   532,
     756,   527,     0,     0,     0,     0,     0,   506,   511,   507,
     508,   509,   510,   514,   513,   515,   512,   516,   517,   519,
       0,   518,   520,   600,   523,     0,   524,   525,   526,   758,
     593,   827,   829,   831,     0,   834,     0,   825,     0,   824,
     839,   837,    12,   429,   437,     0,     0,     0,     0,   907,
     917,   905,   911,   919,   909,   913,   915,   904,     4,   974,
       0,     0,     0,     0,    58,     0,     0,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,     0,   279,   280,
     281,   282,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,   274,   275,   273,   276,   277,   278,     0,
       0,     0,     0,     0,     0,     0,     0,   242,   241,   243,
     121,     0,     0,     0,     0,     0,   137,     0,     0,     0,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   208,   209,     0,
       0,   170,   174,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   187,     0,     0,   149,     0,     0,
       0,     0,     0,     0,   368,   306,   324,   344,   346,   347,
     345,   348,   350,   351,   349,   352,   353,   354,   355,   358,
     356,   359,   357,   338,     0,     0,     0,     0,   360,     0,
       0,     0,   383,     0,     0,   380,   381,   392,     0,     0,
       0,     0,     0,     0,     0,     0,   397,   411,     0,   421,
     428,     0,     0,     0,     0,     0,     0,     0,   493,   544,
     552,   553,   541,     0,   549,   543,   550,   547,   548,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   585,   747,   745,   581,
       0,     0,   503,   500,     0,     0,     0,   742,   699,   417,
     417,   417,   417,     0,     0,   710,   709,     0,     0,     0,
       0,   838,     0,   845,     0,   821,   818,     0,     0,   439,
       0,     0,     0,   872,   858,   891,     0,     0,   858,     0,
     887,   886,     0,     0,     0,   858,     0,   902,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1002,     0,   998,
    1001,     0,   985,     0,   981,   984,   858,   858,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,     0,
     113,   104,   114,    82,   109,    94,     0,    90,     0,     0,
       0,   183,   112,   944,   111,    88,    98,     0,     0,   259,
       0,     0,   116,   115,   110,     0,     0,     0,     0,     0,
     131,     0,   233,     0,   134,     0,   239,   139,     0,   142,
       0,   239,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,     0,   166,   167,     0,   285,   286,   287,   288,
       0,     0,   168,   283,   225,   169,     0,     0,     0,     0,
       0,     0,    89,   184,    97,    92,     0,    96,   717,   719,
       0,   188,   189,     0,   151,   150,   343,     0,   329,     0,
       0,     0,   333,     0,   326,     0,   497,   341,   339,     0,
     417,   417,   364,   379,   395,   387,   388,   389,     0,     0,
     407,   372,   382,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   424,     0,   426,   483,   482,   484,   475,
       0,   488,   489,   490,   485,   487,     0,   545,   546,   562,
     565,   563,   564,   566,   567,   554,   542,   572,   573,   569,
     568,   570,   571,   555,   558,   556,   557,   559,   560,   561,
     551,   540,     0,     0,     0,   574,     0,   580,   597,   579,
       0,   578,   577,   576,   534,   535,   536,   531,   533,     0,
       0,   529,   521,   522,     0,     0,   584,   582,     0,     0,
     590,     0,   591,     0,     0,     0,   598,     0,     0,   629,
       0,     0,   608,     0,     0,   623,   625,   681,     0,     0,
       0,     0,     0,     0,     0,     0,   694,     0,     0,     0,
       0,   642,   627,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   659,   665,   661,
     663,     0,   595,   601,   611,   682,     0,     0,     0,     0,
       0,   417,     0,     0,   741,   698,     0,   809,     0,     0,
       0,     0,   760,   808,     0,     0,     0,     0,   762,     0,
       0,   788,   789,     0,     0,     0,   790,   791,     0,     0,
       0,   785,   786,   787,   755,   759,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   841,   843,   840,   438,   433,     0,   869,     0,
       0,     0,     0,     0,   859,   860,   853,     0,     0,     0,
     855,     0,   883,     0,     0,     0,   896,   897,   892,   893,
     894,   895,     0,     0,   898,   899,   900,     0,     0,     0,
       0,     0,   857,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   858,   999,     0,
       0,     0,   858,   982,   849,   851,     0,    71,    74,    76,
      73,    72,    70,    75,    77,     0,   107,    95,    91,     0,
     105,   947,   946,   949,   950,   944,   261,   262,   263,   120,
     260,     0,     0,   264,     0,   123,     0,   122,   128,   125,
     124,     0,   133,   136,   240,     0,   141,   144,     0,   165,
     172,   148,   179,     0,     0,     0,     0,     0,     0,   194,
       0,   178,    93,     0,   181,     0,     0,   152,   362,     0,
     337,   336,   335,   331,   334,   369,     0,   340,   366,     0,
       0,   385,     0,   393,     0,   398,   399,   406,   405,     0,
     404,     0,     0,     0,     0,   427,     0,     0,   492,   494,
     754,   587,   575,   589,     0,   539,   538,   537,   528,   530,
       0,   744,   746,   583,   504,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   690,   691,   692,   693,     0,   695,   697,   696,     0,
       0,   685,   688,   689,   687,   686,   684,     0,     0,     0,
       0,     0,     0,   969,   969,   969,     0,     0,   969,   969,
     969,   969,     0,     0,   969,     0,     0,     0,     0,     0,
       0,   602,     0,     0,   645,     0,   700,   418,     0,   719,
       0,     0,     0,     0,     0,   721,   702,   711,   757,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   810,
     811,   812,     0,     0,   803,     0,     0,     0,   800,   784,
       0,     0,     0,     0,   792,   793,   794,     0,     0,   798,
     799,     0,   828,   830,     0,     0,   832,     0,     0,   835,
       0,     0,   846,   826,   822,   833,     0,     0,   458,     0,
     451,     0,     0,     0,   442,   443,     0,   440,   445,   446,
     447,   444,   441,   861,     0,     0,   870,   866,   865,   867,
     868,     0,   889,   888,     0,   884,   875,   874,   873,   879,
     880,   882,   881,   878,   877,   876,   923,   938,   938,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1000,  1004,
       0,   997,   996,   983,   987,     0,   980,   979,   304,     0,
       0,   267,     0,     0,   270,   936,     0,   951,     0,     0,
       0,     0,     0,     0,     0,   945,     0,     0,   265,     0,
     244,   255,   257,     0,   138,   146,   218,   210,   284,   171,
     232,   230,     0,   231,     0,   175,   226,   227,     0,     0,
       0,   255,   297,   186,   718,   720,   216,   190,     0,   236,
       0,   498,     0,     0,   374,   384,   386,   408,   402,     0,
       0,   400,     0,   414,   478,   495,   594,   748,   727,   631,
     636,   637,   680,   679,   676,     0,   677,   599,   618,   616,
       0,     0,   614,     0,   632,   633,     0,     0,   610,   635,
     634,   617,   615,   638,   639,   613,   622,   621,   612,   620,
     619,     0,     0,   671,     0,   641,   970,     0,     0,     0,
     649,   650,     0,     0,     0,     0,   972,     0,     0,     0,
       0,   667,   668,   669,   670,     0,     0,     0,     0,   605,
       0,   603,     0,     0,     0,   712,   719,     0,     0,     0,
       0,     0,   723,     0,     0,     0,     0,     0,   813,     0,
       0,     0,     0,     0,   815,     0,   777,     0,   767,   804,
       0,   768,   801,   781,   782,   783,     0,   795,   796,   797,
       0,     0,     0,     0,     0,     0,     0,   836,     0,     0,
       0,     0,   455,   456,   457,     0,     0,     0,     0,   435,
     434,   862,     0,     0,     0,     0,     0,   924,     0,   942,
     940,   925,   908,   918,   906,   912,   920,   910,   914,   916,
       0,  1005,     0,   988,     0,     0,   268,     0,     0,   271,
     937,   948,   956,     0,     0,   959,     0,     0,     0,   963,
     101,     0,   117,   118,   257,     0,     0,   234,     0,   220,
       0,     0,     0,   228,   229,     0,   102,     0,   195,     0,
       0,     0,     0,    86,     0,     0,     0,     0,   403,   401,
     415,   496,     0,     0,   678,     0,   640,   609,   624,     0,
     675,   674,   673,   643,   672,     0,     0,   646,   648,   647,
     651,   652,   655,   654,     0,   656,   657,   653,   658,   660,
     666,   662,   664,   606,     0,   604,   683,   644,   713,   714,
       0,   703,     0,   719,     0,   705,     0,     0,   772,   776,
     774,   770,   814,   761,   771,   769,   773,   775,   816,   763,
       0,     0,     0,     0,   764,     0,     0,     0,     0,     0,
       0,   842,   844,   459,   453,     0,     0,   448,   449,   436,
     863,     0,     0,     0,     0,     0,   943,   921,   941,   922,
       0,  1003,  1006,     0,   986,   989,     0,   108,     0,   106,
     952,   957,     0,     0,     0,     0,   266,     0,   129,   256,
     258,   126,   236,   219,   221,   222,   223,   211,   213,   180,
     176,   204,     0,     0,   298,   199,   217,   182,   191,     0,
     237,   238,     0,     0,   365,     0,   750,     0,   630,   626,
     628,   971,   973,   607,     0,     0,     0,     0,     0,   719,
       0,     0,     0,   722,     0,     0,     0,     0,   805,     0,
       0,     0,     0,     0,     0,     0,   452,   454,   450,   864,
     871,   890,   885,   939,     0,  1007,     0,   990,   269,   272,
     965,   926,     0,   954,   961,     0,   245,     0,     0,     0,
       0,     0,   214,     0,     0,   204,     0,     0,   255,     0,
       0,   191,   153,     0,   719,     0,   749,     0,   716,   715,
     701,     0,   704,     0,   707,   706,     0,     0,   802,   780,
       0,     0,     0,     0,   728,   731,   739,   740,   847,     0,
    1008,   991,   966,   953,     0,     0,   927,   958,   960,   967,
     931,     0,   248,     0,   130,   127,   235,     0,   173,     0,
     212,     0,   103,   205,   202,   196,   200,     0,    87,   192,
     154,   312,     0,     0,   751,     0,     0,     0,   724,   778,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   928,
       0,   968,   955,     0,   962,   964,     0,     0,     0,   253,
       0,   215,     0,   299,   255,   293,     0,     0,   367,     0,
       0,     0,   708,   779,     0,     0,     0,   729,   732,   460,
       0,     0,     0,   930,     0,   251,   249,     0,   255,   224,
     206,   203,   197,     0,   201,   293,   193,     0,   752,     0,
       0,   806,     0,   766,   736,   736,   463,  1010,     0,   993,
       0,     0,     0,   255,   257,   246,     0,     0,   300,   289,
     297,   294,     0,   726,     0,     0,   765,   730,   733,     0,
    1009,  1011,   992,   994,   929,   932,     0,     0,   257,   254,
       0,   198,     0,     0,   725,     0,   738,   737,     0,     0,
     461,     0,     0,     0,     0,   464,   934,   252,   250,     0,
       0,     0,   290,   295,     0,   807,     0,     0,     0,     0,
       0,     0,     0,   935,   933,   247,     0,   291,   255,     0,
       0,   469,   462,     0,   465,   466,   470,     0,   255,   296,
       0,   468,   467,   301,   292,     0,     0,     0,     0,     0,
       0,     0,   313,   315,   314,     0,     0,   320,     0,   316,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   318,
     321,   317,     0,   319
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1553, -1553, -1553, -1553,    -6, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,   -96, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,   -86, -1553,
    1430, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553,   219, -1553,    10, -1553,  1000, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553,   -58, -1553, -1343, -1552, -1553,  1058,
   -1553,   653, -1553,   388, -1553,   386, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553,  -194, -1553, -1553,  -218, -1553, -1553, -1553,
   -1553,   757, -1553,  1431, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553,  1231, -1553, -1553,   979, -1553,
    -148, -1553,  -322, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553,  1205,   972, -1553,
    -519, -1553, -1553,  -144, -1553, -1553, -1553, -1553, -1553, -1553,
     632, -1553,   767, -1553, -1553, -1553, -1553, -1553,  -433, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1397, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553,  -211, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
     886, -1553,   534, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
     302, -1553, -1553, -1553, -1553, -1553, -1553,   535,   836, -1553,
   -1553, -1553, -1553, -1553,  -898, -1181, -1202, -1553, -1553, -1553,
   -1469,  -590, -1553, -1553, -1553, -1553, -1553,  -186, -1553, -1553,
   -1553, -1553, -1553, -1553,   903, -1553, -1553, -1553,   -43, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553,   512, -1553, -1553,     6,   250,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553,  1600, -1553, -1553, -1553,
    -589,  -400,  -834,  -334,  -576,  -332,  -624, -1553, -1553, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,  -265,
   -1553, -1553, -1553, -1553, -1553,   447, -1553, -1553,   712, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,  -540,
   -1553,  -894, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553,
   -1553,  1113, -1553, -1553, -1553, -1553,    76, -1553, -1553, -1553,
   -1553, -1553, -1553,  1123, -1553, -1553, -1553, -1553,    77, -1553,
   -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553, -1553
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    46,   114,   515,    47,    48,     3,   156,    49,
      50,    51,    52,    53,    54,    55,   136,   139,   194,    56,
      57,   141,   206,    58,    59,   101,   272,   414,   142,   273,
     484,  1718,   673,  1711,   431,   686,  1352,  1778,  1351,  1777,
     443,   445,   696,   448,   450,   701,   466,  1379,  1850,   723,
    1356,   724,   476,  1357,  1376,   482,   742,  1086,  1790,  1791,
     731,  1371,  1713,  1884,  1939,  1788,  1885,  1883,  1784,  1785,
     469,  1572,  1782,  1840,  1582,  1569,  1706,  1781,  1075,  1366,
    1367,   693,  1702,  1584,  1720,  1065,   440,  1057,  1564,  1832,
    1958,  1878,  1934,  1933,  1834,  1908,  1565,  1566,   678,   679,
    1052,  1053,  1330,  1331,  1333,  1334,   429,   412,  1074,   720,
    1961,  1982,  2008,  1914,  1915,  1998,  1580,  1911,  1938,    60,
     395,    61,   144,    62,    63,   282,   492,  1887,  2023,  2024,
    2029,  2032,   283,   284,   496,   285,   493,   751,   752,   286,
     287,   489,   516,   288,   289,   490,   518,   762,  1382,   495,
     753,    64,   108,    65,    66,   519,   291,   147,   524,   525,
     526,   768,  1102,   148,   294,   527,   149,   292,   295,   536,
     771,  1104,    67,    68,   298,   150,   299,   300,   908,    69,
      70,   303,   151,   304,   541,   785,   305,    71,    72,    73,
     106,   374,  1276,  1520,   609,   966,  1277,  1278,  1279,  1280,
    1281,  1515,  1665,  1282,  1511,  1755,  1926,  1988,  1949,  1975,
      74,    75,   107,   311,   545,   152,   312,   313,   314,   547,
     795,   315,   548,   796,  1119,  1591,  1374,    76,   336,    77,
     102,   583,   849,   153,   337,   573,   840,   338,   572,   838,
     841,   339,   559,   820,   805,   813,   340,   341,   342,   343,
     344,   345,   346,   347,   561,   348,   564,   349,   350,   367,
     351,   352,   353,   566,   902,  1143,   586,   903,  1149,  1152,
    1153,  1181,  1146,  1180,  1196,  1198,  1199,  1197,  1455,  1432,
    1433,   904,   905,  1205,  1177,  1165,  1169,   594,   595,   906,
    1465,   915,  1629,  1736,   739,  1375,  1083,   596,  1473,  1636,
    1738,   585,   954,  1864,  1924,  1865,  1925,  1947,  1967,   957,
     354,   355,   356,   845,   578,   844,  1592,  1796,  1726,   357,
     560,   358,   359,   944,   597,   945,  1223,  1228,  1748,   946,
     947,  1247,  1500,  1251,  1237,  1238,  1235,  1812,   948,  1232,
    1479,  1485,    78,   368,    79,    98,   606,   960,   154,   369,
     604,   598,   599,   600,   602,   370,   607,   964,  1266,  1267,
     958,  1262,    80,   127,    81,   128,    82,   109,   110,   111,
     976,  1285,  1672,   624,   625,   626,   997,    83,   112,   170,
     387,   630,   628,   633,   631,   634,   635,   629,   632,  1310,
    1827,  1874,  1976,  1994,  1551,  1529,  1679,  1677,  1044,  1045,
    1335,  1344,  1553,  1770,  1829,  1771,  1830,  1823,  1872,  1437,
    1606,  1447,  1614,    84,    85,    86,    87,    88,   178,  1022,
     643,   644,   645,  1020,  1325,  1684,  1685,  1868,  1930,    89,
     390,  1017,   638,   639,   640,  1015,  1320,  1681,  1682,  1867,
    1928,    90,    91,    92,    93,    94,    95,    96,    97
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     100,   728,  1005,   293,   103,   335,   772,  1467,   950,   951,
    1209,  1211,  1697,   580,   959,  1737,  1208,   306,  1210,   115,
     116,   117,   118,   119,   120,   121,   122,   123,  1578,   980,
    1469,   274,   911,   408,   967,   132,  1002,  1212,   307,   140,
     977,   614,  1392,   981,   618,  1041,   982,   984,  1968,  1200,
      99,   814,   815,   799,  1405,   615,  1824,  1024,  1025,  1734,
     646,   647,  1137,  2025,  1336,  2026,   316,   542,   317,  1969,
      99,  1970,   195,  1360,    99,  2027,   517,   521,   133,   791,
     792,    99,  1269,   677,   301,   816,   318,    99,   418,   834,
     835,   423,  1670,   793,    99,   616,   750,   161,   276,    99,
     319,   320,   817,   836,  1117,   569,   839,   145,  1431,   173,
    1642,    99,   565,    99,  1648,  1260,   321,    99,  1664,  1337,
      99,   146,  1268,    99,   581,    99,    99,  1570,    99,   818,
     917,    99,   308,    99,   322,   432,    99,  1131,   323,   409,
     800,   543,   309,   522,  1971,   570,     4,    99,  1270,  1203,
     324,   801,   802,    99,  1876,   424,   325,   909,   910,   912,
      99,    99,   610,   137,   577,  1741,   687,  1138,  1972,    99,
    1204,    99,    99,  1735,   549,   129,    99,  1229,   296,   138,
     326,   327,   328,    99,  1670,   425,   550,   551,   552,   302,
      99,   329,    14,    99,    99,   759,   658,  1700,   330,  1230,
    1231,  1700,   553,   407,   923,   413,  1016,   415,   416,   417,
     419,   420,   421,   422,   113,   430,   669,   434,   435,   436,
      16,    99,   442,   124,   444,    99,   446,   447,  1269,   449,
     143,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,    99,    99,   470,  1101,
     472,   473,   474,   426,   477,   478,   479,   480,   481,   848,
     554,  1700,  1700,   486,  1630,   488,   297,  1021,  1757,   196,
    1825,   738,   491,  1806,   743,   130,   555,   968,   969,   691,
     961,  1261,   544,  1877,   571,   978,   331,  1632,  1633,   983,
    1338,   985,   131,  1042,  1270,   688,  1248,   998,   999,  1448,
     427,  1450,   546,  1000,  1001,  1973,   970,   971,   972,   973,
    1466,   433,  1468,   521,  1571,  1671,   332,   617,   158,   567,
     777,   568,  1361,   803,  1362,   104,   105,  1098,  1099,  1363,
    1373,   514,  1406,  1826,  1857,   514,  1719,   157,  1393,  1385,
    1043,  1201,   514,   794,  1756,  1049,   729,  1459,   514,   907,
    1364,   155,   819,   837,  1339,   514,   410,   411,  1093,   665,
     603,  1005,  1166,   159,   146,   333,  1118,  1365,  1128,   613,
    1603,   613,  1643,  2028,   514,  1836,  1649,   667,   611,   522,
    1631,   514,  1957,   160,   612,   735,   275,   514,   164,   514,
     649,   650,   651,   783,   652,   653,   654,   655,   310,   979,
     659,   556,  1340,  1167,   730,  1723,  1979,  1671,   514,   804,
     666,   668,   670,   773,   514,   528,   428,  1974,   636,   637,
    1804,   514,  1299,  1300,  1301,  1302,   334,   681,  1322,  1888,
     514,  1740,   850,  1327,   685,   689,  1488,   692,   901,   692,
     962,   963,   692,  1540,   692,  1846,   615,    99,   162,  1271,
    1542,  1739,   276,  1698,   529,   163,   712,  1701,  1272,  1273,
     197,  1776,  1249,   721,  1341,  1342,  1250,   165,   277,  1168,
     521,  1343,   198,   530,   736,   166,   199,   740,  1214,   641,
     642,  1950,   167,   200,  1586,  1952,   619,   168,   557,   620,
     621,   531,   532,  1283,   998,   999,  1269,   998,   999,   622,
    1000,  1001,   169,  1000,  1001,   797,  1959,  1977,   755,   756,
     125,   126,    16,   558,   278,  1295,   533,   276,  1161,   774,
     521,  1978,  1995,   775,   776,   171,   778,   779,   780,   781,
     974,   587,  1087,   277,   975,   784,   522,  1803,  1306,  1307,
    1308,  1912,  1794,   588,  1670,   172,   798,   998,   999,   534,
     174,  1162,   201,  1000,  1001,   979,   202,   279,   588,   974,
     134,   135,  1270,   975,  1670,  1936,  1109,   986,   987,   988,
     989,   990,   991,  1003,  1004,  1309,   589,  1291,   851,   278,
     185,  1294,   590,  1386,   807,   808,   522,   913,   591,   175,
    1956,   589,  1852,   203,   998,   999,   760,   590,   176,  1163,
    1000,  1164,   761,   591,   613,   613,   613,   437,   438,   439,
     613,   204,   979,   613,  1139,   360,   613,   613,  1292,   293,
     192,   193,   279,  1140,  1141,   186,   970,   971,   972,   973,
    1014,   146,   280,  1286,   177,  1019,  1287,  1288,  1289,  1290,
     281,   592,   467,   468,  1438,  1439,   593,  1293,  1442,  1443,
    1444,  1445,   574,   575,  1449,  2009,   592,  1142,  1296,  1297,
     179,   593,   290,  1298,   695,  2014,   180,   698,   181,   700,
     182,  1303,  1304,  1305,   372,  1054,  1509,  1510,   809,   183,
     810,  1058,   361,   362,   363,   364,   365,   366,   184,  1673,
    1202,  1674,  1673,    18,    19,    20,   187,   738,   738,  1213,
     188,  1215,   611,   636,   637,   281,   998,   999,   623,  1070,
     974,   189,  1000,  1001,   975,  1072,   190,  1284,  1525,   191,
    1076,  1077,   373,  1079,   811,   812,   970,   971,   972,   973,
     375,   974,   535,   376,  1084,   975,   716,   717,   718,   719,
     388,   205,  1311,  1312,  1313,  1314,  1315,  1316,  1317,  1096,
      99,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,  1671,   641,   642,
    1171,  1451,  1452,  1453,  1454,  1113,  1114,   377,  1115,   979,
    1172,   765,   766,   767,  1116,   389,   994,  1671,   995,   996,
     970,   971,   972,   973,  1173,  1395,    99,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,  1398,   392,  1174,  1046,  1047,  1048,  1090,
    1091,  1092,   952,   953,  1124,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,  1125,  1126,  1127,   391,  1135,   393,  1136,   955,   956,
    1353,  1144,  1145,  1051,  1347,  1148,   394,  1150,  1151,  1512,
    1513,  1514,  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1175,
     396,  1170,   397,  1178,  1179,  1244,  1245,  1246,  1183,  1184,
    1462,  1186,  1187,  1497,  1498,  1499,   972,   973,  1383,  1600,
    1601,  1602,  1176,  1491,  1236,   998,   999,  1329,  1545,  1332,
    1548,  1207,  1005,  1704,  1705,   398,   399,   400,   401,   402,
     403,   404,  1219,  1220,  1221,  1222,   406,   405,  1224,  1225,
    1226,  1227,   441,   471,   475,   485,   494,  1234,   487,  1670,
     520,   537,   986,   987,   988,   989,   990,   991,   992,   993,
     538,   539,   540,   851,   562,   563,  1254,  1255,   576,  1257,
    1258,  1522,   577,   582,   584,   601,   605,   608,   627,  1523,
    1524,   648,  1526,   657,   613,   613,   613,   613,   660,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   656,   613,   613,   661,  1460,
     662,   613,   613,   613,   613,   613,   663,   738,   664,   738,
     741,  1470,  1471,  1472,   671,   677,   672,   674,   675,  1319,
     513,   514,   676,   682,  1324,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   680,   986,   987,   988,   989,   990,   991,   992,   993,
     683,   684,   690,   715,   694,  1346,   986,   987,   988,   989,
     990,   991,  1003,  1004,   697,   699,   579,   514,   702,   986,
     987,   988,   989,   990,   991,   992,   993,  1358,   703,   704,
     705,   706,  1370,   707,  1372,   708,   709,   710,   726,  1377,
     711,   727,   713,   714,   758,   986,   987,   988,   989,   990,
     991,  1003,  1004,   722,   725,   732,   733,   734,  1762,   737,
     744,   745,   746,   747,   748,  1389,  1390,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   749,   750,   757,   764,   769,   770,   782,
     786,   787,   788,   789,   790,   378,   806,   821,  1624,   822,
    1410,   823,  1567,   970,   971,   972,   973,  1417,   824,   825,
     826,   994,  1671,   995,   996,   827,   379,   828,   829,   830,
     831,   832,   380,   833,   839,   381,   382,   842,   843,   846,
     852,   738,  1587,   907,   914,  1434,   949,  1056,   965,   383,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,  1006,  1007,   384,  1008,
    1009,  1010,  1011,  1012,  1013,  1026,  1035,  1064,  1027,  1028,
    1029,  1030,  1031,  1474,  1475,  1476,  1477,  1059,  1480,  1481,
    1482,  1483,  1032,  1073,  1033,  1034,  1078,  1487,   847,  1489,
    1490,  1039,  1036,  1037,  1038,  1040,  1055,  1496,  1051,  1060,
    1080,  1061,  1501,   970,   971,   972,   973,  1062,  1085,  1063,
    1286,   994,  1066,   995,   996,  1508,  1067,  1069,   979,  1634,
     385,   386,  1095,  1111,  1292,   994,  1071,   995,   996,  1081,
     970,   971,   972,   973,  1461,  1112,  1082,  1088,   994,   613,
     995,   996,  1089,  1097,  1103,  1105,  1106,  1107,   613,  1108,
    1110,  1120,  1121,  1122,  1123,  1130,  1133,   979,  1134,  1147,
    1182,  1218,  1206,  1185,   994,  1188,   995,   996,  1189,  1216,
    1190,  1191,  1192,  1193,  1541,  1194,  1195,  1233,  1236,  1543,
    1240,  1241,  1239,  1544,  1252,  1242,  1547,  1243,  1253,  1256,
    1259,  1263,  1554,  1555,  1556,  1557,  1558,  1559,  1760,  1264,
    1561,  1761,  1265,  1318,  1321,  1323,  1328,  1326,  1329,  1350,
    1332,  1368,  1349,  1354,  1355,  1359,  1573,  1369,  1574,  1378,
    1380,  1381,  1575,  1576,  1387,  1407,  1623,  1388,  1391,  1394,
    1396,  1397,  1583,  1721,  1585,  1399,  1400,  1401,  1402,  1403,
    1404,  1408,  1409,    -8,     1,  1411,  1413,  1412,  1414,  1416,
    1415,    -8,  1418,  1419,  1420,  1431,  1421,  1422,  1423,  1424,
    1425,  1436,  1426,  1446,  1595,  1427,  1428,  1429,  1430,  1435,
    1456,  1599,  1457,  1440,  1441,    -8,  1458,  1478,  1484,  1502,
      -8,  1486,  1493,  1494,  1495,  1503,  1504,  1505,  1605,  1506,
    1507,  1516,  1517,  1519,  1518,  1528,  1521,   979,  1527,  1531,
    1532,  1550,  1533,  1534,    -8,  1535,  1536,    -8,  1537,  1538,
    1539,    -8,  1552,  1560,  1562,  1563,  1568,  1577,    -8,  1579,
      -8,  1581,  1593,  1627,    -8,  1628,  1637,  1650,  1588,  1653,
    1589,  1590,  1594,  1596,  1597,  1598,  1607,  1660,  1608,  1609,
    1610,  1611,  1612,  1613,  1651,  1615,  1616,  1617,  1663,  1618,
    1652,  1669,  1619,  1620,  1621,  1654,  1622,  1656,  1657,  1658,
    1659,  1625,  1626,  1635,  1638,  1678,  1639,  1640,  1641,  1644,
    1666,  1645,  1646,    -8,  1795,  1647,  1661,    -8,  1690,  1680,
    1662,  1667,  1675,  1676,  1692,  1668,  1683,  1687,  1689,  1693,
    1694,  1695,  1725,  1731,  1732,  1709,  1696,  1710,  1686,  1717,
      -8,  1688,  1724,  1737,  1728,    -8,    -8,  1729,  1691,  1730,
    1733,  1742,  1743,  1749,  1750,  1751,  1752,  1753,  1759,  1699,
    1780,  1768,  1703,  1783,  1707,  1708,  1758,  1786,  1721,  1769,
    1787,  1712,  1699,  1714,  1715,  1716,  1789,  1792,  1797,  1722,
    1793,  1808,  1819,  1800,  1853,  1822,  1833,  1727,  1802,  1805,
    1809,    -8,    -8,    -8,   916,  1818,   917,   918,   919,   920,
     921,  1831,  1820,  1821,  1856,  1851,   922,  1838,  1839,  1862,
    1842,  1848,  1858,  1859,    -8,  -734,  1871,  1873,  -735,  1880,
    1882,    -8,    -8,    -8,  1886,    -8,    -8,    -8,    -8,    -8,
    1890,    -8,  1897,  1892,  1893,  1898,    -8,    -8,    -8,  1899,
    1900,  1901,  1902,    -8,  1744,  1745,  1746,  1747,  1906,  1907,
    1913,  1917,  1918,    -8,  1754,    -8,    -8,  1920,  1923,  1935,
    1932,  1937,  1946,  1942,  1984,  1963,   613,  1966,   613,  1763,
     923,   924,   925,  1980,  1764,   926,   927,  1766,  1981,  1986,
    1989,  1993,  1999,    -8,    -8,    -8,  1772,  1773,  1774,  1775,
    2002,  2001,  2007,  2017,  2036,  1849,   483,    -8,    -8,  1843,
      -8,  1068,  2004,    -8,  2005,  1348,  2006,   928,  2011,  2012,
    2016,  2022,  1779,   929,  2039,  2040,  2041,  2043,  1546,  1549,
    1835,  1941,  1962,  1274,   763,   523,  1129,   754,  1798,  1799,
    1094,  1801,  1384,  1275,  1604,  1100,  1050,  1463,    -8,  1948,
    1464,  1810,  1811,  1813,  1814,  1815,  1816,  1817,  1132,  1492,
    1807,  1217,  1655,  1854,   371,  1530,  1023,  1345,  1765,     0,
    1767,  1018,   930,   931,   932,     0,  1828,     0,     0,     0,
       0,     0,     0,     0,  1837,     0,     0,  1841,     0,     0,
    1844,  1845,     0,  1847,   933,   934,     0,   935,     0,     0,
       0,  1855,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1860,  1861,     0,  1863,     0,     0,
       0,     0,     0,  1866,     0,     0,     0,     0,  1869,  1870,
       0,     0,     0,     0,     0,  1875,     0,  1879,     0,     0,
       0,     0,     0,  1881,     0,     0,   936,   937,     0,     0,
    1699,   938,   939,   940,   941,   942,   943,  1889,     0,     0,
    1891,     0,     0,     0,     0,  1894,  1895,  1896,     0,     0,
       0,     0,     0,     0,  1903,     0,     0,  1904,     0,     0,
    1905,     0,     0,     0,  1909,     0,  1910,     0,     0,     0,
    1916,     0,     0,     0,  1919,     0,     0,     0,  1921,  1922,
       0,     0,     0,     0,  1927,  1929,  1931,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1699,  1940,     0,     0,
       0,     0,     0,  1943,  1944,  1945,     0,     0,     0,     0,
       0,     0,  1951,     0,  1953,  1954,  1955,     0,     0,   207,
    1699,  1960,     0,     0,   208,   209,     0,     0,  1964,  1965,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1699,     0,     0,   210,     0,   211,  1983,   212,     0,  1985,
       0,     0,     0,  1987,     0,     0,  1990,  1991,  1992,     0,
       0,     0,     0,   213,  1996,  1997,     0,     0,     0,     0,
    2000,     0,     0,  2003,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2010,     0,     0,     0,     0,     0,     0,
       0,  2013,     0,  1699,  2015,     0,   214,     0,  1699,     0,
       0,  2018,  2019,  2020,  2021,     0,     0,     0,     0,  2030,
    2031,   215,  2033,     0,  2034,  2035,     0,  2037,  2038,     0,
     216,     0,  2042,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,     0,     0,   218,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   222,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   223,     0,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     226,   227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,     0,   252,     0,
     253,     0,     0,     0,     0,     0,     0,     0,   254,   255,
     256,     0,     0,     5,     0,     0,     0,   257,   258,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
     261,   262,   263,   264,     0,     0,     0,     6,     0,     0,
     853,     0,   265,     0,     0,   266,     0,     0,     0,     0,
       0,     0,     0,   854,   267,   268,   269,   270,   271,   855,
       0,     0,     0,   856,     0,     0,     7,     0,     0,     8,
     857,   858,     0,     9,   276,     0,     0,     0,     0,     0,
      10,     0,    11,   859,     0,     0,    12,     0,     0,   860,
       0,   861,   862,     0,     0,     0,   863,   864,     0,     0,
       0,     0,   865,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   866,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     867,     0,   868,     0,   869,    13,   870,     0,     0,    14,
       0,     0,   871,   872,     0,     0,   873,   874,     0,     0,
       0,     0,   875,   876,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,    16,    17,     0,
       0,     0,   877,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   878,     0,     0,   879,     0,     0,
     880,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,    22,    23,    24,     0,    25,    26,    27,
      28,    29,     0,    30,     0,     0,     0,     0,    31,    32,
      33,     0,   881,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,   882,    36,    37,     0,
       0,     0,     0,     0,     0,   883,     0,   884,   885,   886,
     887,   888,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,     0,    43,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   889,   890,   891,   892,   893,   894,   895,   896,     0,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   897,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   898,     0,     0,     0,     0,     0,     0,     0,   899,
       0,     0,     0,     0,     0,   900
};

static const yytype_int16 yycheck[] =
{
       6,    21,   626,   147,    10,   153,   525,  1209,   598,   599,
     908,   909,  1564,   335,   604,    34,    62,    16,    62,    25,
      26,    27,    28,    29,    30,    31,    32,    33,  1371,   618,
    1211,    29,    62,    54,   610,    41,   625,    62,    37,    45,
     616,   375,   136,   619,   376,   125,   622,   623,    14,   140,
     172,    55,    56,    46,   154,   171,    21,   646,   647,    20,
     392,   393,     6,    86,     9,    88,    16,    22,    18,    35,
     172,    37,   235,   138,   172,    98,   287,   170,   432,   168,
     169,   172,   170,   170,    37,    89,    36,   172,   124,   168,
     169,    28,   213,   182,   172,   211,   170,   103,    48,   172,
      50,    51,   106,   182,   170,    10,   170,    50,   170,   115,
     170,   172,   323,   172,   170,    37,    66,   172,  1515,    64,
     172,    64,    64,   172,   335,   172,   172,   167,   172,   133,
      39,   172,   131,   172,    84,   257,   172,    37,    88,   160,
     133,    96,   141,   236,   110,    50,     0,   172,   236,    16,
     100,   144,   145,   172,   167,    92,   106,   590,   591,   592,
     172,   172,   211,    84,    64,  1634,   167,   111,   134,   172,
      37,   172,   172,   134,    10,   172,   172,    60,    37,   100,
     130,   131,   132,   172,   213,   122,    22,    23,    24,   142,
     172,   141,   134,   172,   172,   517,   257,   172,   148,    82,
      83,   172,    38,   209,   113,   211,    37,   213,   214,   215,
     216,   217,   218,   219,   171,   221,   257,   223,   224,   225,
     162,   172,   228,   171,   230,   172,   232,   233,   170,   235,
     170,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   172,   172,   254,   768,
     256,   257,   258,   190,   260,   261,   262,   263,   264,   581,
      96,   172,   172,   269,  1466,   271,   125,    37,  1665,   432,
     235,   482,   278,  1742,   485,   172,   112,   611,   612,   257,
      37,   203,   237,   296,   189,   617,   236,  1468,  1469,   623,
     235,   623,   172,   373,   236,   296,    59,   216,   217,  1193,
     237,  1195,   308,   222,   223,   271,   427,   428,   429,   430,
    1208,   433,  1210,   170,   354,   436,   266,   433,   432,   325,
     531,   327,   387,   316,   389,    93,    94,   760,   761,   394,
     432,   433,   432,   298,  1803,   433,   434,   170,   432,   432,
     420,   432,   433,   432,   432,   432,   366,   432,   433,   379,
     415,    37,   356,   432,   299,   433,   377,   378,   432,   432,
     366,   985,     5,   170,    64,   315,   432,   432,   432,   375,
     432,   377,   432,   396,   433,   434,   432,   432,   427,   236,
     432,   433,  1934,   170,   433,   432,   384,   433,   170,   433,
     396,   397,   398,   432,   400,   401,   402,   403,   397,   428,
     406,   237,   347,    46,   424,  1586,  1958,   436,   433,   402,
     416,   417,   418,    54,   433,    33,   353,   383,   249,   250,
     432,   433,   998,   999,  1000,  1001,   376,   433,  1017,   432,
     433,  1633,   432,  1022,   440,   441,   432,   443,   586,   445,
     197,   198,   448,   432,   450,  1788,   171,   172,   432,   391,
     432,  1632,    48,   432,    72,   432,   462,   432,   400,   401,
      14,   432,   225,   469,   409,   410,   229,   170,    64,   112,
     170,   416,    26,    91,   480,   170,    30,   483,   911,   249,
     250,   432,   170,    37,  1382,   432,   211,   170,   324,   214,
     215,   109,   110,   212,   216,   217,   170,   216,   217,   224,
     222,   223,   170,   222,   223,   357,   432,   432,   514,   515,
      93,    94,   162,   349,   110,   434,   134,    48,    56,   160,
     170,   432,   432,   529,   530,   432,   532,   533,   534,   535,
     432,    37,   743,    64,   436,   541,   236,  1739,   232,   233,
     234,  1884,  1723,    64,   213,   170,   398,   216,   217,   167,
     432,    89,   106,   222,   223,   428,   110,   153,    64,   432,
     318,   319,   236,   436,   213,  1908,   777,   216,   217,   218,
     219,   220,   221,   222,   223,   269,    97,   977,   584,   110,
     170,   981,   103,  1102,    11,    12,   236,   593,   109,   432,
    1933,    97,  1794,   147,   216,   217,   103,   103,   432,   137,
     222,   139,   109,   109,   610,   611,   612,   292,   293,   294,
     616,   165,   428,   619,    46,   130,   622,   623,   434,   763,
      93,    94,   153,    55,    56,   170,   427,   428,   429,   430,
     636,    64,   163,   434,   432,   641,   970,   971,   972,   973,
     236,   162,   371,   372,  1184,  1185,   167,   979,  1188,  1189,
    1190,  1191,   267,   268,  1194,  1998,   162,    89,   992,   993,
     432,   167,    29,   997,   445,  2008,   432,   448,   432,   450,
     432,  1003,  1004,  1005,    67,   681,  1266,  1267,   105,   432,
     107,   687,   197,   198,   199,   200,   201,   202,   432,  1523,
     901,  1525,  1526,   208,   209,   210,   432,   908,   909,   910,
     432,   912,   427,   249,   250,   236,   216,   217,   433,   715,
     432,   432,   222,   223,   436,   721,   432,   436,  1294,   432,
     726,   727,   432,   729,   151,   152,   427,   428,   429,   430,
     435,   432,   350,   435,   740,   436,   362,   363,   364,   365,
     432,   295,  1007,  1008,  1009,  1010,  1011,  1012,  1013,   755,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   436,   249,   250,
       7,   362,   363,   364,   365,   781,   782,   435,   784,   428,
      17,   170,   171,   172,   790,   432,   435,   436,   437,   438,
     427,   428,   429,   430,    31,  1117,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,  1135,   435,    52,   170,   171,   172,   170,
     171,   172,   168,   169,   830,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   170,   171,   172,   432,   851,   435,   853,   168,   169,
    1061,   857,   858,   433,   434,   861,   432,   863,   864,   170,
     171,   172,   868,   869,   870,   871,   872,   873,   874,   106,
      99,   877,    73,   879,   880,   281,   282,   283,   884,   885,
    1202,   887,   888,   281,   282,   283,   429,   430,  1099,   170,
     171,   172,   129,   432,   433,   216,   217,   433,   434,   433,
     434,   907,  1526,   351,   352,   390,   157,    74,    85,    78,
     166,   297,   918,   919,   920,   921,    25,   172,   924,   925,
     926,   927,   292,   172,   418,   433,    37,   933,   432,   213,
     170,   134,   216,   217,   218,   219,   220,   221,   222,   223,
     170,    61,   170,   949,   170,   170,   952,   953,   432,   955,
     956,  1285,    64,    37,   170,   170,    37,   386,   231,  1291,
    1294,   170,  1294,   432,   970,   971,   972,   973,   432,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   172,   992,   993,   432,  1200,
     432,   997,   998,   999,  1000,  1001,   170,  1208,   432,  1210,
     414,  1212,  1213,  1214,   432,   170,   432,   432,   432,  1015,
     432,   433,   432,   432,  1020,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   433,   216,   217,   218,   219,   220,   221,   222,   223,
     432,   432,   432,   167,   432,  1051,   216,   217,   218,   219,
     220,   221,   222,   223,   432,   432,   432,   433,   432,   216,
     217,   218,   219,   220,   221,   222,   223,  1073,   432,   432,
     432,   432,  1078,   432,  1080,   432,   432,   432,   354,  1085,
     432,   370,   432,   432,   432,   216,   217,   218,   219,   220,
     221,   222,   223,   432,   432,   432,   432,   432,  1674,   432,
     432,   432,   170,   170,   432,  1111,  1112,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   170,   170,   432,   432,   170,    37,   170,
     432,   432,   432,   170,    13,    37,   349,   432,  1460,   170,
    1146,   170,  1353,   427,   428,   429,   430,  1153,   170,   432,
     170,   435,   436,   437,   438,   432,    58,   170,   432,    13,
     432,   432,    64,   432,   170,    67,    68,   432,   432,   432,
     432,  1382,  1383,   379,    37,  1181,   170,   295,   432,    81,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   170,   170,   100,   170,
     170,   170,   170,   170,   170,   170,   433,   313,   432,   432,
     432,   432,   432,  1219,  1220,  1221,  1222,   172,  1224,  1225,
    1226,  1227,   432,   167,   432,   432,   167,  1233,   432,  1235,
    1236,   433,   432,   432,   432,   432,   432,  1243,   433,   432,
     167,   433,  1248,   427,   428,   429,   430,   432,   167,   432,
     434,   435,   432,   437,   438,  1261,   432,   432,   428,  1470,
     162,   163,   170,    13,   434,   435,   432,   437,   438,   432,
     427,   428,   429,   430,   432,   149,   432,   432,   435,  1285,
     437,   438,   432,   432,   432,   432,   432,   432,  1294,   432,
     432,   432,   432,   432,   432,   170,   432,   428,   170,   170,
     170,   148,   170,   172,   435,   172,   437,   438,   172,   432,
     172,   172,   172,   172,  1320,   172,   172,   206,   433,  1325,
     171,   171,   432,  1329,   432,   171,  1332,   226,   432,   432,
     432,   432,  1338,  1339,  1340,  1341,  1342,  1343,  1672,   170,
    1346,  1673,   170,   432,   244,   432,   432,   248,   433,   172,
     433,   167,   434,   432,   432,   432,  1362,   134,  1364,   375,
     374,   434,  1368,  1369,   170,   170,   432,   432,   432,   432,
     432,   432,  1378,  1584,  1380,   432,   432,   432,   432,   432,
     432,   432,   432,     0,     1,   170,   170,   432,   432,   170,
     432,     8,   432,   432,   432,   170,   432,   432,   432,   432,
     432,    64,   432,    64,  1410,   432,   432,   432,   432,   432,
     170,  1417,   171,   432,   432,    32,   170,   170,   170,   156,
      37,   432,   432,   432,   432,    34,    34,    34,  1434,    34,
     202,   170,   170,    37,   170,   235,   212,   428,   171,   170,
     432,   421,   432,   432,    61,   432,   432,    64,   432,   432,
     432,    68,   172,   432,   432,   432,   370,   370,    75,   422,
      77,   167,    34,    37,    81,   413,   170,   207,   432,   226,
     432,   432,   432,   432,   432,   432,   432,   204,   432,   432,
     432,   432,   432,   432,  1490,   432,   432,   432,   170,   432,
    1496,   170,   432,   432,   432,  1501,   432,  1503,  1504,  1505,
    1506,   432,   432,   432,   432,   172,   432,   432,   432,   432,
    1516,   432,   432,   130,  1725,   432,   432,   134,   170,   251,
     432,   432,  1528,  1529,   235,   432,   251,   432,   432,   370,
     370,   417,   109,   170,   170,   432,   434,   432,  1544,   432,
     157,  1547,   432,    34,   432,   162,   163,   432,  1554,   432,
     432,   170,   432,   226,   138,   138,   138,   138,   213,  1565,
     354,   434,  1568,   370,  1570,  1571,   432,   134,  1779,   434,
     167,  1577,  1578,  1579,  1580,  1581,   403,   432,    13,  1585,
     432,   434,   167,   432,  1795,   136,   228,  1593,   432,   432,
     432,   208,   209,   210,    37,   432,    39,    40,    41,    42,
      43,   416,   432,   432,    13,   388,    49,   432,   411,   159,
     432,   432,   432,   432,   231,   432,   412,   419,   432,   370,
     134,   238,   239,   240,   134,   242,   243,   244,   245,   246,
     138,   248,    64,   432,   432,    64,   253,   254,   255,   432,
     252,   247,   235,   260,  1650,  1651,  1652,  1653,   172,   228,
     167,   170,   432,   270,  1660,   272,   273,   138,   432,   172,
     370,   167,   432,   170,   432,   170,  1672,   170,  1674,  1675,
     113,   114,   115,   370,  1680,   118,   119,  1683,   167,    25,
     124,   423,   375,   300,   301,   302,  1692,  1693,  1694,  1695,
     170,   432,   134,   350,   170,  1791,   266,   314,   315,  1785,
     317,   701,   432,   320,   432,  1052,   432,   150,   432,   432,
     432,   432,  1702,   156,   432,   432,   432,   432,  1330,  1333,
    1778,  1915,  1940,   966,   519,   294,   840,   496,  1734,  1735,
     751,  1737,  1100,   966,  1432,   763,   678,  1203,   355,  1925,
    1205,  1747,  1748,  1749,  1750,  1751,  1752,  1753,   845,  1237,
    1744,   915,  1502,  1796,   154,  1308,   643,  1045,  1681,    -1,
    1684,   638,   205,   206,   207,    -1,  1772,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1780,    -1,    -1,  1783,    -1,    -1,
    1786,  1787,    -1,  1789,   227,   228,    -1,   230,    -1,    -1,
      -1,  1797,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1810,  1811,    -1,  1813,    -1,    -1,
      -1,    -1,    -1,  1819,    -1,    -1,    -1,    -1,  1824,  1825,
      -1,    -1,    -1,    -1,    -1,  1831,    -1,  1833,    -1,    -1,
      -1,    -1,    -1,  1839,    -1,    -1,   279,   280,    -1,    -1,
    1846,   284,   285,   286,   287,   288,   289,  1853,    -1,    -1,
    1856,    -1,    -1,    -1,    -1,  1861,  1862,  1863,    -1,    -1,
      -1,    -1,    -1,    -1,  1870,    -1,    -1,  1873,    -1,    -1,
    1876,    -1,    -1,    -1,  1880,    -1,  1882,    -1,    -1,    -1,
    1886,    -1,    -1,    -1,  1890,    -1,    -1,    -1,  1894,  1895,
      -1,    -1,    -1,    -1,  1900,  1901,  1902,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1912,  1913,    -1,    -1,
      -1,    -1,    -1,  1919,  1920,  1921,    -1,    -1,    -1,    -1,
      -1,    -1,  1928,    -1,  1930,  1931,  1932,    -1,    -1,     9,
    1936,  1937,    -1,    -1,    14,    15,    -1,    -1,  1944,  1945,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1956,    -1,    -1,    33,    -1,    35,  1962,    37,    -1,  1965,
      -1,    -1,    -1,  1969,    -1,    -1,  1972,  1973,  1974,    -1,
      -1,    -1,    -1,    53,  1980,  1981,    -1,    -1,    -1,    -1,
    1986,    -1,    -1,  1989,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1999,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2007,    -1,  2009,  2010,    -1,    86,    -1,  2014,    -1,
      -1,  2017,  2018,  2019,  2020,    -1,    -1,    -1,    -1,  2025,
    2026,   101,  2028,    -1,  2030,  2031,    -1,  2033,  2034,    -1,
     110,    -1,  2038,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,
      -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,   258,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     290,   291,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,    -1,   348,    -1,
     350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,   359,
     360,    -1,    -1,     8,    -1,    -1,    -1,   367,   368,   369,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,
     380,   381,   382,   383,    -1,    -1,    -1,    32,    -1,    -1,
      14,    -1,   392,    -1,    -1,   395,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,   404,   405,   406,   407,   408,    33,
      -1,    -1,    -1,    37,    -1,    -1,    61,    -1,    -1,    64,
      44,    45,    -1,    68,    48,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    77,    57,    -1,    -1,    81,    -1,    -1,    63,
      -1,    65,    66,    -1,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    -1,   106,    -1,   108,   130,   110,    -1,    -1,   134,
      -1,    -1,   116,   117,    -1,    -1,   120,   121,    -1,    -1,
      -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,    -1,    -1,   162,   163,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,    -1,    -1,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   208,   209,   210,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,
      -1,    -1,    -1,   238,   239,   240,    -1,   242,   243,   244,
     245,   246,    -1,   248,    -1,    -1,    -1,    -1,   253,   254,
     255,    -1,   236,    -1,    -1,   260,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   270,   250,   272,   273,    -1,
      -1,    -1,    -1,    -1,    -1,   259,    -1,   261,   262,   263,
     264,   265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   300,   301,   302,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,
     315,    -1,   317,    -1,    -1,   320,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   332,    -1,
     355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   393,
      -1,    -1,    -1,    -1,    -1,   399
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,   440,   446,     0,     8,    32,    61,    64,    68,
      75,    77,    81,   130,   134,   157,   162,   163,   208,   209,
     210,   231,   238,   239,   240,   242,   243,   244,   245,   246,
     248,   253,   254,   255,   260,   270,   272,   273,   300,   301,
     302,   314,   315,   317,   320,   355,   441,   444,   445,   448,
     449,   450,   451,   452,   453,   454,   458,   459,   462,   463,
     558,   560,   562,   563,   590,   592,   593,   611,   612,   618,
     619,   626,   627,   628,   649,   650,   666,   668,   781,   783,
     801,   803,   805,   816,   852,   853,   854,   855,   856,   868,
     880,   881,   882,   883,   884,   885,   886,   887,   784,   172,
     443,   464,   669,   443,    93,    94,   629,   651,   591,   806,
     807,   808,   817,   171,   442,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   171,    93,    94,   802,   804,   172,
     172,   172,   443,   432,   318,   319,   455,    84,   100,   456,
     443,   460,   467,   170,   561,    50,    64,   596,   602,   605,
     614,   621,   654,   672,   787,    37,   447,   170,   432,   170,
     170,   443,   432,   432,   170,   170,   170,   170,   170,   170,
     818,   432,   170,   443,   432,   432,   432,   432,   857,   432,
     432,   432,   432,   432,   432,   170,   170,   432,   432,   432,
     432,   432,    93,    94,   457,   235,   432,    14,    26,    30,
      37,   106,   110,   147,   165,   295,   461,     9,    14,    15,
      33,    35,    37,    53,    86,   101,   110,   128,   134,   143,
     155,   167,   236,   256,   258,   271,   290,   291,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   348,   350,   358,   359,   360,   367,   368,   369,
     379,   380,   381,   382,   383,   392,   395,   404,   405,   406,
     407,   408,   465,   468,    29,   384,    48,    64,   110,   153,
     163,   236,   564,   571,   572,   574,   578,   579,   582,   583,
      29,   595,   606,   602,   603,   607,    37,   125,   613,   615,
     616,    37,   142,   620,   622,   625,    16,    37,   131,   141,
     397,   652,   655,   656,   657,   660,    16,    18,    36,    50,
      51,    66,    84,    88,   100,   106,   130,   131,   132,   141,
     148,   236,   266,   315,   376,   579,   667,   673,   676,   680,
     685,   686,   687,   688,   689,   690,   691,   692,   694,   696,
     697,   699,   700,   701,   749,   750,   751,   758,   760,   761,
     130,   197,   198,   199,   200,   201,   202,   698,   782,   788,
     794,   805,    67,   432,   630,   435,   435,   435,    37,    58,
      64,    67,    68,    81,   100,   162,   163,   819,   432,   432,
     869,   432,   435,   435,   432,   559,    99,    73,   390,   157,
      74,    85,    78,   166,   297,   172,    25,   443,    54,   160,
     377,   378,   546,   443,   466,   443,   443,   443,   124,   443,
     443,   443,   443,    28,    92,   122,   190,   237,   353,   545,
     443,   473,   257,   433,   443,   443,   443,   292,   293,   294,
     525,   292,   443,   479,   443,   480,   443,   443,   482,   443,
     483,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   485,   371,   372,   509,
     443,   172,   443,   443,   443,   418,   491,   443,   443,   443,
     443,   443,   494,   509,   469,   433,   443,   432,   443,   580,
     584,   443,   565,   575,    37,   588,   573,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   432,   433,   443,   581,   665,   585,   594,
     170,   170,   236,   562,   597,   598,   599,   604,    33,    72,
      91,   109,   110,   134,   167,   350,   608,   134,   170,    61,
     170,   623,    22,    96,   237,   653,   443,   658,   661,    10,
      22,    23,    24,    38,    96,   112,   237,   324,   349,   681,
     759,   693,   170,   170,   695,   665,   702,   443,   443,    10,
      50,   189,   677,   674,   267,   268,   432,    64,   753,   432,
     581,   665,    37,   670,   170,   740,   705,    37,    64,    97,
     103,   109,   162,   167,   726,   727,   736,   763,   790,   791,
     792,   170,   793,   443,   789,    37,   785,   795,   386,   633,
     211,   427,   433,   443,   812,   171,   211,   433,   814,   211,
     214,   215,   224,   433,   812,   813,   814,   231,   821,   826,
     820,   823,   827,   822,   824,   825,   249,   250,   871,   872,
     873,   249,   250,   859,   860,   861,   814,   814,   170,   443,
     443,   443,   443,   443,   443,   443,   172,   432,   257,   443,
     432,   432,   432,   170,   432,   432,   443,   432,   443,   257,
     443,   432,   432,   471,   432,   432,   432,   170,   537,   538,
     433,   443,   432,   432,   432,   443,   474,   167,   296,   443,
     432,   257,   443,   520,   432,   520,   481,   432,   520,   432,
     520,   484,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   443,   432,   432,   167,   362,   363,   364,   365,
     548,   443,   432,   488,   490,   432,   354,   370,    21,   366,
     424,   499,   432,   432,   432,   432,   443,   432,   665,   733,
     443,   414,   495,   665,   432,   432,   170,   170,   432,   170,
     170,   576,   577,   589,   574,   443,   443,   432,   432,   581,
     103,   109,   586,   596,   432,   170,   171,   172,   600,   170,
      37,   609,   599,    54,   160,   443,   443,   665,   443,   443,
     443,   443,   170,   432,   443,   624,   432,   432,   432,   170,
      13,   168,   169,   182,   432,   659,   662,   357,   398,    46,
     133,   144,   145,   316,   402,   683,   349,    11,    12,   105,
     107,   151,   152,   684,    55,    56,    89,   106,   133,   356,
     682,   432,   170,   170,   170,   432,   170,   432,   170,   432,
      13,   432,   432,   432,   168,   169,   182,   432,   678,   170,
     675,   679,   432,   432,   754,   752,   432,   432,   581,   671,
     432,   443,   432,    14,    27,    33,    37,    44,    45,    57,
      63,    65,    66,    70,    71,    76,    90,   104,   106,   108,
     110,   116,   117,   120,   121,   126,   127,   146,   158,   161,
     164,   236,   250,   259,   261,   262,   263,   264,   265,   325,
     326,   327,   328,   329,   330,   331,   332,   348,   385,   393,
     399,   579,   703,   706,   720,   721,   728,   379,   617,   617,
     617,    62,   617,   443,    37,   730,    37,    39,    40,    41,
      42,    43,    49,   113,   114,   115,   118,   119,   150,   156,
     205,   206,   207,   227,   228,   230,   279,   280,   284,   285,
     286,   287,   288,   289,   762,   764,   768,   769,   777,   170,
     740,   740,   168,   169,   741,   168,   169,   748,   799,   740,
     786,    37,   197,   198,   796,   432,   634,   813,   812,   812,
     427,   428,   429,   430,   432,   436,   809,   813,   814,   428,
     809,   813,   813,   812,   813,   814,   216,   217,   218,   219,
     220,   221,   222,   223,   435,   437,   438,   815,   216,   217,
     222,   223,   809,   222,   223,   815,   170,   170,   170,   170,
     170,   170,   170,   170,   443,   874,    37,   870,   872,   443,
     862,    37,   858,   860,   809,   809,   170,   432,   432,   432,
     432,   432,   432,   432,   432,   433,   432,   432,   432,   433,
     432,   125,   373,   420,   837,   838,   170,   171,   172,   432,
     538,   433,   539,   540,   443,   432,   295,   526,   443,   172,
     432,   433,   432,   432,   313,   524,   432,   432,   524,   432,
     443,   432,   443,   167,   547,   517,   443,   443,   167,   443,
     167,   432,   432,   735,   443,   167,   496,   665,   432,   432,
     170,   171,   172,   432,   577,   170,   443,   432,   617,   617,
     597,   599,   601,   432,   610,   432,   432,   432,   432,   665,
     432,    13,   149,   443,   443,   443,   443,   170,   432,   663,
     432,   432,   432,   432,   443,   170,   171,   172,   432,   679,
     170,    37,   753,   432,   170,   443,   443,     6,   111,    46,
      55,    56,    89,   704,   443,   443,   711,   170,   443,   707,
     443,   443,   708,   709,   443,   443,   443,   443,   443,   443,
     443,    56,    89,   137,   139,   724,     5,    46,   112,   725,
     443,     7,    17,    31,    52,   106,   129,   723,   443,   443,
     712,   710,   170,   443,   443,   172,   443,   443,   172,   172,
     172,   172,   172,   172,   172,   172,   713,   716,   714,   715,
     140,   432,   665,    16,    37,   722,   170,   443,    62,   733,
      62,   733,    62,   665,   617,   665,   432,   727,   148,   443,
     443,   443,   443,   765,   443,   443,   443,   443,   766,    60,
      82,    83,   778,   206,   443,   775,   433,   773,   774,   432,
     171,   171,   171,   226,   281,   282,   283,   770,    59,   225,
     229,   772,   432,   432,   443,   443,   432,   443,   443,   432,
      37,   203,   800,   432,   170,   170,   797,   798,    64,   170,
     236,   391,   400,   401,   560,   611,   631,   635,   636,   637,
     638,   639,   642,   212,   436,   810,   434,   812,   812,   812,
     812,   810,   434,   814,   810,   434,   812,   812,   812,   813,
     813,   813,   813,   814,   814,   814,   232,   233,   234,   269,
     828,   828,   828,   828,   828,   828,   828,   828,   432,   443,
     875,   244,   809,   432,   443,   863,   248,   809,   432,   433,
     541,   542,   433,   543,   544,   839,     9,    64,   235,   299,
     347,   409,   410,   416,   840,   837,   443,   434,   540,   434,
     172,   477,   475,   665,   432,   432,   489,   492,   443,   432,
     138,   387,   389,   394,   415,   432,   518,   519,   167,   134,
     443,   500,   443,   432,   665,   734,   493,   443,   375,   486,
     374,   434,   587,   665,   609,   432,   599,   170,   432,   443,
     443,   432,   136,   432,   432,   581,   432,   432,   581,   432,
     432,   432,   432,   432,   432,   154,   432,   170,   432,   432,
     443,   170,   432,   170,   432,   432,   170,   443,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   170,   718,   719,   443,   432,    64,   848,   848,   848,
     432,   432,   848,   848,   848,   848,    64,   850,   850,   848,
     850,   362,   363,   364,   365,   717,   170,   171,   170,   432,
     665,   432,   581,   681,   726,   729,   733,   735,   733,   734,
     665,   665,   665,   737,   443,   443,   443,   443,   170,   779,
     443,   443,   443,   443,   170,   780,   432,   443,   432,   443,
     443,   432,   774,   432,   432,   432,   443,   281,   282,   283,
     771,   443,   156,    34,    34,    34,    34,   202,   443,   740,
     740,   643,   170,   171,   172,   640,   170,   170,   170,    37,
     632,   212,   812,   814,   812,   813,   814,   171,   235,   834,
     834,   170,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   443,   432,   443,   443,   434,   542,   443,   434,   544,
     421,   833,   172,   841,   443,   443,   443,   443,   443,   443,
     432,   443,   432,   432,   527,   535,   536,   665,   370,   514,
     167,   354,   510,   443,   443,   443,   443,   370,   535,   422,
     555,   167,   513,   443,   522,   443,   733,   665,   432,   432,
     432,   664,   755,    34,   432,   443,   432,   432,   432,   443,
     170,   171,   172,   432,   719,   443,   849,   432,   432,   432,
     432,   432,   432,   432,   851,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   581,   432,   432,    37,   413,   731,
     735,   432,   734,   734,   665,   432,   738,   170,   432,   432,
     432,   432,   170,   432,   432,   432,   432,   432,   170,   432,
     207,   443,   443,   226,   443,   778,   443,   443,   443,   443,
     204,   432,   432,   170,   639,   641,   443,   432,   432,   170,
     213,   436,   811,   811,   811,   443,   443,   836,   172,   835,
     251,   876,   877,   251,   864,   865,   443,   432,   443,   432,
     170,   443,   235,   370,   370,   417,   434,   536,   432,   443,
     172,   432,   521,   443,   351,   352,   515,   443,   443,   432,
     432,   472,   443,   501,   443,   443,   443,   432,   470,   434,
     523,   665,   443,   734,   432,   109,   757,   443,   432,   432,
     432,   170,   170,   432,    20,   134,   732,    34,   739,   734,
     735,   739,   170,   432,   443,   443,   443,   443,   767,   226,
     138,   138,   138,   138,   443,   644,   432,   639,   432,   213,
     812,   814,   813,   443,   443,   877,   443,   865,   434,   434,
     842,   844,   443,   443,   443,   443,   432,   478,   476,   522,
     354,   516,   511,   370,   507,   508,   134,   167,   504,   403,
     497,   498,   432,   432,   734,   665,   756,    13,   443,   443,
     432,   443,   432,   735,   432,   432,   739,   777,   434,   432,
     443,   443,   776,   443,   443,   443,   443,   443,   432,   167,
     432,   432,   136,   846,    21,   235,   298,   829,   443,   843,
     845,   416,   528,   228,   533,   533,   434,   443,   432,   411,
     512,   443,   432,   507,   443,   443,   535,   443,   432,   497,
     487,   388,   735,   665,   757,   443,    13,   739,   432,   432,
     443,   443,   159,   443,   742,   744,   443,   878,   866,   443,
     443,   412,   847,   419,   830,   443,   167,   296,   530,   443,
     370,   443,   134,   506,   502,   505,   134,   566,   432,   443,
     138,   443,   432,   432,   443,   443,   443,    64,    64,   432,
     252,   247,   235,   443,   443,   443,   172,   228,   534,   443,
     443,   556,   535,   167,   552,   553,   443,   170,   432,   443,
     138,   443,   443,   432,   743,   745,   645,   443,   879,   443,
     867,   443,   370,   532,   531,   172,   535,   167,   557,   503,
     443,   552,   170,   443,   443,   443,   432,   746,   746,   647,
     432,   443,   432,   443,   443,   443,   535,   536,   529,   432,
     443,   549,   555,   170,   443,   443,   170,   747,    14,    35,
      37,   110,   134,   271,   383,   648,   831,   432,   432,   536,
     370,   167,   550,   443,   432,   443,    25,   443,   646,   124,
     443,   443,   443,   423,   832,   432,   443,   443,   554,   375,
     443,   432,   170,   443,   432,   432,   432,   134,   551,   535,
     443,   432,   432,   443,   535,   443,   432,   350,   443,   443,
     443,   443,   432,   567,   568,    86,    88,    98,   396,   569,
     443,   443,   570,   443,   443,   443,   170,   443,   443,   432,
     432,   432,   443,   432
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   439,   440,   442,   441,   443,   444,   445,   446,   446,
     446,   447,   447,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   449,   449,   450,   450,   451,   452,   453,   454,
     455,   455,   456,   456,   457,   457,   458,   459,   460,   460,
     461,   461,   461,   461,   461,   461,   461,   461,   462,   464,
     463,   466,   465,   467,   467,   469,   470,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     471,   468,   472,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   473,
     468,   474,   468,   468,   468,   475,   476,   468,   477,   478,
     468,   468,   479,   468,   468,   480,   468,   481,   468,   468,
     482,   468,   468,   483,   468,   484,   468,   485,   468,   468,
     468,   468,   486,   487,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     488,   468,   489,   468,   490,   468,   468,   491,   468,   492,
     468,   493,   468,   468,   468,   494,   468,   495,   495,   496,
     496,   497,   497,   498,   500,   501,   502,   503,   499,   504,
     505,   499,   506,   499,   507,   507,   508,   509,   509,   509,
     510,   511,   510,   510,   512,   512,   513,   513,   514,   514,
     515,   515,   515,   516,   516,   517,   517,   518,   518,   518,
     519,   519,   519,   520,   521,   520,   522,   522,   523,   524,
     524,   525,   525,   525,   527,   528,   529,   526,   530,   531,
     530,   532,   530,   534,   533,   535,   535,   536,   536,   537,
     537,   538,   538,   538,   539,   539,   540,   541,   541,   542,
     543,   543,   544,   545,   545,   545,   545,   545,   545,   546,
     546,   546,   546,   547,   547,   548,   548,   548,   548,   549,
     549,   551,   550,   552,   552,   554,   553,   555,   555,   556,
     556,   557,   558,   559,   558,   561,   560,   562,   563,   563,
     563,   565,   566,   567,   564,   568,   568,   569,   569,   569,
     570,   569,   571,   571,   572,   573,   573,   574,   574,   574,
     575,   574,   574,   576,   576,   577,   577,   577,   578,   578,
     578,   578,   580,   579,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     582,   584,   583,   585,   585,   586,   587,   586,   589,   588,
     591,   590,   592,   594,   593,   595,   595,   596,   596,   597,
     597,   598,   598,   600,   599,   601,   601,   599,   599,   599,
     602,   603,   603,   604,   606,   605,   607,   607,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   610,   609,   611,
     612,   613,   614,   614,   615,   615,   616,   617,   617,   618,
     619,   620,   621,   621,   622,   623,   623,   624,   625,   626,
     627,   629,   630,   631,   628,   632,   632,   633,   633,   634,
     634,   635,   635,   635,   635,   635,   635,   635,   636,   637,
     638,   640,   639,   641,   641,   639,   639,   639,   643,   644,
     645,   646,   642,   647,   647,   648,   648,   648,   648,   648,
     648,   649,   651,   650,   653,   652,   654,   654,   655,   655,
     655,   655,   656,   656,   656,   657,   658,   658,   659,   659,
     659,   661,   660,   662,   662,   664,   663,   665,   665,   667,
     666,   669,   668,   671,   670,   672,   672,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   673,   673,   673,   673,   673,   674,   673,   675,
     675,   676,   677,   677,   678,   678,   678,   679,   679,   679,
     680,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   682,   682,   682,   682,
     682,   682,   683,   683,   683,   683,   683,   683,   684,   684,
     684,   684,   684,   684,   685,   686,   687,   687,   687,   688,
     689,   690,   690,   690,   690,   691,   693,   692,   695,   694,
     696,   696,   697,   698,   699,   700,   702,   701,   704,   703,
     705,   705,   706,   706,   706,   706,   706,   706,   707,   706,
     706,   706,   706,   706,   706,   706,   706,   706,   706,   706,
     706,   706,   706,   708,   706,   709,   706,   710,   706,   711,
     706,   706,   706,   706,   706,   706,   706,   706,   706,   706,
     706,   706,   712,   706,   706,   706,   706,   706,   706,   706,
     706,   706,   706,   706,   706,   706,   706,   706,   706,   713,
     706,   714,   706,   715,   706,   716,   706,   717,   717,   717,
     717,   718,   718,   719,   719,   719,   720,   720,   720,   720,
     720,   721,   722,   722,   723,   723,   723,   723,   723,   723,
     724,   724,   724,   724,   725,   725,   725,   725,   726,   728,
     729,   727,   727,   727,   727,   727,   727,   727,   727,   727,
     730,   730,   731,   731,   732,   732,   732,   733,   734,   735,
     735,   737,   736,   738,   736,   739,   740,   740,   742,   743,
     741,   744,   745,   741,   741,   741,   746,   746,   747,   748,
     748,   749,   749,   750,   751,   752,   752,   754,   755,   753,
     756,   756,   757,   759,   758,   760,   761,   762,   763,   763,
     765,   764,   766,   764,   767,   764,   764,   764,   764,   764,
     764,   764,   764,   764,   764,   764,   764,   764,   764,   764,
     764,   764,   764,   764,   764,   768,   768,   768,   769,   769,
     769,   769,   770,   770,   770,   771,   771,   771,   772,   772,
     773,   773,   774,   775,   775,   776,   776,   776,   777,   777,
     778,   778,   778,   779,   779,   780,   780,   782,   781,   784,
     783,   786,   785,   787,   787,   789,   788,   790,   788,   791,
     788,   792,   788,   788,   793,   788,   788,   788,   794,   795,
     795,   797,   796,   798,   796,   799,   799,   800,   802,   801,
     804,   803,   806,   805,   807,   805,   808,   805,   809,   809,
     809,   810,   810,   811,   811,   812,   812,   812,   812,   812,
     812,   812,   812,   813,   813,   813,   813,   813,   813,   813,
     813,   813,   813,   813,   813,   813,   813,   813,   814,   814,
     814,   814,   815,   815,   815,   815,   815,   815,   815,   815,
     815,   817,   816,   818,   818,   820,   819,   821,   819,   822,
     819,   823,   819,   824,   819,   825,   819,   826,   819,   827,
     819,   828,   828,   828,   828,   828,   829,   829,   829,   829,
     829,   830,   831,   830,   832,   832,   833,   833,   834,   834,
     835,   835,   836,   836,   837,   837,   838,   839,   838,   838,
     840,   841,   842,   840,   843,   840,   840,   844,   840,   840,
     840,   845,   840,   840,   840,   846,   846,   847,   847,   848,
     849,   848,   851,   850,   852,   853,   854,   855,   857,   856,
     858,   859,   859,   860,   860,   862,   861,   863,   863,   864,
     864,   866,   865,   867,   867,   869,   868,   870,   871,   871,
     872,   872,   874,   873,   875,   875,   876,   876,   878,   877,
     879,   879,   880,   881,   882,   883,   884,   885,   886,   886,
     887
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     4,     1,     3,     3,     0,     2,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     2,     3,     4,     3,
       1,     1,     1,     1,     1,     1,     4,     1,     0,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     3,     0,
       3,     0,     3,     0,     2,     0,     0,     9,     3,     3,
       3,     4,     3,     4,     3,     4,     3,     3,     3,     3,
       0,     6,     0,     9,     3,     4,     7,     4,     7,     3,
       3,     3,     3,     3,     3,     3,     3,     6,     6,     0,
       4,     0,     4,     4,     4,     0,     0,     9,     0,     0,
       9,     3,     0,     4,     3,     0,     4,     0,     5,     3,
       0,     4,     3,     0,     4,     0,     5,     0,     4,     2,
       3,     3,     0,     0,     9,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       0,     5,     0,     9,     0,     5,     7,     0,     4,     0,
       7,     0,     7,     3,     3,     0,     5,     0,     1,     0,
       2,     0,     2,     4,     0,     0,     0,     0,    11,     0,
       0,     9,     0,     9,     0,     2,     4,     0,     1,     1,
       0,     0,     4,     2,     0,     2,     0,     2,     0,     2,
       0,     1,     1,     0,     4,     0,     2,     1,     2,     2,
       1,     1,     1,     1,     0,     7,     0,     2,     1,     0,
       1,     1,     1,     1,     0,     0,     0,    12,     0,     0,
       5,     0,     5,     0,     5,     0,     2,     0,     2,     1,
       2,     2,     2,     2,     1,     2,     4,     1,     2,     4,
       1,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     0,
       2,     0,     4,     0,     2,     0,     6,     0,     2,     0,
       2,     6,     3,     0,     7,     0,     4,     1,     2,     3,
       3,     0,     0,     0,    26,     0,     2,     4,     4,     6,
       0,     4,     1,     1,     2,     0,     2,     1,     1,     3,
       0,     4,     1,     1,     2,     2,     2,     2,     2,     3,
       4,     3,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     4,     0,     2,     5,     0,     8,     0,     3,
       0,     3,     5,     0,     7,     0,     1,     1,     2,     0,
       1,     1,     2,     0,     4,     1,     2,     2,     2,     2,
       2,     0,     2,     3,     0,     4,     0,     2,     3,     3,
       4,     5,     4,     5,     3,     3,     3,     0,     3,     3,
       1,     2,     0,     2,     5,     6,     1,     0,     2,     3,
       1,     2,     0,     2,     3,     0,     2,     2,     2,     4,
       3,     0,     0,     0,     8,     1,     2,     0,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       4,     0,     4,     1,     2,     2,     2,     2,     0,     0,
       0,     0,    12,     0,     2,     3,     3,     4,     4,     3,
       3,     3,     0,     3,     0,     3,     0,     2,     5,     1,
       1,     1,     3,     3,     3,     3,     0,     2,     1,     1,
       1,     0,     4,     0,     2,     0,     3,     2,     4,     0,
       4,     0,     3,     0,     3,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     1,     1,     1,     0,     4,     1,
       2,     3,     0,     2,     1,     1,     1,     2,     2,     2,
       3,     1,     2,     1,     1,     2,     2,     1,     1,     1,
       1,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     3,     3,     3,
       3,     2,     3,     4,     3,     2,     0,     4,     0,     4,
       3,     3,     1,     1,     5,     3,     0,     3,     0,     3,
       0,     2,     2,     3,     4,     3,     4,     5,     0,     4,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     0,     4,     0,     5,     0,     5,     0,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     0,     4,     4,     2,     4,     4,     4,     3,
       3,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     3,     4,     3,
       3,     1,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     2,     0,
       0,     7,     3,     5,     7,     5,     7,     7,     9,     1,
       0,     2,     0,     1,     0,     2,     2,     1,     1,     0,
       2,     0,     6,     0,     8,     7,    11,     4,     0,     0,
      10,     0,     0,    10,     6,     6,     0,     2,     1,     6,
       6,     3,     2,     1,     4,     0,     2,     0,     0,     7,
       0,     2,     5,     0,     4,     3,     1,     2,     0,     2,
       0,     4,     0,     4,     0,    10,     9,     3,     3,     4,
       4,     4,     4,     4,     4,     4,     4,     3,     7,     8,
       6,     3,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     5,     1,     2,     0,     4,     7,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     0,     4,     0,
       3,     0,     3,     0,     2,     0,     4,     0,     4,     0,
       4,     0,     4,     4,     0,     4,     5,     1,     2,     0,
       2,     0,     4,     0,     4,     0,     2,     5,     0,     6,
       0,     6,     0,     6,     0,     6,     0,     6,     0,     1,
       1,     1,     2,     1,     2,     3,     3,     3,     3,     2,
       3,     6,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     6,     1,     1,     3,     3,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     0,     2,     0,     5,     0,     5,     0,
       5,     0,     5,     0,     5,     0,     5,     0,     5,     0,
       5,     3,     3,     1,     2,     2,     0,     1,     2,     5,
       3,     0,     0,     6,     0,     1,     0,     1,     0,     3,
       0,     1,     0,     1,     0,     2,     1,     0,     3,     1,
       0,     0,     0,     5,     0,     6,     2,     0,     5,     2,
       5,     0,     6,     2,     6,     0,     1,     0,     1,     0,
       0,     3,     0,     3,     4,     3,     3,     3,     0,     7,
       2,     1,     2,     3,     1,     0,     5,     1,     2,     1,
       2,     0,     7,     1,     2,     0,     7,     2,     1,     2,
       3,     1,     0,     5,     1,     2,     1,     2,     0,     7,
       1,     2,     3,     3,     3,     3,     3,     3,     0,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 335 "lef.y" /* yacc.c:1646  */
    {
        // 11/16/2001 - Wanda da Rosa - pcr 408334
        // Return 1 if there are errors
        if (lefData->lef_errors)
           return 1;
        if (!lefData->hasVer) {
              char temp[300];
              sprintf(temp, "No VERSION statement found, using the default value %2g.", lefData->versionNum);
              lefWarning(2001, temp);            
        }        
        //only pre 5.6, 5.6 it is obsolete
        if (!lefData->hasNameCase && lefData->versionNum < 5.6)
           lefWarning(2002, "NAMESCASESENSITIVE is a required statement on LEF file with version 5.5 and earlier.\nWithout NAMESCASESENSITIVE defined, the LEF file is technically incorrect.\nRefer the LEF/DEF 5.5 or earlier Language Referece manual on how to define this statement.");
        if (!lefData->hasBusBit && lefData->versionNum < 5.6)
           lefWarning(2003, "BUSBITCHARS is a required statement on LEF file with version 5.5 and earlier.\nWithout BUSBITCHARS defined, the LEF file is technically incorrect.\nRefer the LEF/DEF 5.5 or earlier Language Referece manual on how to define this statement.");
        if (!lefData->hasDivChar && lefData->versionNum < 5.6)
           lefWarning(2004, "DIVIDERCHAR is a required statementon LEF file with version 5.5 and earlier.\nWithout DIVIDECHAR defined, the LEF file is technically incorrect.\nRefer the LEF/DEF 5.5 or earlier Language Referece manual on how to define this statement.");

      }
#line 3615 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 355 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 3621 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 356 "lef.y" /* yacc.c:1646  */
    { 
		 // More than 1 VERSION in lef file within the open file - It's wrong syntax, 
		 // but copy old behavior - initialize lef reading.
         if (lefData->hasVer)     
         {
			lefData->initRead();
		 }

         lefData->versionNum = convert_name2num((yyvsp[-1].string));
         if (lefData->versionNum > CURRENT_VERSION) {
            char temp[120];
            sprintf(temp,
               "Lef parser %.1f does not support lef file with version %s. Parser will stop processing.", CURRENT_VERSION, (yyvsp[-1].string));
            lefError(1503, temp);
            return 1;
         }

         if (lefCallbacks->VersionStrCbk) {
            CALLBACK(lefCallbacks->VersionStrCbk, lefrVersionStrCbkType, (yyvsp[-1].string));
         } else {
            if (lefCallbacks->VersionCbk)
               CALLBACK(lefCallbacks->VersionCbk, lefrVersionCbkType, lefData->versionNum);
         }
         if (lefData->versionNum > 5.3 && lefData->versionNum < 5.4) {
            lefData->ignoreVersion = 1;
         }
         lefData->use5_3 = lefData->use5_4 = 0;
         lefData->lef_errors = 0;
         lefData->hasVer = 1;
         if (lefData->versionNum < 5.6) {
            lefData->doneLib = 0;
            lefData->namesCaseSensitive = lefSettings->CaseSensitive;
         } else {
            lefData->doneLib = 1;
            lefData->namesCaseSensitive = 1;
         }
      }
#line 3663 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 395 "lef.y" /* yacc.c:1646  */
    {
         // int_number represent 'integer-like' type. It can have fraction and exponent part 
         // but the value shouldn't exceed the 64-bit integer limit. 
         if (!(( yylval.dval >= lefData->leflVal) && ( yylval.dval <= lefData->lefrVal))) { // YES, it isn't really a number 
            char *str = (char*) lefMalloc(strlen(lefData->current_token) + strlen(lefData->lefrFileName) + 350);
            sprintf(str, "ERROR (LEFPARS-203) Number has exceeded the limit for an integer. See file %s at line %d.\n",
                    lefData->lefrFileName, lefData->lef_nlines);
            fflush(stdout);
            lefiError(0, 203, str);
            free(str);
            lefData->lef_errors++;
        }

        (yyval.dval) = yylval.dval ;
      }
#line 3683 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 412 "lef.y" /* yacc.c:1646  */
    {
        if (lefCallbacks->DividerCharCbk) {
          if (strcmp((yyvsp[-1].string), "") != 0) {
             CALLBACK(lefCallbacks->DividerCharCbk, lefrDividerCharCbkType, (yyvsp[-1].string));
          } else {
             CALLBACK(lefCallbacks->DividerCharCbk, lefrDividerCharCbkType, "/");
             lefWarning(2005, "DIVIDERCHAR has an invalid null value. Value is set to default /");
          }
        }
        lefData->hasDivChar = 1;
      }
#line 3699 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 425 "lef.y" /* yacc.c:1646  */
    {
        if (lefCallbacks->BusBitCharsCbk) {
          if (strcmp((yyvsp[-1].string), "") != 0) {
             CALLBACK(lefCallbacks->BusBitCharsCbk, lefrBusBitCharsCbkType, (yyvsp[-1].string)); 
          } else {
             CALLBACK(lefCallbacks->BusBitCharsCbk, lefrBusBitCharsCbkType, "[]"); 
             lefWarning(2006, "BUSBITCHAR has an invalid null value. Value is set to default []");
          }
        }
        lefData->hasBusBit = 1;
      }
#line 3715 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 440 "lef.y" /* yacc.c:1646  */
    { }
#line 3721 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 443 "lef.y" /* yacc.c:1646  */
    {
        if (lefData->versionNum >= 5.6) {
           lefData->doneLib = 1;
           lefData->ge56done = 1;
        }
      }
#line 3732 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 450 "lef.y" /* yacc.c:1646  */
    {
        lefData->doneLib = 1;
        lefData->ge56done = 1;
        if (lefCallbacks->LibraryEndCbk)
          CALLBACK(lefCallbacks->LibraryEndCbk, lefrLibraryEndCbkType, 0);
        // 11/16/2001 - Wanda da Rosa - pcr 408334
        // Return 1 if there are errors
      }
#line 3745 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 474 "lef.y" /* yacc.c:1646  */
    {
            if (lefData->versionNum < 5.6) {
              lefData->namesCaseSensitive = TRUE;
              if (lefCallbacks->CaseSensitiveCbk)
                CALLBACK(lefCallbacks->CaseSensitiveCbk, 
                         lefrCaseSensitiveCbkType,
                         lefData->namesCaseSensitive);
              lefData->hasNameCase = 1;
            } else
              if (lefCallbacks->CaseSensitiveCbk) // write warning only if cbk is set 
                 if (lefData->caseSensitiveWarnings++ < lefSettings->CaseSensitiveWarnings)
                   lefWarning(2007, "NAMESCASESENSITIVE statement is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
          }
#line 3763 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 488 "lef.y" /* yacc.c:1646  */
    {
            if (lefData->versionNum < 5.6) {
              lefData->namesCaseSensitive = FALSE;
              if (lefCallbacks->CaseSensitiveCbk)
                CALLBACK(lefCallbacks->CaseSensitiveCbk, lefrCaseSensitiveCbkType,
                               lefData->namesCaseSensitive);
              lefData->hasNameCase = 1;
            } else {
              if (lefCallbacks->CaseSensitiveCbk) { // write error only if cbk is set 
                if (lefData->caseSensitiveWarnings++ < lefSettings->CaseSensitiveWarnings) {
                  lefError(1504, "NAMESCASESENSITIVE statement is set with OFF.\nStarting version 5.6, NAMESCASENSITIVE is obsolete,\nif it is defined, it has to have the ON value.\nParser will stop processing.");
                  CHKERR();
                }
              }
            }
          }
#line 3784 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 506 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->NoWireExtensionCbk)
          CALLBACK(lefCallbacks->NoWireExtensionCbk, lefrNoWireExtensionCbkType, "ON");
      } else
        if (lefCallbacks->NoWireExtensionCbk) // write warning only if cbk is set 
           if (lefData->noWireExtensionWarnings++ < lefSettings->NoWireExtensionWarnings)
             lefWarning(2008, "NOWIREEXTENSIONATPIN statement is obsolete in version 5.6 or later.\nThe NOWIREEXTENSIONATPIN statement will be ignored.");
    }
#line 3798 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 516 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->NoWireExtensionCbk)
          CALLBACK(lefCallbacks->NoWireExtensionCbk, lefrNoWireExtensionCbkType, "OFF");
      } else
        if (lefCallbacks->NoWireExtensionCbk) // write warning only if cbk is set 
           if (lefData->noWireExtensionWarnings++ < lefSettings->NoWireExtensionWarnings)
             lefWarning(2008, "NOWIREEXTENSIONATPIN statement is obsolete in version 5.6 or later.\nThe NOWIREEXTENSIONATPIN statement will be ignored.");
    }
#line 3812 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 527 "lef.y" /* yacc.c:1646  */
    { 
       if (lefData->versionNum >= 5.8) {
       
          if (lefCallbacks->FixedMaskCbk) {
            lefData->lefFixedMask = 1;
            CALLBACK(lefCallbacks->FixedMaskCbk, lefrFixedMaskCbkType, lefData->lefFixedMask);
          }
          
          lefData->hasFixedMask = 1;
       }
    }
#line 3828 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 540 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ManufacturingCbk)
        CALLBACK(lefCallbacks->ManufacturingCbk, lefrManufacturingCbkType, (yyvsp[-1].dval));
      lefData->hasManufactur = 1;
    }
#line 3838 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 547 "lef.y" /* yacc.c:1646  */
    {
    if ((strcmp((yyvsp[-2].string), "PIN") == 0) && (lefData->versionNum >= 5.6)) {
      if (lefCallbacks->UseMinSpacingCbk) // write warning only if cbk is set 
         if (lefData->useMinSpacingWarnings++ < lefSettings->UseMinSpacingWarnings)
            lefWarning(2009, "USEMINSPACING PIN statement is obsolete in version 5.6 or later.\n The USEMINSPACING PIN statement will be ignored.");
    } else {
        if (lefCallbacks->UseMinSpacingCbk) {
          lefData->lefrUseMinSpacing.set((yyvsp[-2].string), (yyvsp[-1].integer));
          CALLBACK(lefCallbacks->UseMinSpacingCbk, lefrUseMinSpacingCbkType,
                   &lefData->lefrUseMinSpacing);
      }
    }
  }
#line 3856 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 562 "lef.y" /* yacc.c:1646  */
    { CALLBACK(lefCallbacks->ClearanceMeasureCbk, lefrClearanceMeasureCbkType, (yyvsp[-1].string)); }
#line 3862 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 565 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"MAXXY";}
#line 3868 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 566 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"EUCLIDEAN";}
#line 3874 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 569 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"OBS";}
#line 3880 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 570 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"PIN";}
#line 3886 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 573 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 1;}
#line 3892 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 574 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 0;}
#line 3898 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 577 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->UnitsCbk)
        CALLBACK(lefCallbacks->UnitsCbk, lefrUnitsCbkType, &lefData->lefrUnits);
    }
#line 3907 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 583 "lef.y" /* yacc.c:1646  */
    {
      lefData->lefrUnits.clear();
      if (lefData->hasManufactur) {
        if (lefData->unitsWarnings++ < lefSettings->UnitsWarnings) {
          lefError(1505, "MANUFACTURINGGRID statement was defined before UNITS.\nRefer the LEF Language Reference manual for the order of LEF statements.");
          CHKERR();
        }
      }
      if (lefData->hasMinfeature) {
        if (lefData->unitsWarnings++ < lefSettings->UnitsWarnings) {
          lefError(1712, "MINFEATURE statement was defined before UNITS.\nRefer the LEF Language Reference manual for the order of LEF statements.");
          CHKERR();
        }
      }
      if (lefData->versionNum < 5.6) {
        if (lefData->hasSite) {//SITE is defined before UNIT and is illegal in pre 5.6
          lefError(1713, "SITE statement was defined before UNITS.\nRefer the LEF Language Reference manual for the order of LEF statements.");
          CHKERR();
        }
      }
    }
#line 3933 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 610 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->UnitsCbk) lefData->lefrUnits.setTime((yyvsp[-1].dval)); }
#line 3939 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 612 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->UnitsCbk) lefData->lefrUnits.setCapacitance((yyvsp[-1].dval)); }
#line 3945 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 614 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->UnitsCbk) lefData->lefrUnits.setResistance((yyvsp[-1].dval)); }
#line 3951 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 616 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->UnitsCbk) lefData->lefrUnits.setPower((yyvsp[-1].dval)); }
#line 3957 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 618 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->UnitsCbk) lefData->lefrUnits.setCurrent((yyvsp[-1].dval)); }
#line 3963 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 620 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->UnitsCbk) lefData->lefrUnits.setVoltage((yyvsp[-1].dval)); }
#line 3969 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 622 "lef.y" /* yacc.c:1646  */
    { 
      if(validNum((int)(yyvsp[-1].dval))) {
         if (lefCallbacks->UnitsCbk)
            lefData->lefrUnits.setDatabase("MICRONS", (yyvsp[-1].dval));
      }
    }
#line 3980 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 629 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->UnitsCbk) lefData->lefrUnits.setFrequency((yyvsp[-1].dval)); }
#line 3986 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 633 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->LayerCbk)
        CALLBACK(lefCallbacks->LayerCbk, lefrLayerCbkType, &lefData->lefrLayer);
    }
#line 3995 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 638 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 4001 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 639 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->lefrHasMaxVS) {   // 5.5 
        if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
          if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
            lefError(1506, "A MAXVIASTACK statement is defined before the LAYER statement.\nRefer to the LEF Language Reference manual for the order of LEF statements.");
            CHKERR();
          }
        }
      }
      if (lefCallbacks->LayerCbk)
        lefData->lefrLayer.setName((yyvsp[0].string));
      lefData->useLenThr = 0;
      lefData->layerCut = 0;
      lefData->layerMastOver = 0;
      lefData->layerRout = 0;
      lefData->layerDir = 0;
      lefData->lefrHasLayer = 1;
      //strcpy(lefData->layerName, $3);
      lefData->layerName = strdup((yyvsp[0].string));
      lefData->hasType = 0;
      lefData->hasMask = 0;
      lefData->hasPitch = 0;
      lefData->hasWidth = 0;
      lefData->hasDirection = 0;
      lefData->hasParallel = 0;
      lefData->hasInfluence = 0;
      lefData->hasTwoWidths = 0;
      lefData->lefrHasSpacingTbl = 0;
      lefData->lefrHasSpacing = 0;
    }
#line 4036 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 670 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 4042 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 671 "lef.y" /* yacc.c:1646  */
    { 
      if (strcmp(lefData->layerName, (yyvsp[0].string)) != 0) {
        if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
          if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
             lefData->outMsg = (char*)lefMalloc(10000);
             sprintf (lefData->outMsg,
                "END LAYER name %s is different from the LAYER name %s.\nCorrect the LEF file before rerunning it through the LEF parser.", (yyvsp[0].string), lefData->layerName);
             lefError(1507, lefData->outMsg);
             lefFree(lefData->outMsg);
             lefFree(lefData->layerName);
             CHKERR(); 
          } else
             lefFree(lefData->layerName);
        } else
          lefFree(lefData->layerName);
      } else
        lefFree(lefData->layerName);
      if (!lefSettings->RelaxMode) {
        if (lefData->hasType == 0) {
          if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1508, "TYPE statement is a required statement in a LAYER and it is not defined.");
               CHKERR(); 
            }
          }
        }
        if ((lefData->layerRout == 1) && (lefData->hasPitch == 0)) {
          if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1509, "PITCH statement is a required statement in a LAYER with type ROUTING and it is not defined.");
              CHKERR(); 
            }
          }
        }
        if ((lefData->layerRout == 1) && (lefData->hasWidth == 0)) {
          if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1510, "WIDTH statement is a required statement in a LAYER with type ROUTING and it is not defined.");
              CHKERR(); 
            }
          }
        }
        if ((lefData->layerRout == 1) && (lefData->hasDirection == 0)) {
          if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg, "The DIRECTION statement which is required in a LAYER with TYPE ROUTING is not defined in LAYER %s.\nUpdate your lef file and add the DIRECTION statement for layer %s.", (yyvsp[0].string), (yyvsp[0].string));
              lefError(1511, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR(); 
            }
          }
        }
      }
    }
#line 4102 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 728 "lef.y" /* yacc.c:1646  */
    { }
#line 4108 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 730 "lef.y" /* yacc.c:1646  */
    { }
#line 4114 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 734 "lef.y" /* yacc.c:1646  */
    {
       // let setArraySpacingCutSpacing to set the data 
    }
#line 4122 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 740 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
         lefData->lefrLayer.setArraySpacingCut((yyvsp[0].dval));
         lefData->arrayCutsVal = 0;
      }
    }
#line 4133 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 747 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
         lefData->outMsg = (char*)lefMalloc(10000);
         sprintf(lefData->outMsg,
           "ARRAYSPACING is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
         lefError(1685, lefData->outMsg);
         lefFree(lefData->outMsg);
         CHKERR();
      }
    }
#line 4148 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 758 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
         lefData->lefrLayer.setType((yyvsp[-1].string));
      lefData->hasType = 1;
    }
#line 4158 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 764 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.8) {
          if (lefData->layerWarnings++ < lefSettings->ViaWarnings) {
              lefError(2081, "MASK information can only be defined with version 5.8");
              CHKERR(); 
          }           
      } else {
          if (lefCallbacks->LayerCbk) {
            lefData->lefrLayer.setMask((int)(yyvsp[-1].dval));
          }
          
          lefData->hasMask = 1;
      }
    }
#line 4177 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 779 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setPitch((yyvsp[-1].dval));
      lefData->hasPitch = 1;  
    }
#line 4186 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 784 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setPitchXY((yyvsp[-2].dval), (yyvsp[-1].dval));
      lefData->hasPitch = 1;  
    }
#line 4195 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 789 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setDiagPitch((yyvsp[-1].dval));
    }
#line 4203 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 793 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setDiagPitchXY((yyvsp[-2].dval), (yyvsp[-1].dval));
    }
#line 4211 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 797 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setOffset((yyvsp[-1].dval));
    }
#line 4219 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 801 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setOffsetXY((yyvsp[-2].dval), (yyvsp[-1].dval));
    }
#line 4227 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 805 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setDiagWidth((yyvsp[-1].dval));
    }
#line 4235 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 809 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setDiagSpacing((yyvsp[-1].dval));
    }
#line 4243 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 813 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setWidth((yyvsp[-1].dval));
      lefData->hasWidth = 1;  
    }
#line 4252 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 818 "lef.y" /* yacc.c:1646  */
    {
      // Issue an error is this is defined in masterslice
      if (lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1715, "It is incorrect to define an AREA statement in LAYER with TYPE MASTERSLICE or OVERLAP. Parser will stop processing.");
               CHKERR();
            }
         }
      }

      if (lefCallbacks->LayerCbk) {
         lefData->lefrLayer.setArea((yyvsp[-1].dval));
      }
    }
#line 4272 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 834 "lef.y" /* yacc.c:1646  */
    {
      lefData->hasSpCenter = 0;       // reset to 0, only once per spacing is allowed 
      lefData->hasSpSamenet = 0;
      lefData->hasSpParallel = 0;
      lefData->hasSpLayer = 0;
      lefData->layerCutSpacing = (yyvsp[0].dval);  // for error message purpose
      // 11/22/99 - Wanda da Rosa, PCR 283762
      //            Issue an error is this is defined in masterslice
      if (lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1512, "It is incorrect to define a SPACING statement in LAYER with TYPE MASTERSLICE or OVERLAP. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      // 5.5 either SPACING or SPACINGTABLE, not both for routing layer only
      if (lefData->layerRout) {
        if (lefData->lefrHasSpacingTbl && lefData->versionNum < 5.7) {
           if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
              if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                lefWarning(2010, "It is incorrect to have both SPACING rules & SPACINGTABLE rules within a ROUTING layer");
              }
           }
        }
        if (lefCallbacks->LayerCbk)
           lefData->lefrLayer.setSpacingMin((yyvsp[0].dval));
        lefData->lefrHasSpacing = 1;
      } else { 
        if (lefCallbacks->LayerCbk)
           lefData->lefrLayer.setSpacingMin((yyvsp[0].dval));
      }
    }
#line 4310 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 868 "lef.y" /* yacc.c:1646  */
    {}
#line 4316 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 870 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
         lefData->lefrLayer.setSpacingTableOrtho();
      if (lefCallbacks->LayerCbk) // due to converting to C, else, convertor produce 
         lefData->lefrLayer.addSpacingTableOrthoWithin((yyvsp[-2].dval), (yyvsp[0].dval));//bad code
    }
#line 4327 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 877 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
         lefData->outMsg = (char*)lefMalloc(10000);
         sprintf(lefData->outMsg,
           "SPACINGTABLE ORTHOGONAL is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
         lefError(1694, lefData->outMsg);
         lefFree(lefData->outMsg);
         CHKERR();
      }
    }
#line 4342 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 888 "lef.y" /* yacc.c:1646  */
    {
      lefData->layerDir = 1;
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1513, "DIRECTION statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setDirection((yyvsp[-1].string));
      lefData->hasDirection = 1;  
    }
#line 4360 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 902 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1514, "RESISTANCE statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setResistance((yyvsp[-1].dval));
    }
#line 4376 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 914 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1515, "RESISTANCE statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
    }
#line 4391 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 925 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1516, "CAPACITANCE statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setCapacitance((yyvsp[-1].dval));
    }
#line 4407 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 937 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1517, "CAPACITANCE statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
    }
#line 4422 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 948 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1518, "HEIGHT statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setHeight((yyvsp[-1].dval));
    }
#line 4438 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 960 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1519, "WIREEXTENSION statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setWireExtension((yyvsp[-1].dval));
    }
#line 4454 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 972 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout && (lefData->layerCut || lefData->layerMastOver)) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1520, "THICKNESS statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setThickness((yyvsp[-1].dval));
    }
#line 4470 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 984 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1521, "SHRINKAGE statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setShrinkage((yyvsp[-1].dval));
    }
#line 4486 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 996 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1522, "CAPMULTIPLIER statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setCapMultiplier((yyvsp[-1].dval));
    }
#line 4502 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1008 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1523, "EDGECAPACITANCE statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setEdgeCap((yyvsp[-1].dval));
    }
#line 4518 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1021 "lef.y" /* yacc.c:1646  */
    { // 5.3 syntax 
      lefData->use5_3 = 1;
      if (!lefData->layerRout && (lefData->layerCut || lefData->layerMastOver)) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1525, "ANTENNALENGTHFACTOR statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      } else if (lefData->versionNum >= 5.4) {
         if (lefData->use5_4) {
            if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
               if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                  lefData->outMsg = (char*)lefMalloc(10000);
                  sprintf (lefData->outMsg,
                    "ANTENNALENGTHFACTOR statement is a version 5.3 or earlier syntax.\nYour lef file with version %g, has both old and new ANTENNALENGTHFACTOR syntax, which is incorrect.", lefData->versionNum);
                  lefError(1526, lefData->outMsg);
                  lefFree(lefData->outMsg);
                  CHKERR();
               }
            }
         }
      }

      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setAntennaLength((yyvsp[-1].dval));
    }
#line 4549 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1048 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.2) {
         if (!lefData->layerRout) {
            if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
               if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                 lefError(1702, "CURRENTDEN statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
                 CHKERR();
               }
            }
         }
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setCurrentDensity((yyvsp[-1].dval));
      } else {
         if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
            lefWarning(2079, "CURRENTDEN statement is obsolete in version 5.2 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.2 or later.");
            CHKERR();
         }
      }
    }
#line 4572 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1067 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->versionNum < 5.2) {
         if (!lefData->layerRout) {
            if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
               if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                 lefError(1702, "CURRENTDEN statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
                 CHKERR();
               }
            }
         }
      } else {
         if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
            lefWarning(2079, "CURRENTDEN statement is obsolete in version 5.2 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.2 or later.");
            CHKERR();
         }
      }
    }
#line 4594 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1085 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.2) {
         if (!lefData->layerRout) {
            if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
               if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                 lefError(1702, "CURRENTDEN statement can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
                 CHKERR();
               }
            }
         }
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setCurrentPoint((yyvsp[-3].dval), (yyvsp[-2].dval));
      } else {
         if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
            lefWarning(2079, "CURRENTDEN statement is obsolete in version 5.2 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.2 or later.");
            CHKERR();
         }
      }
    }
#line 4617 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1103 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 10000000;}
#line 4623 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1104 "lef.y" /* yacc.c:1646  */
    {
      lefData->lefDumbMode = 0;
    }
#line 4631 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1108 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1527, "ACCURRENTDENSITY statement can't be defined in LAYER with TYPE MASTERSLICE or OVERLAP. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.addAccurrentDensity((yyvsp[0].string));      
    }
#line 4647 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1119 "lef.y" /* yacc.c:1646  */
    {

    }
#line 4655 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1123 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1527, "ACCURRENTDENSITY statement can't be defined in LAYER with TYPE MASTERSLICE or OVERLAP. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) {
           lefData->lefrLayer.addAccurrentDensity((yyvsp[-2].string));
           lefData->lefrLayer.setAcOneEntry((yyvsp[-1].dval));
      }
    }
#line 4674 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1138 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1528, "DCCURRENTDENSITY statement can't be defined in LAYER with TYPE MASTERSLICE or OVERLAP. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) {
         lefData->lefrLayer.addDccurrentDensity("AVERAGE");
         lefData->lefrLayer.setDcOneEntry((yyvsp[-1].dval));
      }
    }
#line 4693 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1153 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1528, "DCCURRENTDENSITY statement can't be defined in LAYER with TYPE MASTERSLICE or OVERLAP. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (!lefData->layerCut) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1529, "CUTAREA statement can only be defined in LAYER with type CUT. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) {
         lefData->lefrLayer.addDccurrentDensity("AVERAGE");
         lefData->lefrLayer.addNumber((yyvsp[0].dval));
      }
    }
#line 4720 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1176 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addDcCutarea(); }
#line 4726 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1177 "lef.y" /* yacc.c:1646  */
    {}
#line 4732 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1179 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1528, "DCCURRENTDENSITY can't be defined in LAYER with TYPE MASTERSLICE or OVERLAP. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1530, "WIDTH statement can only be defined in LAYER with type ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) {
         lefData->lefrLayer.addDccurrentDensity("AVERAGE");
         lefData->lefrLayer.addNumber((yyvsp[0].dval));
      }
    }
#line 4759 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1202 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addDcWidth(); }
#line 4765 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1203 "lef.y" /* yacc.c:1646  */
    {}
#line 4771 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1207 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "ANTENNAAREARATIO statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1531, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->use5_3) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "ANTENNADIFFAREARATIO statement is a version 5.4 or earlier syntax.\nYour lef file with version %g, has both old and new ANTENNAAREARATIO syntax, which is incorrect.", lefData->versionNum);
               lefError(1704, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (!lefData->layerRout && !lefData->layerCut && lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1533, "ANTENNAAREARATIO statement can only be defined in LAYER with TYPE ROUTING or CUT. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setAntennaAreaRatio((yyvsp[-1].dval));
    }
#line 4813 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1245 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "ANTENNADIFFAREARATIO statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1532, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->use5_3) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "ANTENNADIFFAREARATIO statement is a version 5.4 or earlier syntax.\nYour lef file with version %g, has both old and new ANTENNADIFFAREARATIO syntax, which is incorrect.", lefData->versionNum);
               lefError(1704, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (!lefData->layerRout && !lefData->layerCut && lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1534, "ANTENNADIFFAREARATIO statement can only be defined in LAYER with TYPE ROUTING or CUT. Parser will stop processing.");
               CHKERR();
            }
         }
      }
      lefData->antennaType = lefiAntennaDAR; 
    }
#line 4855 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1282 "lef.y" /* yacc.c:1646  */
    {}
#line 4861 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1284 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "ANTENNACUMAREARATIO statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1535, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->use5_3) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "ANTENNACUMAREARATIO statement is a version 5.4 or earlier syntax.\nYour lef file with version %g, has both old and new ANTENNACUMAREARATIO syntax, which is incorrect.", lefData->versionNum);
               lefError(1536, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (!lefData->layerRout && !lefData->layerCut && lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1537, "ANTENNACUMAREARATIO statement can only be defined in LAYER with TYPE ROUTING or CUT. Parser will stop processing.");
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setAntennaCumAreaRatio((yyvsp[-1].dval));
    }
#line 4903 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1322 "lef.y" /* yacc.c:1646  */
    {  // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "ANTENNACUMDIFFAREARATIO statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1538, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->use5_3) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "ANTENNACUMDIFFAREARATIO statement is a version 5.4 or earlier syntax.\nYour lef file with version %g, has both old and new ANTENNACUMDIFFAREARATIO syntax, which is incorrect.", lefData->versionNum);
               lefError(1539, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (!lefData->layerRout && !lefData->layerCut && lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1540, "ANTENNACUMDIFFAREARATIO statement can only be defined in LAYER with TYPE ROUTING or CUT. Parser will stop processing.");
              CHKERR();
            }
         }
      }
      lefData->antennaType = lefiAntennaCDAR;
    }
#line 4945 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1359 "lef.y" /* yacc.c:1646  */
    {}
#line 4951 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1361 "lef.y" /* yacc.c:1646  */
    { // both 5.3  & 5.4 syntax 
      if (!lefData->layerRout && !lefData->layerCut && lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1541, "ANTENNAAREAFACTOR can only be defined in LAYER with TYPE ROUTING or CUT. Parser will stop processing.");
               CHKERR();
            }
         }
      }
      // this does not need to check, since syntax is in both 5.3 & 5.4 
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setAntennaAreaFactor((yyvsp[0].dval));
      lefData->antennaType = lefiAntennaAF;
    }
#line 4969 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1374 "lef.y" /* yacc.c:1646  */
    {}
#line 4975 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1376 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (!lefData->layerRout && (lefData->layerCut || lefData->layerMastOver)) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1542, "ANTENNASIDEAREARATIO can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
               CHKERR();
            }
         }
      }
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "ANTENNASIDEAREARATIO statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1543, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->use5_3) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "ANTENNASIDEAREARATIO statement is a version 5.4 or earlier syntax.\nYour lef file with version %g, has both old and new ANTENNASIDEAREARATIO syntax, which is incorrect.", lefData->versionNum);
               lefError(1544, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setAntennaSideAreaRatio((yyvsp[-1].dval));
    }
#line 5017 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1414 "lef.y" /* yacc.c:1646  */
    {  // 5.4 syntax 
      lefData->use5_4 = 1;
      if (!lefData->layerRout && (lefData->layerCut || lefData->layerMastOver)) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1545, "ANTENNADIFFSIDEAREARATIO can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
               CHKERR();
            }
         }
      }
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "ANTENNADIFFSIDEAREARATIO statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1546, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->use5_3) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "ANTENNADIFFSIDEAREARATIO statement is a version 5.4 or earlier syntax.\nYour lef file with version %g, has both old and new ANTENNADIFFSIDEAREARATIO syntax, which is incorrect.", lefData->versionNum);
               lefError(1547, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      lefData->antennaType = lefiAntennaDSAR;
    }
#line 5059 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1451 "lef.y" /* yacc.c:1646  */
    {}
#line 5065 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1453 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (!lefData->layerRout && (lefData->layerCut || lefData->layerMastOver)) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1548, "ANTENNACUMSIDEAREARATIO can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
               CHKERR();
            }
         }
      }
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "ANTENNACUMSIDEAREARATIO statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1549, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->use5_3) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "ANTENNACUMSIDEAREARATIO statement is a version 5.4 or earlier syntax.\nYour lef file with version %g, has both old and new ANTENNACUMSIDEAREARATIO syntax, which is incorrect.", lefData->versionNum);
               lefError(1550, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setAntennaCumSideAreaRatio((yyvsp[-1].dval));
    }
#line 5107 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1491 "lef.y" /* yacc.c:1646  */
    {  // 5.4 syntax 
      lefData->use5_4 = 1;
      if (!lefData->layerRout && (lefData->layerCut || lefData->layerMastOver)) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1551, "ANTENNACUMDIFFSIDEAREARATIO can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
               CHKERR();
            }
         }
      }
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "ANTENNACUMDIFFSIDEAREARATIO statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1552, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->use5_3) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "ANTENNACUMDIFFSIDEAREARATIO statement is a version 5.4 or earlier syntax.\nYour lef file with version %g, has both old and new ANTENNACUMDIFFSIDEAREARATIO syntax, which is incorrect.", lefData->versionNum);
               lefError(1553, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      lefData->antennaType = lefiAntennaCDSAR;
    }
#line 5149 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1528 "lef.y" /* yacc.c:1646  */
    {}
#line 5155 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1530 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (!lefData->layerRout && (lefData->layerCut || lefData->layerMastOver)) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1554, "ANTENNASIDEAREAFACTOR can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
               CHKERR();
            }
         }
      }
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "ANTENNASIDEAREAFACTOR statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1555, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->use5_3) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "ANTENNASIDEAREAFACTOR statement is a version 5.4 or earlier syntax.\nYour lef file with version %g, has both old and new ANTENNASIDEAREAFACTOR syntax, which is incorrect.", lefData->versionNum);
               lefError(1556, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setAntennaSideAreaFactor((yyvsp[0].dval));
      lefData->antennaType = lefiAntennaSAF;
    }
#line 5198 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1568 "lef.y" /* yacc.c:1646  */
    {}
#line 5204 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1570 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (!lefData->layerRout && !lefData->layerCut && lefData->layerMastOver) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1557, "ANTENNAMODEL can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
               CHKERR();
            }
         }
      }
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.5) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "ANTENNAMODEL statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1558, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->use5_3) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "ANTENNAMODEL statement is a version 5.4 or earlier syntax.\nYour lef file with version %g, has both old and new ANTENNAMODEL syntax, which is incorrect.", lefData->versionNum);
               lefError(1559, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      lefData->antennaType = lefiAntennaO;
    }
#line 5246 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1607 "lef.y" /* yacc.c:1646  */
    {}
#line 5252 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1609 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
         lefData->outMsg = (char*)lefMalloc(10000);
         sprintf(lefData->outMsg,
           "ANTENNACUMROUTINGPLUSCUT is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
         lefError(1686, lefData->outMsg);
         lefFree(lefData->outMsg);
         CHKERR();
      } else {
         if (!lefData->layerRout && !lefData->layerCut) {
            if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
               if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                  lefError(1560, "ANTENNACUMROUTINGPLUSCUT can only be defined in LAYER with type ROUTING or CUT. Parser will stop processing.");
                  CHKERR();
               }
            }
         }
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setAntennaCumRoutingPlusCut();
      }
    }
#line 5277 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1630 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
         lefData->outMsg = (char*)lefMalloc(10000);
         sprintf(lefData->outMsg,
           "ANTENNAGATEPLUSDIFF is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
         lefError(1687, lefData->outMsg);
         lefFree(lefData->outMsg);
         CHKERR();
      } else {
         if (!lefData->layerRout && !lefData->layerCut) {
            if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
               if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                  lefError(1561, "ANTENNAGATEPLUSDIFF can only be defined in LAYER with type ROUTING or CUT. Parser will stop processing.");
                  CHKERR();
               }
            }
         }
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setAntennaGatePlusDiff((yyvsp[-1].dval));
      }
    }
#line 5302 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1651 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
         lefData->outMsg = (char*)lefMalloc(10000);
         sprintf(lefData->outMsg,
           "ANTENNAAREAMINUSDIFF is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
         lefError(1688, lefData->outMsg);
         lefFree(lefData->outMsg);
         CHKERR();
      } else {
         if (!lefData->layerRout && !lefData->layerCut) {
            if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
               if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                  lefError(1562, "ANTENNAAREAMINUSDIFF can only be defined in LAYER with type ROUTING or CUT. Parser will stop processing.");
                  CHKERR();
               }
            }
         }
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setAntennaAreaMinusDiff((yyvsp[-1].dval));
      }
    }
#line 5327 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1672 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout && !lefData->layerCut) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1563, "ANTENNAAREADIFFREDUCEPWL can only be defined in LAYER with type ROUTING or CUT. Parser will stop processing.");
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) { // require min 2 points, set the 1st 2 
         if (lefData->lefrAntennaPWLPtr) {
            lefData->lefrAntennaPWLPtr->Destroy();
            lefFree(lefData->lefrAntennaPWLPtr);
         }

         lefData->lefrAntennaPWLPtr = lefiAntennaPWL::create();
         lefData->lefrAntennaPWLPtr->addAntennaPWL((yyvsp[-1].pt).x, (yyvsp[-1].pt).y);
         lefData->lefrAntennaPWLPtr->addAntennaPWL((yyvsp[0].pt).x, (yyvsp[0].pt).y);
      }
    }
#line 5352 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1693 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
        lefData->lefrLayer.setAntennaPWL(lefiAntennaADR, lefData->lefrAntennaPWLPtr);
        lefData->lefrAntennaPWLPtr = NULL;
      }
    }
#line 5363 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1699 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
        lefData->outMsg = (char*)lefMalloc(10000);
        sprintf(lefData->outMsg,
          "ANTENNAAREADIFFREDUCEPWL is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
        lefError(1689, lefData->outMsg);
        lefFree(lefData->outMsg);
        CHKERR();
      }
    }
#line 5378 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1710 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      if (lefData->ignoreVersion) {
         // do nothing 
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setSlotWireWidth((yyvsp[-1].dval));
      } else if (lefData->versionNum >= 5.7) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings)
               lefWarning(2011, "SLOTWIREWIDTH statement is obsolete in version 5.7 or later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.7 or later.");
         }
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "SLOTWIREWIDTH statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1564, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setSlotWireWidth((yyvsp[-1].dval));
    }
#line 5406 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1734 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      if (lefData->ignoreVersion) {
         // do nothing 
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setSlotWireLength((yyvsp[-1].dval));
      } else if (lefData->versionNum >= 5.7) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings)
               lefWarning(2012, "SLOTWIRELENGTH statement is obsolete in version 5.7 or later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.7 or later.");
         }
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "SLOTWIRELENGTH statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1565, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setSlotWireLength((yyvsp[-1].dval));
    }
#line 5434 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1758 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      if (lefData->ignoreVersion) {
         // do nothing 
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setSlotWidth((yyvsp[-1].dval));
      } else if (lefData->versionNum >= 5.7) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings)
               lefWarning(2013, "SLOTWIDTH statement is obsolete in version 5.7 or later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.7 or later.");
         }
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "SLOTWIDTH statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1566, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setSlotWidth((yyvsp[-1].dval));
    }
#line 5462 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1782 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      if (lefData->ignoreVersion) {
         // do nothing 
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setSlotLength((yyvsp[-1].dval));
      } else if (lefData->versionNum >= 5.7) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings)
               lefWarning(2014, "SLOTLENGTH statement is obsolete in version 5.7 or later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.7 or later.");
         }
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "SLOTLENGTH statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1567, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setSlotLength((yyvsp[-1].dval));
    }
#line 5490 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1806 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      if (lefData->ignoreVersion) {
         // do nothing 
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setMaxAdjacentSlotSpacing((yyvsp[-1].dval));
      } else if (lefData->versionNum >= 5.7) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings)
               lefWarning(2015, "MAXADJACENTSLOTSPACING statement is obsolete in version 5.7 or later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.7 or later.");
         }
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "MAXADJACENTSLOTSPACING statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1568, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setMaxAdjacentSlotSpacing((yyvsp[-1].dval));
    }
#line 5518 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1830 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      if (lefData->ignoreVersion) {
         // do nothing 
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setMaxCoaxialSlotSpacing((yyvsp[-1].dval));
      } else if (lefData->versionNum >= 5.7) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings)
                lefWarning(2016, "MAXCOAXIALSLOTSPACING statement is obsolete in version 5.7 or later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.7 or later.");
         }
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "MAXCOAXIALSLOTSPACING statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1569, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setMaxCoaxialSlotSpacing((yyvsp[-1].dval));
    }
#line 5546 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1854 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      if (lefData->ignoreVersion) {
         // do nothing 
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setMaxEdgeSlotSpacing((yyvsp[-1].dval));
      } else if (lefData->versionNum >= 5.7) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings)
               lefWarning(2017, "MAXEDGESLOTSPACING statement is obsolete in version 5.7 or later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.7 or later.");
         }
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "MAXEDGESLOTSPACING statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1570, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else
         if (lefCallbacks->LayerCbk) lefData->lefrLayer.setMaxEdgeSlotSpacing((yyvsp[-1].dval));
    }
#line 5574 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1878 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum >= 5.7) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings)
               lefWarning(2018, "SPLITWIREWIDTH statement is obsolete in version 5.7 or later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.7 or later.");
         }
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "SPLITWIREWIDTH statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1571, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setSplitWireWidth((yyvsp[-1].dval));
    }
#line 5601 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1901 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax, pcr 394389 
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "MINIMUMDENSITY statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1572, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setMinimumDensity((yyvsp[-1].dval));
    }
#line 5623 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1919 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax, pcr 394389 
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "MAXIMUMDENSITY statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1573, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setMaximumDensity((yyvsp[-1].dval));
    }
#line 5645 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1937 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax, pcr 394389 
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "DENSITYCHECKWINDOW statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1574, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setDensityCheckWindow((yyvsp[-2].dval), (yyvsp[-1].dval));
    }
#line 5667 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1955 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax, pcr 394389 
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "DENSITYCHECKSTEP statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1575, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setDensityCheckStep((yyvsp[-1].dval));
    }
#line 5689 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1973 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax, pcr 394389 
      if (lefData->ignoreVersion) {
         // do nothing 
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "FILLACTIVESPACING statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1576, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setFillActiveSpacing((yyvsp[-1].dval));
    }
#line 5711 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1991 "lef.y" /* yacc.c:1646  */
    {
      // 5.5 MAXWIDTH, is for routing layer only
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefError(1577, "MAXWIDTH statement can only be defined in LAYER with TYPE ROUTING.  Parser will stop processing.");
               CHKERR();
            }
         }
      }
      if (lefData->versionNum < 5.5) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "MAXWIDTH statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1578, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setMaxwidth((yyvsp[-1].dval));
    }
#line 5740 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2016 "lef.y" /* yacc.c:1646  */
    {
      // 5.5 MINWIDTH, is for routing layer only
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1579, "MINWIDTH statement can only be defined in LAYER with TYPE ROUTING.  Parser will stop processing.");
              CHKERR();
            }
         }
      }
      if (lefData->versionNum < 5.5) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "MINWIDTH statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1580, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setMinwidth((yyvsp[-1].dval));
    }
#line 5769 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2041 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.5) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "MINENCLOSEDAREA statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1581, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.addMinenclosedarea((yyvsp[0].dval));
    }
#line 5789 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2056 "lef.y" /* yacc.c:1646  */
    {}
#line 5795 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2058 "lef.y" /* yacc.c:1646  */
    { // pcr 409334 
      if (lefCallbacks->LayerCbk)
         lefData->lefrLayer.addMinimumcut((int)(yyvsp[-2].dval), (yyvsp[0].dval)); 
      lefData->hasLayerMincut = 0;
    }
#line 5805 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2066 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->hasLayerMincut) {   // FROMABOVE nor FROMBELOW is set 
         if (lefCallbacks->LayerCbk)
             lefData->lefrLayer.addMinimumcutConnect((char*)"");
      }
    }
#line 5816 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2073 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.addMinstep((yyvsp[0].dval));
    }
#line 5824 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2077 "lef.y" /* yacc.c:1646  */
    {
    }
#line 5831 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 2080 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.5) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "PROTRUSION RULE statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1582, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.setProtrusion((yyvsp[-5].dval), (yyvsp[-3].dval), (yyvsp[-1].dval));
    }
#line 5851 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2096 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.5) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "SPACINGTABLE statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1583, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      // 5.5 either SPACING or SPACINGTABLE in a layer, not both
      if (lefData->lefrHasSpacing && lefData->layerRout && lefData->versionNum < 5.7) {
         if (lefCallbacks->LayerCbk)  // write warning only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefWarning(2010, "It is incorrect to have both SPACING rules & SPACINGTABLE rules within a ROUTING layer");
            }
      } 
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.addSpacingTable();
      lefData->lefrHasSpacingTbl = 1;
    }
#line 5879 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 2119 "lef.y" /* yacc.c:1646  */
    {}
#line 5885 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 2122 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "ENCLOSURE statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1584, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk)
         lefData->lefrLayer.addEnclosure((yyvsp[-2].string), (yyvsp[-1].dval), (yyvsp[0].dval));
    }
#line 5906 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 2138 "lef.y" /* yacc.c:1646  */
    {}
#line 5912 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 2141 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "PREFERENCLOSURE statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1585, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk)
         lefData->lefrLayer.addPreferEnclosure((yyvsp[-2].string), (yyvsp[-1].dval), (yyvsp[0].dval));
    }
#line 5933 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 2157 "lef.y" /* yacc.c:1646  */
    {}
#line 5939 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 2159 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "RESISTANCE statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1586, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else {
         if (lefCallbacks->LayerCbk)
            lefData->lefrLayer.setResPerCut((yyvsp[-1].dval));
      }
    }
#line 5961 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2177 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1587, "DIAGMINEDGELENGTH can only be defined in LAYER with TYPE ROUTING. Parser will stop processing.");
              CHKERR();
            }
         }
      } else if (lefData->versionNum < 5.6) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "DIAGMINEDGELENGTH statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1588, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else {
         if (lefCallbacks->LayerCbk)
            lefData->lefrLayer.setDiagMinEdgeLength((yyvsp[-1].dval));
      }
    }
#line 5990 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2202 "lef.y" /* yacc.c:1646  */
    {
      // Use the polygon code to retrieve the points for MINSIZE
      lefData->lefrGeometriesPtr = (lefiGeometries*)lefMalloc(sizeof(lefiGeometries));
      lefData->lefrGeometriesPtr->Init();
      lefData->lefrDoGeometries = 1;
    }
#line 6001 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 2209 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
         lefData->lefrGeometriesPtr->addPolygon();
         lefData->lefrLayer.setMinSize(lefData->lefrGeometriesPtr);
      }
     lefData->lefrDoGeometries = 0;
      lefData->lefrGeometriesPtr->Destroy();
      lefFree(lefData->lefrGeometriesPtr);
    }
#line 6015 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 2222 "lef.y" /* yacc.c:1646  */
    {
        if (lefCallbacks->LayerCbk)
           lefData->lefrLayer.setArraySpacingLongArray();
    }
#line 6024 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 2230 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
         lefData->lefrLayer.setArraySpacingWidth((yyvsp[0].dval));
    }
#line 6033 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 2241 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
         lefData->lefrLayer.addArraySpacingArray((int)(yyvsp[-2].dval), (yyvsp[0].dval));
         if (lefData->arrayCutsVal > (int)(yyvsp[-2].dval)) {
            // Mulitiple ARRAYCUTS value needs to me in ascending order 
            if (!lefData->arrayCutsWar) {
               if (lefData->layerWarnings++ < lefSettings->LayerWarnings)
                  lefWarning(2080, "The number of cut values in multiple ARRAYSPACING ARRAYCUTS are not in increasing order.\nTo be consistent with the documentation, update the cut values to increasing order.");
               lefData->arrayCutsWar = 1;
            }
         }
         lefData->arrayCutsVal = (int)(yyvsp[-2].dval);
    }
#line 6051 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 2257 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->hasInfluence) {  // 5.5 - INFLUENCE table must follow a PARALLEL
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1589, "An INFLUENCE table statement was defined before the PARALLELRUNLENGTH table statement.\nINFLUENCE table statement should be defined following the PARALLELRUNLENGTH.\nChange the LEF file and rerun the parser.");
              CHKERR();
            }
         }
      }
      if (lefData->hasParallel) { // 5.5 - Only one PARALLEL table is allowed per layer
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1590, "There is multiple PARALLELRUNLENGTH table statements are defined within a layer.\nAccording to the LEF Reference Manual, only one PARALLELRUNLENGTH table statement is allowed per layer.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.addNumber((yyvsp[0].dval));
      lefData->hasParallel = 1;
    }
#line 6076 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 2278 "lef.y" /* yacc.c:1646  */
    {
      lefData->spParallelLength = lefData->lefrLayer.getNumber();
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.addSpParallelLength();
    }
#line 6085 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 2283 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->LayerCbk) {
         lefData->lefrLayer.addSpParallelWidth((yyvsp[0].dval));
      }
    }
#line 6095 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 2289 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->lefrLayer.getNumber() != lefData->spParallelLength) {
         if (lefCallbacks->LayerCbk) {
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1591, "The number of length in the PARALLELRUNLENGTH statement is not equal to\nthe total number of spacings defined in the WIDTH statement in the SPACINGTABLE.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.addSpParallelWidthSpacing();
    }
#line 6111 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 2303 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.addNumber((yyvsp[0].dval));
    }
#line 6119 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 2307 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->hasParallel) { // 5.7 - Either PARALLEL OR TWOWIDTHS per layer
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1592, "A PARALLELRUNLENGTH statement was already defined in the layer.\nIt is PARALLELRUNLENGTH or TWOWIDTHS is allowed per layer.");
              CHKERR();
            }
         }
      }
      if (lefData->hasTwoWidths) { // 5.7 - only 1 TWOWIDTHS per layer
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1593, "A TWOWIDTHS table statement was already defined in the layer.\nOnly one TWOWIDTHS statement is allowed per layer.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.addSpTwoWidths((yyvsp[-4].dval), (yyvsp[-3].dval));
      lefData->hasTwoWidths = 1;
    }
#line 6144 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 2328 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
        lefData->outMsg = (char*)lefMalloc(10000);
        sprintf(lefData->outMsg,
          "TWOWIDTHS is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
        lefError(1697, lefData->outMsg);
        lefFree(lefData->outMsg);
        CHKERR();
      } 
    }
#line 6159 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2339 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->hasInfluence) {  // 5.5 - INFLUENCE table must follow a PARALLEL
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1594, "A INFLUENCE table statement was already defined in the layer.\nOnly one INFLUENCE statement is allowed per layer.");
              CHKERR();
            }
         }
      }
      if (!lefData->hasParallel) {  // 5.5 - INFLUENCE must follow a PARALLEL
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1595, "An INFLUENCE table statement was already defined before the layer.\nINFLUENCE statement has to be defined after the PARALLELRUNLENGTH table statement in the layer.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) {
         lefData->lefrLayer.setInfluence();
         lefData->lefrLayer.addSpInfluence((yyvsp[-4].dval), (yyvsp[-2].dval), (yyvsp[0].dval));
      }
    }
#line 6186 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 2369 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->LayerCbk)
       lefData->lefrLayer.addSpacingTableOrthoWithin((yyvsp[-2].dval), (yyvsp[0].dval));
  }
#line 6195 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 2375 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"NULL";}
#line 6201 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 2376 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"ABOVE";}
#line 6207 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 2377 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"BELOW";}
#line 6213 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 2381 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
         lefData->lefrLayer.addEnclosureWidth((yyvsp[0].dval));
      }
    }
#line 6223 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 2388 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
         lefData->outMsg = (char*)lefMalloc(10000);
         sprintf(lefData->outMsg,
           "LENGTH is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
         lefError(1691, lefData->outMsg);
         lefFree(lefData->outMsg);
         CHKERR();
      } else {
         if (lefCallbacks->LayerCbk) {
            lefData->lefrLayer.addEnclosureLength((yyvsp[0].dval));
         }
      }
    }
#line 6242 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 2405 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
         lefData->outMsg = (char*)lefMalloc(10000);
         sprintf(lefData->outMsg,
           "EXCEPTEXTRACUT is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
         lefError(1690, lefData->outMsg);
         lefFree(lefData->outMsg);
         CHKERR();
      } else {
         if (lefCallbacks->LayerCbk) {
            lefData->lefrLayer.addEnclosureExceptEC((yyvsp[0].dval));
         }
      }
    }
#line 6261 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 2422 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
         lefData->lefrLayer.addPreferEnclosureWidth((yyvsp[0].dval));
      }
    }
#line 6271 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 2430 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
        lefData->outMsg = (char*)lefMalloc(10000);
        sprintf(lefData->outMsg,
          "MINIMUMCUT WITHIN is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
        lefError(1700, lefData->outMsg);
        lefFree(lefData->outMsg);
        CHKERR();
      } else {
         if (lefCallbacks->LayerCbk) {
            lefData->lefrLayer.addMinimumcutWithin((yyvsp[0].dval));
         }
      }
    }
#line 6290 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2447 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.5) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "FROMABOVE statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1596, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      lefData->hasLayerMincut = 1;
      if (lefCallbacks->LayerCbk)
         lefData->lefrLayer.addMinimumcutConnect((char*)"FROMABOVE");

    }
#line 6313 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 2466 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.5) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "FROMBELOW statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1597, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      }
      lefData->hasLayerMincut = 1;
      if (lefCallbacks->LayerCbk)
         lefData->lefrLayer.addMinimumcutConnect((char*)"FROMBELOW");
    }
#line 6335 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2486 "lef.y" /* yacc.c:1646  */
    {   
      if (lefData->versionNum < 5.5) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "LENGTH WITHIN statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1598, lefData->outMsg);
               lefFree(lefData->outMsg);
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk)
         lefData->lefrLayer.addMinimumcutLengDis((yyvsp[-2].dval), (yyvsp[0].dval));
    }
#line 6356 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2508 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->LayerCbk) lefData->lefrLayer.addMinstepType((yyvsp[0].string));
  }
#line 6364 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2512 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->LayerCbk) lefData->lefrLayer.addMinstepLengthsum((yyvsp[0].dval));
  }
#line 6372 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2516 "lef.y" /* yacc.c:1646  */
    {
    if (lefData->versionNum < 5.7) {
      lefData->outMsg = (char*)lefMalloc(10000);
      sprintf(lefData->outMsg,
        "MAXEDGES is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
      lefError(1710, lefData->outMsg);
      lefFree(lefData->outMsg);
      CHKERR();
    } else
       if (lefCallbacks->LayerCbk) lefData->lefrLayer.addMinstepMaxedges((int)(yyvsp[0].dval));
  }
#line 6388 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 2529 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"INSIDECORNER";}
#line 6394 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 2530 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"OUTSIDECORNER";}
#line 6400 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 2531 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"STEP";}
#line 6406 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 2535 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk)
          lefData->lefrLayer.setAntennaValue(lefData->antennaType, (yyvsp[0].dval)); }
#line 6413 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 2538 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) { // require min 2 points, set the 1st 2 
          if (lefData->lefrAntennaPWLPtr) {
            lefData->lefrAntennaPWLPtr->Destroy();
            lefFree(lefData->lefrAntennaPWLPtr);
          }

          lefData->lefrAntennaPWLPtr = lefiAntennaPWL::create();
          lefData->lefrAntennaPWLPtr->addAntennaPWL((yyvsp[-1].pt).x, (yyvsp[-1].pt).y);
          lefData->lefrAntennaPWLPtr->addAntennaPWL((yyvsp[0].pt).x, (yyvsp[0].pt).y);
        }
      }
#line 6429 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 2550 "lef.y" /* yacc.c:1646  */
    { 
        if (lefCallbacks->LayerCbk) {
          lefData->lefrLayer.setAntennaPWL(lefData->antennaType, lefData->lefrAntennaPWLPtr);
          lefData->lefrAntennaPWLPtr = NULL;
        }
      }
#line 6440 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 2563 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk)
      lefData->lefrAntennaPWLPtr->addAntennaPWL((yyvsp[0].pt).x, (yyvsp[0].pt).y);
  }
#line 6448 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 2569 "lef.y" /* yacc.c:1646  */
    { 
        lefData->use5_4 = 1;
        if (lefData->ignoreVersion) {
           // do nothing 
        }
        else if ((lefData->antennaType == lefiAntennaAF) && (lefData->versionNum <= 5.3)) {
           if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
              if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                 lefData->outMsg = (char*)lefMalloc(10000);
                 sprintf (lefData->outMsg,
                   "ANTENNAAREAFACTOR with DIFFUSEONLY statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
                 lefError(1599, lefData->outMsg);
                 lefFree(lefData->outMsg);
                 CHKERR();
              }
           }
        } else if (lefData->use5_3) {
           if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
              if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                 lefData->outMsg = (char*)lefMalloc(10000);
                 sprintf (lefData->outMsg,
                   "ANTENNAAREAFACTOR with DIFFUSEONLY statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
                 lefError(1599, lefData->outMsg);
                 lefFree(lefData->outMsg);
                 CHKERR();
              }
           }
        }
        if (lefCallbacks->LayerCbk)
          lefData->lefrLayer.setAntennaDUO(lefData->antennaType);
      }
#line 6484 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2602 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"PEAK";}
#line 6490 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2603 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"AVERAGE";}
#line 6496 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 2604 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"RMS";}
#line 6502 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2608 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addNumber((yyvsp[0].dval)); }
#line 6508 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2610 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addAcFrequency(); }
#line 6514 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2613 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addNumber((yyvsp[0].dval)); }
#line 6520 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2615 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addAcTableEntry(); }
#line 6526 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2619 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerCut) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1600, "CUTAREA statement can only be defined in LAYER with TYPE CUT.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.addNumber((yyvsp[0].dval));
    }
#line 6542 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2631 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addAcCutarea(); }
#line 6548 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2633 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->layerRout) {
         if (lefCallbacks->LayerCbk) { // write error only if cbk is set 
            if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1601, "WIDTH can only be defined in LAYER with TYPE ROUTING.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->LayerCbk) lefData->lefrLayer.addNumber((yyvsp[0].dval));
    }
#line 6564 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2645 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addAcWidth(); }
#line 6570 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2649 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addNumber((yyvsp[0].dval)); }
#line 6576 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2651 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addDcTableEntry(); }
#line 6582 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2655 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addNumber((yyvsp[0].dval)); }
#line 6588 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2659 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addNumber((yyvsp[0].dval)); }
#line 6594 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2668 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
        char propTp;
        propTp = lefSettings->lefProps.lefrLayerProp.propType((yyvsp[-1].string));
        lefData->lefrLayer.addProp((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 6606 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2676 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
        char propTp;
        propTp = lefSettings->lefProps.lefrLayerProp.propType((yyvsp[-1].string));
        lefData->lefrLayer.addProp((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 6618 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2684 "lef.y" /* yacc.c:1646  */
    {
      char temp[32];
      sprintf(temp, "%.11g", (yyvsp[0].dval));
      if (lefCallbacks->LayerCbk) {
        char propTp;
        propTp = lefSettings->lefProps.lefrLayerProp.propType((yyvsp[-1].string));
        lefData->lefrLayer.addNumProp((yyvsp[-1].string), (yyvsp[0].dval), temp, propTp);
      }
    }
#line 6632 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2696 "lef.y" /* yacc.c:1646  */
    { }
#line 6638 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2698 "lef.y" /* yacc.c:1646  */
    { }
#line 6644 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2701 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.setCurrentPoint((yyvsp[-2].dval), (yyvsp[-1].dval)); }
#line 6650 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2709 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.setCapacitancePoint((yyvsp[-2].dval), (yyvsp[-1].dval)); }
#line 6656 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2714 "lef.y" /* yacc.c:1646  */
    { }
#line 6662 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2717 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.setResistancePoint((yyvsp[-2].dval), (yyvsp[-1].dval)); }
#line 6668 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2720 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"ROUTING"; lefData->layerRout = 1;}
#line 6674 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2721 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"CUT"; lefData->layerCut = 1;}
#line 6680 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2722 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"OVERLAP"; lefData->layerMastOver = 1;}
#line 6686 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2723 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"MASTERSLICE"; lefData->layerMastOver = 1;}
#line 6692 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2724 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"VIRTUAL";}
#line 6698 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2725 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"IMPLANT";}
#line 6704 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2728 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"HORIZONTAL";}
#line 6710 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2729 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"VERTICAL";}
#line 6716 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2730 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"DIAG45";}
#line 6722 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2731 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"DIAG135";}
#line 6728 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2735 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->LayerCbk)
       lefData->lefrLayer.addMinenclosedareaWidth((yyvsp[0].dval));
    }
#line 6737 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2742 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->LayerCbk)
       lefData->lefrLayer.addAntennaModel(1);
    }
#line 6746 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2747 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->LayerCbk)
       lefData->lefrLayer.addAntennaModel(2);
    }
#line 6755 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2752 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->LayerCbk)
       lefData->lefrLayer.addAntennaModel(3);
    }
#line 6764 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2757 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->LayerCbk)
       lefData->lefrLayer.addAntennaModel(4);
    }
#line 6773 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2763 "lef.y" /* yacc.c:1646  */
    { }
#line 6779 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2765 "lef.y" /* yacc.c:1646  */
    { }
#line 6785 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2768 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->LayerCbk) {
         lefData->lefrLayer.addSpParallelWidth((yyvsp[0].dval));
      }
    }
#line 6795 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2774 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addSpParallelWidthSpacing(); }
#line 6801 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2777 "lef.y" /* yacc.c:1646  */
    { }
#line 6807 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2779 "lef.y" /* yacc.c:1646  */
    { }
#line 6813 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2782 "lef.y" /* yacc.c:1646  */
    {
       if (lefCallbacks->LayerCbk) lefData->lefrLayer.addNumber((yyvsp[0].dval));
    }
#line 6821 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2786 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
         lefData->lefrLayer.addSpTwoWidths((yyvsp[-4].dval), (yyvsp[-3].dval));
    }
#line 6830 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2792 "lef.y" /* yacc.c:1646  */
    { 
        (yyval.dval) = -1; // cannot use 0, since PRL number can be 0 
        lefData->lefrLayer.setSpTwoWidthsHasPRL(0);
    }
#line 6839 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2797 "lef.y" /* yacc.c:1646  */
    { 
        (yyval.dval) = (yyvsp[0].dval); 
        lefData->lefrLayer.setSpTwoWidthsHasPRL(1);
    }
#line 6848 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2803 "lef.y" /* yacc.c:1646  */
    { }
#line 6854 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2805 "lef.y" /* yacc.c:1646  */
    { }
#line 6860 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2808 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->LayerCbk) lefData->lefrLayer.addSpInfluence((yyvsp[-4].dval), (yyvsp[-2].dval), (yyvsp[0].dval)); }
#line 6866 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2811 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->lefrHasLayer) {  // 5.5 
        if (lefCallbacks->MaxStackViaCbk) { // write error only if cbk is set 
           if (lefData->maxStackViaWarnings++ < lefSettings->MaxStackViaWarnings) {
             lefError(1602, "MAXVIASTACK statement has to be defined after the LAYER statement.");
             CHKERR();
           }
        }
      } else if (lefData->lefrHasMaxVS) {
        if (lefCallbacks->MaxStackViaCbk) { // write error only if cbk is set 
           if (lefData->maxStackViaWarnings++ < lefSettings->MaxStackViaWarnings) {
             lefError(1603, "A MAXVIASTACK was already defined.\nOnly one MAXVIASTACK is allowed per lef file.");
             CHKERR();
           }
        }
      } else {
        if (lefCallbacks->MaxStackViaCbk) {
           lefData->lefrMaxStackVia.setMaxStackVia((int)(yyvsp[-1].dval));
           CALLBACK(lefCallbacks->MaxStackViaCbk, lefrMaxStackViaCbkType, &lefData->lefrMaxStackVia);
        }
      }
      if (lefData->versionNum < 5.5) {
        if (lefCallbacks->MaxStackViaCbk) { // write error only if cbk is set 
           if (lefData->maxStackViaWarnings++ < lefSettings->MaxStackViaWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                "MAXVIASTACK statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1604, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      lefData->lefrHasMaxVS = 1;
    }
#line 6906 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2846 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 2; lefData->lefNoNum= 2;}
#line 6912 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2848 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->lefrHasLayer) {  // 5.5 
        if (lefCallbacks->MaxStackViaCbk) { // write error only if cbk is set 
           if (lefData->maxStackViaWarnings++ < lefSettings->MaxStackViaWarnings) {
              lefError(1602, "MAXVIASTACK statement has to be defined after the LAYER statement.");
              CHKERR();
           }
        }
      } else if (lefData->lefrHasMaxVS) {
        if (lefCallbacks->MaxStackViaCbk) { // write error only if cbk is set 
           if (lefData->maxStackViaWarnings++ < lefSettings->MaxStackViaWarnings) {
             lefError(1603, "A MAXVIASTACK was already defined.\nOnly one MAXVIASTACK is allowed per lef file.");
             CHKERR();
           }
        }
      } else {
        if (lefCallbacks->MaxStackViaCbk) {
           lefData->lefrMaxStackVia.setMaxStackVia((int)(yyvsp[-5].dval));
           lefData->lefrMaxStackVia.setMaxStackViaRange((yyvsp[-2].string), (yyvsp[-1].string));
           CALLBACK(lefCallbacks->MaxStackViaCbk, lefrMaxStackViaCbkType, &lefData->lefrMaxStackVia);
        }
      }
      lefData->lefrHasMaxVS = 1;
    }
#line 6941 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 2873 "lef.y" /* yacc.c:1646  */
    { lefData->hasViaRule_layer = 0; }
#line 6947 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 2874 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->ViaCbk) {
        if (lefData->ndRule) 
            lefData->nd->addViaRule(&lefData->lefrVia);
         else 
            CALLBACK(lefCallbacks->ViaCbk, lefrViaCbkType, &lefData->lefrVia);
       }
    }
#line 6960 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 2884 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 6966 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 2887 "lef.y" /* yacc.c:1646  */
    {
      // 0 is nodefault 
      if (lefCallbacks->ViaCbk) lefData->lefrVia.setName((yyvsp[0].string), 0);
      lefData->viaLayer = 0;
      lefData->numVia++;
      //strcpy(lefData->viaName, $2);
      lefData->viaName = strdup((yyvsp[0].string));
    }
#line 6979 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 2896 "lef.y" /* yacc.c:1646  */
    {
      // 1 is default 
      if (lefCallbacks->ViaCbk) lefData->lefrVia.setName((yyvsp[-1].string), 1);
      lefData->viaLayer = 0;
      //strcpy(lefData->viaName, $2);
      lefData->viaName = strdup((yyvsp[-1].string));
    }
#line 6991 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 2904 "lef.y" /* yacc.c:1646  */
    {
      // 2 is generated 
      if (lefCallbacks->ViaCbk) lefData->lefrVia.setName((yyvsp[-1].string), 2);
      lefData->viaLayer = 0;
      //strcpy(lefData->viaName, $2);
      lefData->viaName = strdup((yyvsp[-1].string));
    }
#line 7003 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2912 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 7009 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 2914 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 3; lefData->lefNoNum = 1; }
#line 7015 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2917 "lef.y" /* yacc.c:1646  */
    {
       if (lefData->versionNum < 5.6) {
         if (lefCallbacks->ViaCbk) { // write error only if cbk is set 
            if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                "VIARULE statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1709, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
            }
         }
       }  else
          if (lefCallbacks->ViaCbk) lefData->lefrVia.setViaRule((yyvsp[-21].string), (yyvsp[-18].dval), (yyvsp[-17].dval), (yyvsp[-13].string), (yyvsp[-12].string), (yyvsp[-11].string),
                          (yyvsp[-8].dval), (yyvsp[-7].dval), (yyvsp[-4].dval), (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
       lefData->viaLayer++;
       lefData->hasViaRule_layer = 1;
    }
#line 7038 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2943 "lef.y" /* yacc.c:1646  */
    {
       if (lefCallbacks->ViaCbk) lefData->lefrVia.setRowCol((int)(yyvsp[-2].dval), (int)(yyvsp[-1].dval));
    }
#line 7046 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2947 "lef.y" /* yacc.c:1646  */
    {
       if (lefCallbacks->ViaCbk) lefData->lefrVia.setOrigin((yyvsp[-2].dval), (yyvsp[-1].dval));
    }
#line 7054 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2951 "lef.y" /* yacc.c:1646  */
    {
       if (lefCallbacks->ViaCbk) lefData->lefrVia.setOffset((yyvsp[-4].dval), (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
    }
#line 7062 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2954 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 7068 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2955 "lef.y" /* yacc.c:1646  */
    {
       if (lefCallbacks->ViaCbk) lefData->lefrVia.setPattern((yyvsp[-1].string));
    }
#line 7076 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2972 "lef.y" /* yacc.c:1646  */
    { }
#line 7082 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2974 "lef.y" /* yacc.c:1646  */
    { }
#line 7088 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2976 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ViaCbk) lefData->lefrVia.setResistance((yyvsp[-1].dval)); }
#line 7094 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2977 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1000000; }
#line 7100 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2978 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 0;
    }
#line 7107 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2981 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->ViaCbk) lefData->lefrVia.setTopOfStack();
      } else
        if (lefCallbacks->ViaCbk)  // write warning only if cbk is set 
           if (lefData->viaWarnings++ < lefSettings->ViaWarnings)
              lefWarning(2019, "TOPOFSTACKONLY statement is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later");
    }
#line 7120 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2997 "lef.y" /* yacc.c:1646  */
    { 
      char temp[32];
      sprintf(temp, "%.11g", (yyvsp[0].dval));
      if (lefCallbacks->ViaCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrViaProp.propType((yyvsp[-1].string));
         lefData->lefrVia.addNumProp((yyvsp[-1].string), (yyvsp[0].dval), temp, propTp);
      }
    }
#line 7134 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 3007 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ViaCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrViaProp.propType((yyvsp[-1].string));
         lefData->lefrVia.addProp((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 7146 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 3015 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ViaCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrViaProp.propType((yyvsp[-1].string));
         lefData->lefrVia.addProp((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 7158 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3025 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->ViaCbk) lefData->lefrVia.setForeign((yyvsp[-1].string), 0, 0.0, 0.0, -1);
      } else
        if (lefCallbacks->ViaCbk)  // write warning only if cbk is set 
           if (lefData->viaWarnings++ < lefSettings->ViaWarnings)
             lefWarning(2020, "FOREIGN statement in VIA is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 7171 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3034 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->ViaCbk) lefData->lefrVia.setForeign((yyvsp[-2].string), 1, (yyvsp[-1].pt).x, (yyvsp[-1].pt).y, -1);
      } else
        if (lefCallbacks->ViaCbk)  // write warning only if cbk is set 
           if (lefData->viaWarnings++ < lefSettings->ViaWarnings)
             lefWarning(2020, "FOREIGN statement in VIA is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 7184 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3043 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->ViaCbk) lefData->lefrVia.setForeign((yyvsp[-3].string), 1, (yyvsp[-2].pt).x, (yyvsp[-2].pt).y, (yyvsp[-1].integer));
      } else
        if (lefCallbacks->ViaCbk)  // write warning only if cbk is set 
           if (lefData->viaWarnings++ < lefSettings->ViaWarnings)
             lefWarning(2020, "FOREIGN statement in VIA is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 7197 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3052 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->ViaCbk) lefData->lefrVia.setForeign((yyvsp[-2].string), 0, 0.0, 0.0, (yyvsp[-1].integer));
      } else
        if (lefCallbacks->ViaCbk)  // write warning only if cbk is set 
           if (lefData->viaWarnings++ < lefSettings->ViaWarnings)
             lefWarning(2020, "FOREIGN statement in VIA is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 7210 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3061 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum= 1;}
#line 7216 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3062 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 7222 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3065 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 0;}
#line 7228 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3066 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 1;}
#line 7234 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3067 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 2;}
#line 7240 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3068 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 3;}
#line 7246 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3069 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 4;}
#line 7252 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3070 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 5;}
#line 7258 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3071 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 6;}
#line 7264 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3072 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 7;}
#line 7270 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3073 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 0;}
#line 7276 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3074 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 1;}
#line 7282 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3075 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 2;}
#line 7288 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3076 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 3;}
#line 7294 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3077 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 4;}
#line 7300 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3078 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 5;}
#line 7306 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3079 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 6;}
#line 7312 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3080 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 7;}
#line 7318 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3083 "lef.y" /* yacc.c:1646  */
    { }
#line 7324 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3085 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 7330 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3086 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ViaCbk) lefData->lefrVia.addLayer((yyvsp[-1].string));
      lefData->viaLayer++;
      lefData->hasViaRule_layer = 1;
    }
#line 7340 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3099 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->ViaCbk) {
        if (lefData->versionNum < 5.8 && (int)(yyvsp[-3].integer) > 0) {
          if (lefData->viaWarnings++ < lefSettings->ViaWarnings) {
              lefError(2081, "MASK information can only be defined with version 5.8");
              CHKERR(); 
            }           
        } else {
          lefData->lefrVia.addRectToLayer((int)(yyvsp[-3].integer), (yyvsp[-2].pt).x, (yyvsp[-2].pt).y, (yyvsp[-1].pt).x, (yyvsp[-1].pt).y);
        }
      }
    }
#line 7357 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3112 "lef.y" /* yacc.c:1646  */
    {
      lefData->lefrGeometriesPtr = (lefiGeometries*)lefMalloc(sizeof(lefiGeometries));
      lefData->lefrGeometriesPtr->Init();
      lefData->lefrDoGeometries = 1;
    }
#line 7367 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3118 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->ViaCbk) {
        if (lefData->versionNum < 5.8 && (yyvsp[-6].integer) > 0) {
          if (lefData->viaWarnings++ < lefSettings->ViaWarnings) {
              lefError(2083, "Color mask information can only be defined with version 5.8.");
              CHKERR(); 
            }           
        } else {
            lefData->lefrGeometriesPtr->addPolygon((int)(yyvsp[-6].integer));
            lefData->lefrVia.addPolyToLayer((int)(yyvsp[-6].integer), lefData->lefrGeometriesPtr);   // 5.6
        }
      }
      lefData->lefrGeometriesPtr->clearPolyItems(); // free items fields
      lefFree((char*)(lefData->lefrGeometriesPtr)); // Don't need anymore, poly data has
      lefData->lefrDoGeometries = 0;                // copied
    }
#line 7388 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3135 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 7394 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3136 "lef.y" /* yacc.c:1646  */
    { 
      // 10/17/2001 - Wanda da Rosa, PCR 404149
      //              Error if no layer in via
      if (!lefData->viaLayer) {
         if (lefCallbacks->ViaCbk) {  // write error only if cbk is set 
            if (lefData->viaWarnings++ < lefSettings->ViaWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                "A LAYER statement is missing in the VIA %s.\nAt least one LAYERis required per VIA statement.", (yyvsp[0].string));
              lefError(1606, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
            }
         }
      }
      if (strcmp(lefData->viaName, (yyvsp[0].string)) != 0) {
         if (lefCallbacks->ViaCbk) { // write error only if cbk is set 
            if (lefData->viaWarnings++ < lefSettings->ViaWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                "END VIA name %s is different from the VIA name %s.\nCorrect the LEF file before rerunning it through the LEF parser.", (yyvsp[0].string), lefData->viaName);
              lefError(1607, lefData->outMsg);
              lefFree(lefData->outMsg);
              lefFree(lefData->viaName);
              CHKERR();
            } else
              lefFree(lefData->viaName);
         } else
            lefFree(lefData->viaName);
      } else
         lefFree(lefData->viaName);
    }
#line 7431 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3169 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 7437 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3170 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setName((yyvsp[0].string));
      lefData->viaRuleLayer = 0;
      //strcpy(lefData->viaRuleName, $3);
      lefData->viaRuleName = strdup((yyvsp[0].string));
      lefData->isGenerate = 0;
    }
#line 7449 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3180 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->viaRuleLayer == 0 || lefData->viaRuleLayer > 2) {
         if (lefCallbacks->ViaRuleCbk) {  // write error only if cbk is set 
            if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
              lefError(1608, "A VIARULE statement requires two layers.");
              CHKERR();
            }
         }
      }
      if (lefCallbacks->ViaRuleCbk)
        CALLBACK(lefCallbacks->ViaRuleCbk, lefrViaRuleCbkType, &lefData->lefrViaRule);
      // 2/19/2004 - reset the ENCLOSURE overhang values which may be
      // set by the old syntax OVERHANG -- Not necessary, but just incase
      if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.clearLayerOverhang();
    }
#line 7469 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3198 "lef.y" /* yacc.c:1646  */
    {
      lefData->isGenerate = 1;
    }
#line 7477 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3202 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->viaRuleLayer == 0) {
         if (lefCallbacks->ViaRuleCbk) {  // write error only if cbk is set 
            if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
              lefError(1708, "A VIARULE GENERATE requires three layers.");
              CHKERR();
            }
         }
      } else if ((lefData->viaRuleLayer < 3) && (lefData->versionNum >= 5.6)) {
         if (lefCallbacks->ViaRuleCbk)  // write warning only if cbk is set 
            if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings)
              lefWarning(2021, "turn-via is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
      } else {
         if (lefCallbacks->ViaRuleCbk) {
            lefData->lefrViaRule.setGenerate();
            CALLBACK(lefCallbacks->ViaRuleCbk, lefrViaRuleCbkType, &lefData->lefrViaRule);
         }
      }
      // 2/19/2004 - reset the ENCLOSURE overhang values which may be
      // set by the old syntax OVERHANG
      if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.clearLayerOverhang();
    }
#line 7504 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3227 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
         if (lefCallbacks->ViaRuleCbk) {  // write error only if cbk is set 
            if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                "DEFAULT statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1605, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
            }
         }
      } else
        if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setDefault();
    }
#line 7524 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3258 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 10000000;}
#line 7530 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3259 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 0;
    }
#line 7537 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3269 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ViaRuleCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrViaRuleProp.propType((yyvsp[-1].string));
         lefData->lefrViaRule.addProp((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 7549 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3277 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ViaRuleCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrViaRuleProp.propType((yyvsp[-1].string));
         lefData->lefrViaRule.addProp((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 7561 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3285 "lef.y" /* yacc.c:1646  */
    {
      char temp[32];
      sprintf(temp, "%.11g", (yyvsp[0].dval));
      if (lefCallbacks->ViaRuleCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrViaRuleProp.propType((yyvsp[-1].string));
         lefData->lefrViaRule.addNumProp((yyvsp[-1].string), (yyvsp[0].dval), temp, propTp);
      }
    }
#line 7575 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3296 "lef.y" /* yacc.c:1646  */
    {
      // 10/18/2001 - Wanda da Rosa PCR 404181
      //              Make sure the 1st 2 layers in viarule has direction
      // 04/28/2004 - PCR 704072 - DIRECTION in viarule generate is
      //              obsolete in 5.6
      if (lefData->versionNum >= 5.6) {
         if (lefData->viaRuleLayer < 2 && !lefData->viaRuleHasDir && !lefData->viaRuleHasEnc &&
             !lefData->isGenerate) {
            if (lefCallbacks->ViaRuleCbk) {  // write error only if cbk is set 
               if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
                  lefError(1705, "VIARULE statement in a layer, requires a DIRECTION construct statement.");
                  CHKERR(); 
               }
            }
         }
      } else {
         if (lefData->viaRuleLayer < 2 && !lefData->viaRuleHasDir && !lefData->viaRuleHasEnc &&
             lefData->isGenerate) {
            if (lefCallbacks->ViaRuleCbk) {  // write error only if cbk is set 
               if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
                  lefError(1705, "VIARULE statement in a layer, requires a DIRECTION construct statement.");
                  CHKERR(); 
               }
            }
         }
      }
      lefData->viaRuleLayer++;
    }
#line 7608 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3332 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.addViaName((yyvsp[-1].string)); }
#line 7614 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3334 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 7620 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3335 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setLayer((yyvsp[-1].string));
      lefData->viaRuleHasDir = 0;
      lefData->viaRuleHasEnc = 0;
    }
#line 7629 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3347 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->viaRuleHasEnc) {
        if (lefCallbacks->ViaRuleCbk) {  // write error only if cbk is set 
           if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
              lefError(1706, "An ENCLOSRE statement was already defined in the layer.\nIt is DIRECTION or ENCLOSURE can be specified in a layer.");
              CHKERR();
           }
        }
      } else {
        if ((lefData->versionNum < 5.6) || (!lefData->isGenerate)) {
          if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setHorizontal();
        } else
          if (lefCallbacks->ViaRuleCbk)  // write warning only if cbk is set 
             if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings)
               lefWarning(2022, "DIRECTION statement in VIARULE is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
      }
      lefData->viaRuleHasDir = 1;
    }
#line 7652 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3366 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->viaRuleHasEnc) {
        if (lefCallbacks->ViaRuleCbk) { // write error only if cbk is set 
           if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
              lefError(1706, "An ENCLOSRE statement was already defined in the layer.\nIt is DIRECTION or ENCLOSURE can be specified in a layer.");
              CHKERR();
           }
        }
      } else {
        if ((lefData->versionNum < 5.6) || (!lefData->isGenerate)) {
          if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setVertical();
        } else
          if (lefCallbacks->ViaRuleCbk) // write warning only if cbk is set 
           if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings)
              lefWarning(2022, "DIRECTION statement in VIARULE is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
      }
      lefData->viaRuleHasDir = 1;
    }
#line 7675 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3385 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.5) {
         if (lefCallbacks->ViaRuleCbk) { // write error only if cbk is set 
           if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                "ENCLOSURE statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1707, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
         }
      }
      // 2/19/2004 - Enforced the rule that ENCLOSURE can only be defined
      // in VIARULE GENERATE
      if (!lefData->isGenerate) {
         if (lefCallbacks->ViaRuleCbk) { // write error only if cbk is set 
           if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
              lefError(1614, "An ENCLOSURE statement is defined in a VIARULE statement only.\nOVERHANG statement can only be defined in VIARULE GENERATE.");
              CHKERR();
           }
         }
      }
      if (lefData->viaRuleHasDir) {
         if (lefCallbacks->ViaRuleCbk) { // write error only if cbk is set 
           if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
              lefError(1609, "A DIRECTION statement was already defined in the layer.\nIt is DIRECTION or ENCLOSURE can be specified in a layer.");
              CHKERR();
           }
         }
      } else {
         if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setEnclosure((yyvsp[-2].dval), (yyvsp[-1].dval));
      }
      lefData->viaRuleHasEnc = 1;
    }
#line 7715 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 3421 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setWidth((yyvsp[-3].dval),(yyvsp[-1].dval)); }
#line 7721 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 3423 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ViaRuleCbk)
        lefData->lefrViaRule.setRect((yyvsp[-2].pt).x, (yyvsp[-2].pt).y, (yyvsp[-1].pt).x, (yyvsp[-1].pt).y); }
#line 7728 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 3426 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setSpacing((yyvsp[-3].dval),(yyvsp[-1].dval)); }
#line 7734 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 3428 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setResistance((yyvsp[-1].dval)); }
#line 7740 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 3430 "lef.y" /* yacc.c:1646  */
    {
      if (!lefData->viaRuleHasDir) {
         if (lefCallbacks->ViaRuleCbk) {  // write error only if cbk is set 
            if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
               lefError(1610, "An OVERHANG statement is defined, but the required DIRECTION statement is not yet defined.\nUpdate the LEF file to define the DIRECTION statement before the OVERHANG.");
               CHKERR();
            }
         }
      }
      // 2/19/2004 - Enforced the rule that OVERHANG can only be defined
      // in VIARULE GENERATE after 5.3
      if ((lefData->versionNum > 5.3) && (!lefData->isGenerate)) {
         if (lefCallbacks->ViaRuleCbk) {  // write error only if cbk is set 
            if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
               lefError(1611, "An OVERHANG statement is defined in a VIARULE statement only.\nOVERHANG statement can only be defined in VIARULE GENERATE.");
               CHKERR();
            }
         }
      }
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setOverhang((yyvsp[-1].dval));
      } else {
        if (lefCallbacks->ViaRuleCbk)  // write warning only if cbk is set 
           if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings)
              lefWarning(2023, "OVERHANG statement will be translated into similar ENCLOSURE rule");
        // In 5.6 & later, set it to either ENCLOSURE overhang1 or overhang2
        if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setOverhangToEnclosure((yyvsp[-1].dval));
      }
    }
#line 7774 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 3460 "lef.y" /* yacc.c:1646  */
    {
      // 2/19/2004 - Enforced the rule that METALOVERHANG can only be defined
      // in VIARULE GENERATE
      if ((lefData->versionNum > 5.3) && (!lefData->isGenerate)) {
         if (lefCallbacks->ViaRuleCbk) {  // write error only if cbk is set 
            if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
               lefError(1612, "An METALOVERHANG statement is defined in a VIARULE statement only.\nOVERHANG statement can only be defined in VIARULE GENERATE.");
               CHKERR();
            }
         }
      }
      if (lefData->versionNum < 5.6) {
        if (!lefData->viaRuleHasDir) {
           if (lefCallbacks->ViaRuleCbk) {  // write error only if cbk is set 
             if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
                lefError(1613, "An METALOVERHANG statement is defined, but the required DIRECTION statement is not yet defined.\nUpdate the LEF file to define the DIRECTION statement before the OVERHANG.");
                CHKERR();
             } 
           }
        }
        if (lefCallbacks->ViaRuleCbk) lefData->lefrViaRule.setMetalOverhang((yyvsp[-1].dval));
      } else
        if (lefCallbacks->ViaRuleCbk)  // write warning only if cbk is set 
           if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings)
             lefWarning(2024, "METALOVERHANG statement is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 7805 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 3487 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 7811 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 3488 "lef.y" /* yacc.c:1646  */
    {
      if ((lefData->isGenerate) && (lefCallbacks->ViaRuleCbk) && lefData->lefrViaRule.numLayers() >= 3) {         
        if (!lefData->lefrViaRule.layer(0)->hasRect() &&
            !lefData->lefrViaRule.layer(1)->hasRect() &&
            !lefData->lefrViaRule.layer(2)->hasRect()) {
            lefData->outMsg = (char*)lefMalloc(10000);
            sprintf (lefData->outMsg, 
                     "VIARULE GENERATE '%s' cut layer definition should have RECT statement.\nCorrect the LEF file before rerunning it through the LEF parser.", 
                      lefData->viaRuleName);
            lefWarning(1714, lefData->outMsg); 
            lefFree(lefData->outMsg);            
            CHKERR();                
        }
      }

      if (strcmp(lefData->viaRuleName, (yyvsp[0].string)) != 0) {
        if (lefCallbacks->ViaRuleCbk) {  // write error only if cbk is set 
           if (lefData->viaRuleWarnings++ < lefSettings->ViaRuleWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "END VIARULE name %s is different from the VIARULE name %s.\nCorrect the LEF file before rerunning it through the LEF parser.", (yyvsp[0].string), lefData->viaRuleName);
              lefError(1615, lefData->outMsg);
              lefFree(lefData->outMsg);
              lefFree(lefData->viaRuleName);
              CHKERR();
           } else
              lefFree(lefData->viaRuleName);
        } else
           lefFree(lefData->viaRuleName);
      } else
        lefFree(lefData->viaRuleName);
    }
#line 7848 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 3522 "lef.y" /* yacc.c:1646  */
    { }
#line 7854 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 3525 "lef.y" /* yacc.c:1646  */
    {
      lefData->hasSamenet = 0;
      if ((lefData->versionNum < 5.6) || (!lefData->ndRule)) {
        // if 5.6 and in nondefaultrule, it should not get in here, 
        // it should go to the else statement to write out a warning 
        // if 5.6, not in nondefaultrule, it will get in here 
        // if 5.5 and earlier in nondefaultrule is ok to get in here 
        if (lefData->versionNum >= 5.7) { // will get to this if statement if  
                           // lefData->versionNum is 5.6 and higher but lefData->ndRule = 0 
           if (lefData->spacingWarnings == 0) {  // only print once 
              lefWarning(2077, "A SPACING SAMENET section is defined but it is not legal in a LEF 5.7 version file.\nIt will be ignored which will probably cause real DRC violations to be ignored, and may\ncause false DRC violations to occur.\n\nTo avoid this warning, and correctly handle these DRC rules, you should modify your\nLEF to use the appropriate SAMENET keywords as described in the LEF/DEF 5.7\nmanual under the SPACING statements in the LAYER (Routing) and LAYER (Cut)\nsections listed in the LEF Table of Contents.");
              lefData->spacingWarnings++;
           }
        } else if (lefCallbacks->SpacingBeginCbk && !lefData->ndRule)
          CALLBACK(lefCallbacks->SpacingBeginCbk, lefrSpacingBeginCbkType, 0);
      } else
        if (lefCallbacks->SpacingBeginCbk && !lefData->ndRule)  // write warning only if cbk is set 
           if (lefData->spacingWarnings++ < lefSettings->SpacingWarnings)
             lefWarning(2025, "SAMENET statement in NONDEFAULTRULE is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 7879 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 3547 "lef.y" /* yacc.c:1646  */
    {
      if ((lefData->versionNum < 5.6) || (!lefData->ndRule)) {
        if ((lefData->versionNum <= 5.4) && (!lefData->hasSamenet)) {
           lefError(1616, "SAMENET statement is required inside SPACING for any lef file with version 5.4 and earlier, but is not defined in the parsed lef file.");
           CHKERR();
        } else if (lefData->versionNum < 5.7) { // obsolete in 5.7 and later 
           if (lefCallbacks->SpacingEndCbk && !lefData->ndRule)
             CALLBACK(lefCallbacks->SpacingEndCbk, lefrSpacingEndCbkType, 0);
        }
      }
    }
#line 7895 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 3565 "lef.y" /* yacc.c:1646  */
    {
      if ((lefData->versionNum < 5.6) || (!lefData->ndRule)) {
        if (lefData->versionNum < 5.7) {
          if (lefCallbacks->SpacingCbk) {
            lefData->lefrSpacing.set((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[-1].dval), 0);
            if (lefData->ndRule)
                lefData->nd->addSpacingRule(&lefData->lefrSpacing);
            else 
                CALLBACK(lefCallbacks->SpacingCbk, lefrSpacingCbkType, &lefData->lefrSpacing);            
          }
        }
      }
    }
#line 7913 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 3579 "lef.y" /* yacc.c:1646  */
    {
      if ((lefData->versionNum < 5.6) || (!lefData->ndRule)) {
        if (lefData->versionNum < 5.7) {
          if (lefCallbacks->SpacingCbk) {
            lefData->lefrSpacing.set((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-2].dval), 1);
            if (lefData->ndRule)
                lefData->nd->addSpacingRule(&lefData->lefrSpacing);
            else 
                CALLBACK(lefCallbacks->SpacingCbk, lefrSpacingCbkType, &lefData->lefrSpacing);    
          }
        }
      }
    }
#line 7931 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3595 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 2; lefData->lefNoNum = 2; lefData->hasSamenet = 1; }
#line 7937 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 3599 "lef.y" /* yacc.c:1646  */
    { (yyval.integer) = 0; }
#line 7943 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 3601 "lef.y" /* yacc.c:1646  */
    { (yyval.integer) = (int)(yyvsp[0].dval); }
#line 7949 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 3604 "lef.y" /* yacc.c:1646  */
    { }
#line 7955 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 3607 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->IRDropBeginCbk) 
          CALLBACK(lefCallbacks->IRDropBeginCbk, lefrIRDropBeginCbkType, 0);
      } else
        if (lefCallbacks->IRDropBeginCbk) // write warning only if cbk is set 
          if (lefData->iRDropWarnings++ < lefSettings->IRDropWarnings)
            lefWarning(2026, "IRDROP statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 7969 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 3618 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->IRDropEndCbk)
          CALLBACK(lefCallbacks->IRDropEndCbk, lefrIRDropEndCbkType, 0);
      }
    }
#line 7980 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 3632 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->IRDropCbk)
          CALLBACK(lefCallbacks->IRDropCbk, lefrIRDropCbkType, &lefData->lefrIRDrop);
      }
    }
#line 7991 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 3645 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->IRDropCbk) lefData->lefrIRDrop.setValues((yyvsp[-1].dval), (yyvsp[0].dval)); }
#line 7997 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 3648 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->IRDropCbk) lefData->lefrIRDrop.setTableName((yyvsp[0].string)); }
#line 8003 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 3651 "lef.y" /* yacc.c:1646  */
    {
    lefData->hasMinfeature = 1;
    if (lefData->versionNum < 5.4) {
       if (lefCallbacks->MinFeatureCbk) {
         lefData->lefrMinFeature.set((yyvsp[-2].dval), (yyvsp[-1].dval));
         CALLBACK(lefCallbacks->MinFeatureCbk, lefrMinFeatureCbkType, &lefData->lefrMinFeature);
       }
    } else
       if (lefCallbacks->MinFeatureCbk) // write warning only if cbk is set 
          if (lefData->minFeatureWarnings++ < lefSettings->MinFeatureWarnings)
            lefWarning(2027, "MINFEATURE statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
  }
#line 8020 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 3665 "lef.y" /* yacc.c:1646  */
    {
    if (lefData->versionNum < 5.4) {
       if (lefCallbacks->DielectricCbk)
         CALLBACK(lefCallbacks->DielectricCbk, lefrDielectricCbkType, (yyvsp[-1].dval));
    } else
       if (lefCallbacks->DielectricCbk) // write warning only if cbk is set 
         if (lefData->dielectricWarnings++ < lefSettings->DielectricWarnings)
           lefWarning(2028, "DIELECTRIC statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
  }
#line 8034 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 3675 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 8040 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 3676 "lef.y" /* yacc.c:1646  */
    {
    (void)lefSetNonDefault((yyvsp[0].string));
    if (lefCallbacks->NonDefaultCbk) lefData->lefrNonDefault.setName((yyvsp[0].string));
    lefData->ndLayer = 0;
    lefData->ndRule = 1;
    lefData->numVia = 0;
    //strcpy(lefData->nonDefaultRuleName, $3);
    lefData->nonDefaultRuleName = strdup((yyvsp[0].string));
  }
#line 8054 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 3686 "lef.y" /* yacc.c:1646  */
    {lefData->lefNdRule = 1;}
#line 8060 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 3687 "lef.y" /* yacc.c:1646  */
    {
    // 10/18/2001 - Wanda da Rosa, PCR 404189
    //              At least 1 layer is required
    if ((!lefData->ndLayer) && (!lefSettings->RelaxMode)) {
       if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
         if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
            lefError(1617, "NONDEFAULTRULE statement requires at least one LAYER statement.");
            CHKERR();
         }
       }
    }
    if ((!lefData->numVia) && (!lefSettings->RelaxMode) && (lefData->versionNum < 5.6)) {
       // VIA is no longer a required statement in 5.6
       if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
         if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
            lefError(1618, "NONDEFAULTRULE statement requires at least one VIA statement.");
            CHKERR();
         }
       }
    }
    if (lefCallbacks->NonDefaultCbk) {
      lefData->lefrNonDefault.end();
      CALLBACK(lefCallbacks->NonDefaultCbk, lefrNonDefaultCbkType, &lefData->lefrNonDefault);
    }
    lefData->ndRule = 0;
    lefData->lefDumbMode = 0;
    (void)lefUnsetNonDefault();
  }
#line 8093 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 3717 "lef.y" /* yacc.c:1646  */
    {
      if ((lefData->nonDefaultRuleName) && (*lefData->nonDefaultRuleName != '\0'))
        lefFree(lefData->nonDefaultRuleName);
    }
#line 8102 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 3722 "lef.y" /* yacc.c:1646  */
    {
      if (strcmp(lefData->nonDefaultRuleName, (yyvsp[0].string)) != 0) {
        if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
          if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
             lefData->outMsg = (char*)lefMalloc(10000);
             sprintf (lefData->outMsg,
                "END NONDEFAULTRULE name %s is different from the NONDEFAULTRULE name %s.\nCorrect the LEF file before rerunning it through the LEF parser.", (yyvsp[0].string), lefData->nonDefaultRuleName);
             lefError(1619, lefData->outMsg);
             lefFree(lefData->nonDefaultRuleName);
             lefFree(lefData->outMsg);
             CHKERR();
          } else
             lefFree(lefData->nonDefaultRuleName);
        } else
           lefFree(lefData->nonDefaultRuleName);
      } else
        lefFree(lefData->nonDefaultRuleName);
    }
#line 8125 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 3745 "lef.y" /* yacc.c:1646  */
    {
       if (lefData->versionNum < 5.6) {
          if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
            if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "HARDSPACING statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1620, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
          }
       } else 
          if (lefCallbacks->NonDefaultCbk)
             lefData->lefrNonDefault.setHardspacing();
    }
#line 8146 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 3778 "lef.y" /* yacc.c:1646  */
    {
       if (lefData->versionNum < 5.6) {
          if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
             lefData->outMsg = (char*)lefMalloc(10000);
             sprintf (lefData->outMsg,
               "USEVIA statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
             lefError(1621, lefData->outMsg);
             lefFree(lefData->outMsg);
             CHKERR();
          }
       } else {
          if (lefCallbacks->NonDefaultCbk)
             lefData->lefrNonDefault.addUseVia((yyvsp[-1].string));
       }
    }
#line 8166 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 3795 "lef.y" /* yacc.c:1646  */
    {
       if (lefData->versionNum < 5.6) {
          if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
             if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
                lefData->outMsg = (char*)lefMalloc(10000);
                sprintf (lefData->outMsg,
                  "USEVIARULE statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
                lefError(1622, lefData->outMsg);
                lefFree(lefData->outMsg);
                CHKERR();
             }
          }
       } else {
          if (lefCallbacks->NonDefaultCbk)
             lefData->lefrNonDefault.addUseViaRule((yyvsp[-1].string));
       }
    }
#line 8188 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 3814 "lef.y" /* yacc.c:1646  */
    {
       if (lefData->versionNum < 5.6) {
          if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
             if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
                lefData->outMsg = (char*)lefMalloc(10000);
                sprintf (lefData->outMsg,
                  "MINCUTS statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
                lefError(1623, lefData->outMsg);
                lefFree(lefData->outMsg);
                CHKERR();
             }
          }
       } else {
          if (lefCallbacks->NonDefaultCbk)
             lefData->lefrNonDefault.addMinCuts((yyvsp[-2].string), (int)(yyvsp[-1].dval));
       }
    }
#line 8210 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 3832 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 10000000;}
#line 8216 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 3833 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 0;
    }
#line 8223 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 3843 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->NonDefaultCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrNondefProp.propType((yyvsp[-1].string));
         lefData->lefrNonDefault.addProp((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 8235 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 3851 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->NonDefaultCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrNondefProp.propType((yyvsp[-1].string));
         lefData->lefrNonDefault.addProp((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 8247 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 3859 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->NonDefaultCbk) {
         char temp[32];
         char propTp;
         sprintf(temp, "%.11g", (yyvsp[0].dval));
         propTp = lefSettings->lefProps.lefrNondefProp.propType((yyvsp[-1].string));
         lefData->lefrNonDefault.addNumProp((yyvsp[-1].string), (yyvsp[0].dval), temp, propTp);
      }
    }
#line 8261 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 3869 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 8267 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 3870 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->NonDefaultCbk) lefData->lefrNonDefault.addLayer((yyvsp[0].string));
    lefData->ndLayer++;
    //strcpy(lefData->layerName, $3);
    lefData->layerName = strdup((yyvsp[0].string));
    lefData->ndLayerWidth = 0;
    lefData->ndLayerSpace = 0;
  }
#line 8280 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 3879 "lef.y" /* yacc.c:1646  */
    { 
    lefData->ndLayerWidth = 1;
    if (lefCallbacks->NonDefaultCbk) lefData->lefrNonDefault.addWidth((yyvsp[-1].dval));
  }
#line 8289 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 3883 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 8295 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 3884 "lef.y" /* yacc.c:1646  */
    {
    if (strcmp(lefData->layerName, (yyvsp[0].string)) != 0) {
      if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
         if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
            lefData->outMsg = (char*)lefMalloc(10000);
            sprintf (lefData->outMsg,
               "END LAYER name %s is different from the LAYER name %s.\nCorrect the LEF file before rerunning it through the LEF parser.", (yyvsp[-9].string), lefData->layerName);
            lefError(1624, lefData->outMsg);
            lefFree(lefData->outMsg);
            lefFree(lefData->layerName);
            CHKERR();
         } else
            lefFree(lefData->layerName);
      } else
         lefFree(lefData->layerName);
    } else
      lefFree(lefData->layerName);
    if (!lefData->ndLayerWidth) {
      if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
         if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
            lefError(1625, "A WIDTH statement is required in the LAYER statement in NONDEFULTRULE.");
            CHKERR();
         }
      }
    }
    if (!lefData->ndLayerSpace && lefData->versionNum < 5.6) {   // 5.6, SPACING is optional
      if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
         if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
            lefData->outMsg = (char*)lefMalloc(10000);
            sprintf (lefData->outMsg,
               "A SPACING statement is required in the LAYER statement in NONDEFAULTRULE for lef file with version 5.5 and earlier.\nYour lef file is defined with version %g. Update your lef to add a LAYER statement and try again.",
                lefData->versionNum);
            lefError(1626, lefData->outMsg);
            lefFree(lefData->outMsg);
            CHKERR();
         }
      }
    }
  }
#line 8339 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 3932 "lef.y" /* yacc.c:1646  */
    {
      lefData->ndLayerSpace = 1;
      if (lefCallbacks->NonDefaultCbk) lefData->lefrNonDefault.addSpacing((yyvsp[-1].dval));
    }
#line 8348 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 3937 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->NonDefaultCbk)
         lefData->lefrNonDefault.addWireExtension((yyvsp[-1].dval)); }
#line 8355 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 3940 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->ignoreVersion) {
         if (lefCallbacks->NonDefaultCbk)
            lefData->lefrNonDefault.addResistance((yyvsp[-1].dval));
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
            if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "RESISTANCE RPERSQ statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1627, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->versionNum > 5.5) {  // obsolete in 5.6
         if (lefCallbacks->NonDefaultCbk) // write warning only if cbk is set 
            if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings)
              lefWarning(2029, "RESISTANCE RPERSQ statement is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
      } else if (lefCallbacks->NonDefaultCbk)
         lefData->lefrNonDefault.addResistance((yyvsp[-1].dval));
    }
#line 8382 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 3964 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->ignoreVersion) {
         if (lefCallbacks->NonDefaultCbk)
            lefData->lefrNonDefault.addCapacitance((yyvsp[-1].dval));
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
            if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "CAPACITANCE CPERSQDIST statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1628, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
            }
         }
      } else if (lefData->versionNum > 5.5) { // obsolete in 5.6
         if (lefCallbacks->NonDefaultCbk) // write warning only if cbk is set 
            if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings)
              lefWarning(2030, "CAPACITANCE CPERSQDIST statement is obsolete in version 5.6. and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
      } else if (lefCallbacks->NonDefaultCbk)
         lefData->lefrNonDefault.addCapacitance((yyvsp[-1].dval));
    }
#line 8409 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 3987 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->ignoreVersion) {
         if (lefCallbacks->NonDefaultCbk)
            lefData->lefrNonDefault.addEdgeCap((yyvsp[-1].dval));
      } else if (lefData->versionNum < 5.4) {
         if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
            if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "EDGECAPACITANCE statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1629, lefData->outMsg);
               lefFree(lefData->outMsg);
              CHKERR();
            }
         }
      } else if (lefData->versionNum > 5.5) {  // obsolete in 5.6
         if (lefCallbacks->NonDefaultCbk) // write warning only if cbk is set 
            if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings)
              lefWarning(2031, "EDGECAPACITANCE statement is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
      } else if (lefCallbacks->NonDefaultCbk)
         lefData->lefrNonDefault.addEdgeCap((yyvsp[-1].dval));
    }
#line 8436 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4010 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {  // 5.6 syntax
         if (lefCallbacks->NonDefaultCbk) { // write error only if cbk is set 
            if (lefData->nonDefaultWarnings++ < lefSettings->NonDefaultWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                 "DIAGWIDTH statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
               lefError(1630, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR(); 
            }
         }
      } else {
         if (lefCallbacks->NonDefaultCbk)
            lefData->lefrNonDefault.addDiagWidth((yyvsp[-1].dval));
      }
    }
#line 8458 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4029 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->SiteCbk)
        CALLBACK(lefCallbacks->SiteCbk, lefrSiteCbkType, &lefData->lefrSite);
    }
#line 8467 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4034 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 8473 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4035 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->SiteCbk) lefData->lefrSite.setName((yyvsp[0].string));
      //strcpy(lefData->siteName, $3);
      lefData->siteName = strdup((yyvsp[0].string));
      lefData->hasSiteClass = 0;
      lefData->hasSiteSize = 0;
      lefData->hasSite = 1;
    }
#line 8486 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4044 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 8492 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4045 "lef.y" /* yacc.c:1646  */
    {
      if (strcmp(lefData->siteName, (yyvsp[0].string)) != 0) {
        if (lefCallbacks->SiteCbk) { // write error only if cbk is set 
           if (lefData->siteWarnings++ < lefSettings->SiteWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "END SITE name %s is different from the SITE name %s.\nCorrect the LEF file before rerunning it through the LEF parser.", (yyvsp[0].string), lefData->siteName);
              lefError(1631, lefData->outMsg);
              lefFree(lefData->outMsg);
              lefFree(lefData->siteName);
              CHKERR();
           } else
              lefFree(lefData->siteName);
        } else
           lefFree(lefData->siteName);
      } else {
        lefFree(lefData->siteName);
        if (lefCallbacks->SiteCbk) { // write error only if cbk is set 
          if (lefData->hasSiteClass == 0) {
             lefError(1632, "A CLASS statement is required in the SITE statement.");
             CHKERR();
          }
          if (lefData->hasSiteSize == 0) {
             lefError(1633, "A SIZE  statement is required in the SITE statement.");
             CHKERR();
          }
        }
      }
    }
#line 8526 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4082 "lef.y" /* yacc.c:1646  */
    {

      if (lefCallbacks->SiteCbk) lefData->lefrSite.setSize((yyvsp[-3].dval),(yyvsp[-1].dval));
      lefData->hasSiteSize = 1;
    }
#line 8536 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4088 "lef.y" /* yacc.c:1646  */
    { }
#line 8542 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4090 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->SiteCbk) lefData->lefrSite.setClass((yyvsp[0].string));
      lefData->hasSiteClass = 1;
    }
#line 8551 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4095 "lef.y" /* yacc.c:1646  */
    { }
#line 8557 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4098 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"PAD"; }
#line 8563 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4099 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"CORE"; }
#line 8569 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4100 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"VIRTUAL"; }
#line 8575 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4103 "lef.y" /* yacc.c:1646  */
    { }
#line 8581 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4112 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->SiteCbk) lefData->lefrSite.setXSymmetry(); }
#line 8587 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4114 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->SiteCbk) lefData->lefrSite.setYSymmetry(); }
#line 8593 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4116 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->SiteCbk) lefData->lefrSite.set90Symmetry(); }
#line 8599 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4118 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 8605 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4120 "lef.y" /* yacc.c:1646  */
    { }
#line 8611 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4127 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 8617 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4128 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->SiteCbk) lefData->lefrSite.addRowPattern((yyvsp[-2].string), (yyvsp[-1].integer)); }
#line 8623 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4132 "lef.y" /* yacc.c:1646  */
    { (yyval.pt).x = (yyvsp[-1].dval); (yyval.pt).y = (yyvsp[0].dval); }
#line 8629 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4134 "lef.y" /* yacc.c:1646  */
    { (yyval.pt).x = (yyvsp[-2].dval); (yyval.pt).y = (yyvsp[-1].dval); }
#line 8635 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4137 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->MacroCbk)
        CALLBACK(lefCallbacks->MacroCbk, lefrMacroCbkType, &lefData->lefrMacro);
      lefData->lefrDoSite = 0;
    }
#line 8645 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4144 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 8651 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4145 "lef.y" /* yacc.c:1646  */
    {
      lefData->siteDef = 0;
      lefData->symDef = 0;
      lefData->sizeDef = 0; 
      lefData->pinDef = 0; 
      lefData->obsDef = 0; 
      lefData->origDef = 0;
      lefData->lefrMacro.clear();      
      if (lefCallbacks->MacroBeginCbk || lefCallbacks->MacroCbk) {
        // some reader may not have MacroBeginCB, but has MacroCB set
        lefData->lefrMacro.setName((yyvsp[0].string));
        CALLBACK(lefCallbacks->MacroBeginCbk, lefrMacroBeginCbkType, (yyvsp[0].string));
      }
      //strcpy(lefData->macroName, $3);
      lefData->macroName = strdup((yyvsp[0].string));
    }
#line 8672 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4162 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 8678 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4163 "lef.y" /* yacc.c:1646  */
    {
      if (strcmp(lefData->macroName, (yyvsp[0].string)) != 0) {
        if (lefCallbacks->MacroEndCbk) { // write error only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "END MACRO name %s is different from the MACRO name %s.\nCorrect the LEF file before rerunning it through the LEF parser.", (yyvsp[0].string), lefData->macroName);
              lefError(1634, lefData->outMsg);
              lefFree(lefData->outMsg);
              lefFree(lefData->macroName);
              CHKERR();
           } else
              lefFree(lefData->macroName);
        } else
           lefFree(lefData->macroName);
      } else
        lefFree(lefData->macroName);
      if (lefCallbacks->MacroEndCbk)
        CALLBACK(lefCallbacks->MacroEndCbk, lefrMacroEndCbkType, (yyvsp[0].string));
    }
#line 8703 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4196 "lef.y" /* yacc.c:1646  */
    { }
#line 8709 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 4198 "lef.y" /* yacc.c:1646  */
    { }
#line 8715 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4200 "lef.y" /* yacc.c:1646  */
    { }
#line 8721 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4202 "lef.y" /* yacc.c:1646  */
    { }
#line 8727 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 4206 "lef.y" /* yacc.c:1646  */
    { }
#line 8733 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4208 "lef.y" /* yacc.c:1646  */
    { }
#line 8739 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 4210 "lef.y" /* yacc.c:1646  */
    { }
#line 8745 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 4212 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk) lefData->lefrMacro.setBuffer(); }
#line 8751 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 4214 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk) lefData->lefrMacro.setInverter(); }
#line 8757 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 4216 "lef.y" /* yacc.c:1646  */
    { }
#line 8763 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4218 "lef.y" /* yacc.c:1646  */
    { }
#line 8769 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 4220 "lef.y" /* yacc.c:1646  */
    { }
#line 8775 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 4222 "lef.y" /* yacc.c:1646  */
    { }
#line 8781 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 4223 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1000000; }
#line 8787 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 4224 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 0;
      }
#line 8794 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 4233 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->siteDef) { // SITE is defined before SYMMETRY 
          // pcr 283846 suppress warning 
          if (lefCallbacks->MacroCbk) // write warning only if cbk is set 
             if (lefData->macroWarnings++ < lefSettings->MacroWarnings)
               lefWarning(2032, "A SITE statement is defined before SYMMETRY statement.\nTo avoid this warning in the future, define SITE after SYMMETRY");
      }
      lefData->symDef = 1;
    }
#line 8808 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 4250 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk) lefData->lefrMacro.setXSymmetry(); }
#line 8814 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 4252 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk) lefData->lefrMacro.setYSymmetry(); }
#line 8820 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 4254 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk) lefData->lefrMacro.set90Symmetry(); }
#line 8826 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 4258 "lef.y" /* yacc.c:1646  */
    {
      char temp[32];
      sprintf(temp, "%.11g", (yyvsp[0].dval));
      if (lefCallbacks->MacroCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrMacroProp.propType((yyvsp[-1].string));
         lefData->lefrMacro.setNumProperty((yyvsp[-1].string), (yyvsp[0].dval), temp,  propTp);
      }
    }
#line 8840 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 4268 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->MacroCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrMacroProp.propType((yyvsp[-1].string));
         lefData->lefrMacro.setProperty((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 8852 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 4276 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->MacroCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrMacroProp.propType((yyvsp[-1].string));
         lefData->lefrMacro.setProperty((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 8864 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 4285 "lef.y" /* yacc.c:1646  */
    {
       if (lefCallbacks->MacroCbk) lefData->lefrMacro.setClass((yyvsp[-1].string));
       if (lefCallbacks->MacroClassTypeCbk)
          CALLBACK(lefCallbacks->MacroClassTypeCbk, lefrMacroClassTypeCbkType, (yyvsp[-1].string));
    }
#line 8874 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 4292 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"COVER"; }
#line 8880 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 4294 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"COVER BUMP";
      if (lefData->versionNum < 5.5) {
        if (lefCallbacks->MacroCbk) { // write error only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              if (lefSettings->RelaxMode)
                 lefWarning(2033, "The statement COVER BUMP is a LEF verion 5.5 syntax.\nYour LEF file is version 5.4 or earlier which is incorrect but will be allowed\nbecause this application does not enforce strict version checking.\nOther tools that enforce strict checking will have a syntax error when reading this file.\nYou can change the VERSION statement in this LEF file to 5.5 or higher to stop this warning.");
              else {
                 lefData->outMsg = (char*)lefMalloc(10000);
                 sprintf (lefData->outMsg,
                    "COVER BUMP statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
                 lefError(1635, lefData->outMsg);
                 lefFree(lefData->outMsg);
                 CHKERR();
              }
           }
        }
      }
    }
#line 8903 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 4312 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"RING"; }
#line 8909 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 4313 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"BLOCK"; }
#line 8915 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 4315 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"BLOCK BLACKBOX";
      if (lefData->versionNum < 5.5) {
        if (lefCallbacks->MacroCbk) { // write error only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
             if (lefSettings->RelaxMode)
                lefWarning(2034, "The statement BLOCK BLACKBOX is a LEF verion 5.5 syntax.\nYour LEF file is version 5.4 or earlier which is incorrect but will be allowed\nbecause this application does not enforce strict version checking.\nOther tools that enforce strict checking will have a syntax error when reading this file.\nYou can change the VERSION statement in this LEF file to 5.5 or higher to stop this warning.");
              else {
                 lefData->outMsg = (char*)lefMalloc(10000);
                 sprintf (lefData->outMsg,
                    "BLOCK BLACKBOX statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
                 lefError(1636, lefData->outMsg);
                 lefFree(lefData->outMsg);
                 CHKERR();
              }
           }
        }
      }
    }
#line 8938 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 4334 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->ignoreVersion) {
        (yyval.string) = (char*)"BLOCK SOFT";
      } else if (lefData->versionNum < 5.6) {
        if (lefCallbacks->MacroCbk) { // write error only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "BLOCK SOFT statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1637, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      else
        (yyval.string) = (char*)"BLOCK SOFT";
    }
#line 8961 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 4352 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"NONE"; }
#line 8967 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 4354 "lef.y" /* yacc.c:1646  */
    {
        if (lefData->versionNum < 5.7) {
          lefData->outMsg = (char*)lefMalloc(10000);
          sprintf(lefData->outMsg,
            "BUMP is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
          lefError(1698, lefData->outMsg);
          lefFree(lefData->outMsg);
          CHKERR();
      } else
        (yyval.string) = (char*)"BUMP";
      }
#line 8983 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 4365 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"PAD"; }
#line 8989 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 4366 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"VIRTUAL"; }
#line 8995 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 4368 "lef.y" /* yacc.c:1646  */
    {  sprintf(lefData->temp_name, "PAD %s", (yyvsp[0].string));
        (yyval.string) = lefData->temp_name; 
        if (lefData->versionNum < 5.5) {
           if (strcmp("AREAIO", (yyvsp[0].string)) != 0) {
             sprintf(lefData->temp_name, "PAD %s", (yyvsp[0].string));
             (yyval.string) = lefData->temp_name; 
           } else if (lefCallbacks->MacroCbk) { 
             if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
               if (lefSettings->RelaxMode)
                  lefWarning(2035, "The statement PAD AREAIO is a LEF verion 5.5 syntax.\nYour LEF file is version 5.4 or earlier which is incorrect but will be allowed\nbecause this application does not enforce strict version checking.\nOther tools that enforce strict checking will have a syntax error when reading this file.\nYou can change the VERSION statement in this LEF file to 5.5 or higher to stop this warning.");
               else {
                  lefData->outMsg = (char*)lefMalloc(10000);
                  sprintf (lefData->outMsg,
                     "PAD AREAIO statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
                  lefError(1638, lefData->outMsg);
                  lefFree(lefData->outMsg);
                  CHKERR();
               }
            }
          }
        }
      }
#line 9022 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 4390 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"CORE"; }
#line 9028 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 4392 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"CORNER";
      // This token is NOT in the spec but has shown up in 
      // some lef files.  This exception came from LEFOUT
      // in 'frameworks'
      }
#line 9038 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 4398 "lef.y" /* yacc.c:1646  */
    {sprintf(lefData->temp_name, "CORE %s", (yyvsp[0].string));
      (yyval.string) = lefData->temp_name;}
#line 9045 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 4401 "lef.y" /* yacc.c:1646  */
    {sprintf(lefData->temp_name, "ENDCAP %s", (yyvsp[0].string));
      (yyval.string) = lefData->temp_name;}
#line 9052 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 4405 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"INPUT";}
#line 9058 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 4406 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"OUTPUT";}
#line 9064 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 4407 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"INOUT";}
#line 9070 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 4408 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"POWER";}
#line 9076 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 4409 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"SPACER";}
#line 9082 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 4410 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"AREAIO";}
#line 9088 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 4413 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"FEEDTHRU";}
#line 9094 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 4414 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"TIEHIGH";}
#line 9100 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 4415 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"TIELOW";}
#line 9106 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 4417 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->ignoreVersion) {
        (yyval.string) = (char*)"SPACER";
      } else if (lefData->versionNum < 5.4) {
        if (lefCallbacks->MacroCbk) { // write error only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "SPACER statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1639, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      else
        (yyval.string) = (char*)"SPACER";
    }
#line 9129 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 4436 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->ignoreVersion) {
        (yyval.string) = (char*)"ANTENNACELL";
      } else if (lefData->versionNum < 5.4) {
        if (lefCallbacks->MacroCbk) { // write error only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNACELL statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1640, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      else
        (yyval.string) = (char*)"ANTENNACELL";
    }
#line 9152 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 4455 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->ignoreVersion) {
        (yyval.string) = (char*)"WELLTAP";
      } else if (lefData->versionNum < 5.6) {
        if (lefCallbacks->MacroCbk) { // write error only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "WELLTAP statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1641, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      else
        (yyval.string) = (char*)"WELLTAP";
    }
#line 9175 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 4475 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"PRE";}
#line 9181 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 4476 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"POST";}
#line 9187 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 4477 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"TOPLEFT";}
#line 9193 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 4478 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"TOPRIGHT";}
#line 9199 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 4479 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"BOTTOMLEFT";}
#line 9205 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 4480 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"BOTTOMRIGHT";}
#line 9211 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 4483 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk) lefData->lefrMacro.setGenerator((yyvsp[-1].string)); }
#line 9217 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 4486 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk) lefData->lefrMacro.setGenerate((yyvsp[-2].string), (yyvsp[-1].string)); }
#line 9223 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 4490 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->MacroCbk) lefData->lefrMacro.setSource("USER");
      } else
        if (lefCallbacks->MacroCbk) // write warning only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings)
             lefWarning(2036, "SOURCE statement is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 9236 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 4499 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->MacroCbk) lefData->lefrMacro.setSource("GENERATE");
      } else
        if (lefCallbacks->MacroCbk) // write warning only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings)
             lefWarning(2037, "SOURCE statement is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 9249 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 4508 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->MacroCbk) lefData->lefrMacro.setSource("BLOCK");
      } else
        if (lefCallbacks->MacroCbk) // write warning only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings)
             lefWarning(2037, "SOURCE statement is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 9262 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 4518 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->MacroCbk) lefData->lefrMacro.setPower((yyvsp[-1].dval));
      } else
        if (lefCallbacks->MacroCbk) // write warning only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings)
             lefWarning(2038, "MACRO POWER statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9275 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 4528 "lef.y" /* yacc.c:1646  */
    { 
       if (lefData->origDef) { // Has multiple ORIGIN defined in a macro, stop parsing
          if (lefCallbacks->MacroCbk) { // write error only if cbk is set 
             if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
                lefError(1642, "ORIGIN statement has defined more than once in a MACRO statement.\nOnly one ORIGIN statement can be defined in a Macro.\nParser will stop processing.");
               CHKERR();
             }
          }
       }
       lefData->origDef = 1;
       if (lefData->siteDef) { // SITE is defined before ORIGIN 
          // pcr 283846 suppress warning 
          if (lefCallbacks->MacroCbk) // write warning only if cbk is set 
             if (lefData->macroWarnings++ < lefSettings->MacroWarnings)
               lefWarning(2039, "A SITE statement is defined before ORIGIN statement.\nTo avoid this warning in the future, define SITE after ORIGIN");
       }
       if (lefData->pinDef) { // PIN is defined before ORIGIN 
          // pcr 283846 suppress warning 
          if (lefCallbacks->MacroCbk) // write warning only if cbk is set 
             if (lefData->macroWarnings++ < lefSettings->MacroWarnings)
               lefWarning(2040, "A PIN statement is defined before ORIGIN statement.\nTo avoid this warning in the future, define PIN after ORIGIN");
       }
       if (lefData->obsDef) { // OBS is defined before ORIGIN 
          // pcr 283846 suppress warning 
          if (lefCallbacks->MacroCbk) // write warning only if cbk is set 
             if (lefData->macroWarnings++ < lefSettings->MacroWarnings)
               lefWarning(2041, "A OBS statement is defined before ORIGIN statement.\nTo avoid this warning in the future, define OBS after ORIGIN");
       }
      
       // Workaround for pcr 640902 
       if (lefCallbacks->MacroCbk) lefData->lefrMacro.setOrigin((yyvsp[-1].pt).x, (yyvsp[-1].pt).y);
       if (lefCallbacks->MacroOriginCbk) {
          lefData->macroNum.x = (yyvsp[-1].pt).x; 
          lefData->macroNum.y = (yyvsp[-1].pt).y; 
          CALLBACK(lefCallbacks->MacroOriginCbk, lefrMacroOriginCbkType, lefData->macroNum);
       }
    }
#line 9317 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 4568 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk)
      lefData->lefrMacro.addForeign((yyvsp[-1].string), 0, 0.0, 0.0, -1);
    }
#line 9325 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 4572 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk)
      lefData->lefrMacro.addForeign((yyvsp[-2].string), 1, (yyvsp[-1].pt).x, (yyvsp[-1].pt).y, -1);
    }
#line 9333 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 4576 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk)
      lefData->lefrMacro.addForeign((yyvsp[-3].string), 1, (yyvsp[-2].pt).x, (yyvsp[-2].pt).y, (yyvsp[-1].integer));
    }
#line 9341 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 4580 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk)
      lefData->lefrMacro.addForeign((yyvsp[-2].string), 0, 0.0, 0.0, (yyvsp[-1].integer));
    }
#line 9349 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 4586 "lef.y" /* yacc.c:1646  */
    {   
       if (lefCallbacks->MacroCbk && lefData->versionNum >= 5.8) {
          lefData->lefrMacro.setFixedMask(1);
       }
       if (lefCallbacks->MacroFixedMaskCbk) {
          CALLBACK(lefCallbacks->MacroFixedMaskCbk, lefrMacroFixedMaskCbkType, 1);
       }        
    }
#line 9362 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 4595 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 9368 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 4596 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk) lefData->lefrMacro.setEEQ((yyvsp[-1].string)); }
#line 9374 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 4598 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 9380 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 4599 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->MacroCbk) lefData->lefrMacro.setLEQ((yyvsp[-1].string));
      } else
        if (lefCallbacks->MacroCbk) // write warning only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings)
             lefWarning(2042, "LEQ statement in MACRO is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 9393 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 4610 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->MacroCbk) {
        lefData->lefrMacro.setSiteName((yyvsp[-1].string));
      }
    }
#line 9403 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 4616 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->MacroCbk) {
        // also set site name in the variable siteName_ in lefiMacro 
        // this, if user wants to use method lefData->siteName will get the name also 
        lefData->lefrMacro.setSitePattern(lefData->lefrSitePatternPtr);
        lefData->lefrSitePatternPtr = 0;
      }
    }
#line 9416 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 4626 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1; lefData->lefNoNum = 1; lefData->siteDef = 1;
        if (lefCallbacks->MacroCbk) lefData->lefrDoSite = 1; }
#line 9423 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 4630 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 9429 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 4633 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->siteDef) { // SITE is defined before SIZE 
      }
      lefData->sizeDef = 1;
      if (lefCallbacks->MacroCbk) lefData->lefrMacro.setSize((yyvsp[-3].dval), (yyvsp[-1].dval));
      if (lefCallbacks->MacroSizeCbk) {
         lefData->macroNum.x = (yyvsp[-3].dval); 
         lefData->macroNum.y = (yyvsp[-1].dval); 
         CALLBACK(lefCallbacks->MacroSizeCbk, lefrMacroSizeCbkType, lefData->macroNum);
      }
    }
#line 9445 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 4649 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PinCbk)
        CALLBACK(lefCallbacks->PinCbk, lefrPinCbkType, &lefData->lefrPin);
      lefData->lefrPin.clear();
    }
#line 9455 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 4655 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; lefData->pinDef = 1;}
#line 9461 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 4656 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PinCbk) lefData->lefrPin.setName((yyvsp[0].string));
      //strcpy(lefData->pinName, $3);
      lefData->pinName = strdup((yyvsp[0].string));
    }
#line 9470 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 4661 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 9476 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 4662 "lef.y" /* yacc.c:1646  */
    {
      if (strcmp(lefData->pinName, (yyvsp[0].string)) != 0) {
        if (lefCallbacks->MacroCbk) { // write error only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "END PIN name %s is different from the PIN name %s.\nCorrect the LEF file before rerunning it through the LEF parser.", (yyvsp[0].string), lefData->pinName);
              lefError(1643, lefData->outMsg);
              lefFree(lefData->outMsg);
              lefFree(lefData->pinName);
              CHKERR();
           } else
              lefFree(lefData->pinName);
        } else
           lefFree(lefData->pinName);
      } else
        lefFree(lefData->pinName);
    }
#line 9499 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 4683 "lef.y" /* yacc.c:1646  */
    { }
#line 9505 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 4685 "lef.y" /* yacc.c:1646  */
    { }
#line 9511 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 4689 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.addForeign((yyvsp[-1].string), 0, 0.0, 0.0, -1);
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2043, "FOREIGN statement in MACRO PIN is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 9524 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 4698 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.addForeign((yyvsp[-2].string), 1, (yyvsp[-1].pt).x, (yyvsp[-1].pt).y, -1);
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2043, "FOREIGN statement in MACRO PIN is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 9537 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 4707 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.addForeign((yyvsp[-3].string), 1, (yyvsp[-2].pt).x, (yyvsp[-2].pt).y, (yyvsp[-1].integer));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2043, "FOREIGN statement in MACRO PIN is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 9550 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 4716 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.addForeign((yyvsp[-2].string), 0, 0.0, 0.0, -1);
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2043, "FOREIGN statement in MACRO PIN is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 9563 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 4725 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.addForeign((yyvsp[-3].string), 1, (yyvsp[-1].pt).x, (yyvsp[-1].pt).y, -1);
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2043, "FOREIGN statement in MACRO PIN is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 9576 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 4734 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.addForeign((yyvsp[-4].string), 1, (yyvsp[-2].pt).x, (yyvsp[-2].pt).y, (yyvsp[-1].integer));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2043, "FOREIGN statement in MACRO PIN is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 9589 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 4742 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 9595 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 4743 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setLEQ((yyvsp[-1].string));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2044, "LEQ statement in MACRO PIN is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
   }
#line 9608 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 4752 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setPower((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2045, "MACRO POWER statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9621 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 4761 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PinCbk) lefData->lefrPin.setDirection((yyvsp[0].string)); }
#line 9627 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 4763 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PinCbk) lefData->lefrPin.setUse((yyvsp[-1].string)); }
#line 9633 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 4765 "lef.y" /* yacc.c:1646  */
    { }
#line 9639 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 4767 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setLeakage((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2046, "MACRO LEAKAGE statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, r emove this statement from the LEF file with version 5.4 or later.");
    }
#line 9652 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 4776 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setRiseThresh((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2047, "MACRO RISETHRESH statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9665 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 4785 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setFallThresh((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2048, "MACRO FALLTHRESH statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9678 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 4794 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setRiseSatcur((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2049, "MACRO RISESATCUR statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9691 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 4803 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setFallSatcur((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2050, "MACRO FALLSATCUR statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9704 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 4812 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setVLO((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2051, "MACRO VLO statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9717 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 4821 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setVHI((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2052, "MACRO VHI statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9730 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 4830 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setTieoffr((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2053, "MACRO TIEOFFR statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9743 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 4839 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PinCbk) lefData->lefrPin.setShape((yyvsp[-1].string)); }
#line 9749 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 4840 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 9755 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 4841 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PinCbk) lefData->lefrPin.setMustjoin((yyvsp[-1].string)); }
#line 9761 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 4842 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1;}
#line 9767 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 4843 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setOutMargin((yyvsp[-2].dval), (yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2054, "MACRO OUTPUTNOISEMARGIN statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9780 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 4851 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1;}
#line 9786 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 4852 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setOutResistance((yyvsp[-2].dval), (yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2055, "MACRO OUTPUTRESISTANCE statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9799 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 4860 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1;}
#line 9805 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 4861 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setInMargin((yyvsp[-2].dval), (yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2056, "MACRO INPUTNOISEMARGIN statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9818 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 4870 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setCapacitance((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2057, "MACRO CAPACITANCE statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9831 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 4879 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PinCbk) lefData->lefrPin.setMaxdelay((yyvsp[-1].dval)); }
#line 9837 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 4881 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PinCbk) lefData->lefrPin.setMaxload((yyvsp[-1].dval)); }
#line 9843 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 4883 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setResistance((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2058, "MACRO RESISTANCE statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9856 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 4892 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setPulldownres((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2059, "MACRO PULLDOWNRES statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9869 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 4901 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setCurrentSource("ACTIVE");
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2060, "MACRO CURRENTSOURCE statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9882 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 4910 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setCurrentSource("RESISTIVE");
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2061, "MACRO CURRENTSOURCE statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9895 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 4919 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setRiseVoltage((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2062, "MACRO RISEVOLTAGETHRESHOLD statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9908 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 4928 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setFallVoltage((yyvsp[-1].dval));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2063, "MACRO FALLVOLTAGETHRESHOLD statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9921 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 4937 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) lefData->lefrPin.setTables((yyvsp[-2].string), (yyvsp[-1].string));
      } else
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2064, "MACRO IV_TABLES statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 9934 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 4946 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PinCbk) lefData->lefrPin.setTaperRule((yyvsp[-1].string)); }
#line 9940 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 4947 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1000000; }
#line 9946 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 4948 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 0;
    }
#line 9953 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 4951 "lef.y" /* yacc.c:1646  */
    {
      lefData->lefDumbMode = 0;
      lefData->hasGeoLayer = 0;
      if (lefCallbacks->PinCbk) {
        lefData->lefrPin.addPort(lefData->lefrGeometriesPtr);
        lefData->lefrGeometriesPtr = 0;
        lefData->lefrDoGeometries = 0;
      }
      if ((lefData->needGeometry) && (lefData->needGeometry != 2))  // if the lefData->last LAYER in PORT
        if (lefCallbacks->PinCbk) // write warning only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings)
             lefWarning(2065, "Either PATH, RECT or POLYGON statement is a required in MACRO/PIN/PORT.");
    }
#line 9971 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 4965 "lef.y" /* yacc.c:1646  */
    {
      // Since in start_macro_port it has call the Init method, here
      // we need to call the Destroy method.
      // Still add a null pointer to set the number of port
      if (lefCallbacks->PinCbk) {
        lefData->lefrPin.addPort(lefData->lefrGeometriesPtr);
        lefData->lefrGeometriesPtr = 0;
        lefData->lefrDoGeometries = 0;
      }
      lefData->hasGeoLayer = 0;
    }
#line 9987 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 4977 "lef.y" /* yacc.c:1646  */
    {  // a pre 5.4 syntax 
      lefData->use5_3 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum >= 5.4) {
        if (lefData->use5_4) {
           if (lefCallbacks->PinCbk) { // write error only if cbk is set 
             if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
                lefData->outMsg = (char*)lefMalloc(10000);
                sprintf (lefData->outMsg,
                   "ANTENNASIZE statement is a version 5.3 and earlier syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
                lefError(1644, lefData->outMsg);
                lefFree(lefData->outMsg);
                CHKERR();
             }
           }
        }
      }
      if (lefCallbacks->PinCbk) lefData->lefrPin.addAntennaSize((yyvsp[-2].dval), (yyvsp[-1].string));
    }
#line 10012 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 4998 "lef.y" /* yacc.c:1646  */
    {  // a pre 5.4 syntax 
      lefData->use5_3 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum >= 5.4) {
        if (lefData->use5_4) {
           if (lefCallbacks->PinCbk) { // write error only if cbk is set 
              if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
                 lefData->outMsg = (char*)lefMalloc(10000);
                 sprintf (lefData->outMsg,
                    "ANTENNAMETALAREA statement is a version 5.3 and earlier syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
                 lefError(1645, lefData->outMsg);
                 lefFree(lefData->outMsg);
                 CHKERR();
              }
           }
        }
      }
      if (lefCallbacks->PinCbk) lefData->lefrPin.addAntennaMetalArea((yyvsp[-2].dval), (yyvsp[-1].string));
    }
#line 10037 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 5019 "lef.y" /* yacc.c:1646  */
    { // a pre 5.4 syntax  
      lefData->use5_3 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum >= 5.4) {
        if (lefData->use5_4) {
           if (lefCallbacks->PinCbk) { // write error only if cbk is set 
              if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
                 lefData->outMsg = (char*)lefMalloc(10000);
                 sprintf (lefData->outMsg,
                    "ANTENNAMETALLENGTH statement is a version 5.3 and earlier syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
                 lefError(1646, lefData->outMsg);
                 lefFree(lefData->outMsg);
                 CHKERR();
              }
           }
        }
      }
      if (lefCallbacks->PinCbk) lefData->lefrPin.addAntennaMetalLength((yyvsp[-2].dval), (yyvsp[-1].string));
    }
#line 10062 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 5040 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PinCbk) lefData->lefrPin.setRiseSlewLimit((yyvsp[-1].dval)); }
#line 10068 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 5042 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PinCbk) lefData->lefrPin.setFallSlewLimit((yyvsp[-1].dval)); }
#line 10074 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 5044 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAPARTIALMETALAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1647, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else if (lefData->use5_3) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAPARTIALMETALAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1647, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      if (lefCallbacks->PinCbk) lefData->lefrPin.addAntennaPartialMetalArea((yyvsp[-2].dval), (yyvsp[-1].string));
    }
#line 10108 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5074 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAPARTIALMETALSIDEAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1648, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else if (lefData->use5_3) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAPARTIALMETALSIDEAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1648, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      if (lefCallbacks->PinCbk) lefData->lefrPin.addAntennaPartialMetalSideArea((yyvsp[-2].dval), (yyvsp[-1].string));
    }
#line 10142 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5104 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAPARTIALCUTAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1649, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else if (lefData->use5_3) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAPARTIALCUTAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1649, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      if (lefCallbacks->PinCbk) lefData->lefrPin.addAntennaPartialCutArea((yyvsp[-2].dval), (yyvsp[-1].string));
    }
#line 10176 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5134 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNADIFFAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1650, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else if (lefData->use5_3) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNADIFFAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1650, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      if (lefCallbacks->PinCbk) lefData->lefrPin.addAntennaDiffArea((yyvsp[-2].dval), (yyvsp[-1].string));
    }
#line 10210 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 5164 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAGATEAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1651, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else if (lefData->use5_3) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAGATEAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1651, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      if (lefCallbacks->PinCbk) lefData->lefrPin.addAntennaGateArea((yyvsp[-2].dval), (yyvsp[-1].string));
    }
#line 10244 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 5194 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAMAXAREACAR statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1652, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else if (lefData->use5_3) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAMAXAREACAR statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1652, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      if (lefCallbacks->PinCbk) lefData->lefrPin.addAntennaMaxAreaCar((yyvsp[-2].dval), (yyvsp[-1].string));
    }
#line 10278 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5224 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAMAXSIDEAREACAR statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1653, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else if (lefData->use5_3) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAMAXSIDEAREACAR statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1653, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      if (lefCallbacks->PinCbk) lefData->lefrPin.addAntennaMaxSideAreaCar((yyvsp[-2].dval), (yyvsp[-1].string));
    }
#line 10312 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5254 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum < 5.4) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAMAXCUTCAR statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1654, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else if (lefData->use5_3) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAMAXCUTCAR statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1654, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
      if (lefCallbacks->PinCbk) lefData->lefrPin.addAntennaMaxCutCar((yyvsp[-2].dval), (yyvsp[-1].string));
    }
#line 10346 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5284 "lef.y" /* yacc.c:1646  */
    { // 5.5 syntax 
      lefData->use5_4 = 1;
      if (lefData->ignoreVersion) {
        // do nothing 
      } else if (lefData->versionNum < 5.5) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAMODEL statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1655, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else if (lefData->use5_3) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ANTENNAMODEL statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1655, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      }
    }
#line 10379 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5313 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 2; lefData->lefNoNum = 2; }
#line 10385 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5314 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "NETEXPR statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1656, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else
        if (lefCallbacks->PinCbk) lefData->lefrPin.setNetExpr((yyvsp[-1].string));
    }
#line 10405 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5329 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 10411 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5330 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "SUPPLYSENSITIVITY statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1657, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else
        if (lefCallbacks->PinCbk) lefData->lefrPin.setSupplySensitivity((yyvsp[-1].string));
    }
#line 10431 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 5345 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 10437 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5346 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->PinCbk) { // write error only if cbk is set 
           if (lefData->pinWarnings++ < lefSettings->PinWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "GROUNDSENSITIVITY statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1658, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } else
        if (lefCallbacks->PinCbk) lefData->lefrPin.setGroundSensitivity((yyvsp[-1].string));
    }
#line 10457 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5364 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->PinCbk)
       lefData->lefrPin.addAntennaModel(1);
    }
#line 10466 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 5369 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->PinCbk)
       lefData->lefrPin.addAntennaModel(2);
    }
#line 10475 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 5374 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->PinCbk)
       lefData->lefrPin.addAntennaModel(3);
    }
#line 10484 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 5379 "lef.y" /* yacc.c:1646  */
    {
    if (lefCallbacks->PinCbk)
       lefData->lefrPin.addAntennaModel(4);
    }
#line 10493 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5391 "lef.y" /* yacc.c:1646  */
    { 
      char temp[32];
      sprintf(temp, "%.11g", (yyvsp[0].dval));
      if (lefCallbacks->PinCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrPinProp.propType((yyvsp[-1].string));
         lefData->lefrPin.setNumProperty((yyvsp[-1].string), (yyvsp[0].dval), temp, propTp);
      }
    }
#line 10507 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5401 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->PinCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrPinProp.propType((yyvsp[-1].string));
         lefData->lefrPin.setProperty((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 10519 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5409 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->PinCbk) {
         char propTp;
         propTp = lefSettings->lefProps.lefrPinProp.propType((yyvsp[-1].string));
         lefData->lefrPin.setProperty((yyvsp[-1].string), (yyvsp[0].string), propTp);
      }
    }
#line 10531 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5418 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"INPUT";}
#line 10537 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5419 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"OUTPUT";}
#line 10543 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 5420 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"OUTPUT TRISTATE";}
#line 10549 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 5421 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"INOUT";}
#line 10555 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 5422 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"FEEDTHRU";}
#line 10561 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 5425 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->PinCbk) {
        lefData->lefrDoGeometries = 1;
        lefData->hasPRP = 0;
        lefData->lefrGeometriesPtr = (lefiGeometries*)lefMalloc( sizeof(lefiGeometries));
        lefData->lefrGeometriesPtr->Init();
      }
      lefData->needGeometry = 0;  // don't need rect/path/poly define yet
      lefData->hasGeoLayer = 0;   // make sure LAYER is set before geometry
    }
#line 10576 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 5438 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoGeometries)
        lefData->lefrGeometriesPtr->addClass((yyvsp[-1].string)); }
#line 10583 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5442 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"SIGNAL";}
#line 10589 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5443 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"ANALOG";}
#line 10595 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5444 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"POWER";}
#line 10601 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5445 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"GROUND";}
#line 10607 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5446 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"CLOCK";}
#line 10613 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5447 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"DATA";}
#line 10619 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 5450 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"INPUT";}
#line 10625 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 5451 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"OUTPUT";}
#line 10631 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 5452 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"START";}
#line 10637 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5453 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"STOP";}
#line 10643 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5456 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)""; }
#line 10649 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 5457 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"ABUTMENT";}
#line 10655 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5458 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"RING";}
#line 10661 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 5459 "lef.y" /* yacc.c:1646  */
    {(yyval.string) = (char*)"FEEDTHRU";}
#line 10667 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 5464 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 10673 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 5465 "lef.y" /* yacc.c:1646  */
    {
      if ((lefData->needGeometry) && (lefData->needGeometry != 2)) // 1 LAYER follow after another
        if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
          // geometries is called by MACRO/OBS & MACRO/PIN/PORT 
          if (lefData->obsDef)
             lefWarning(2076, "Either PATH, RECT or POLYGON statement is a required in MACRO/OBS.");
          else
             lefWarning(2065, "Either PATH, RECT or POLYGON statement is a required in MACRO/PIN/PORT.");
        }
      if (lefData->lefrDoGeometries)
        lefData->lefrGeometriesPtr->addLayer((yyvsp[0].string));
      lefData->needGeometry = 1;    // within LAYER it requires either path, rect, poly
      lefData->hasGeoLayer = 1;
    }
#line 10692 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5482 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->lefrDoGeometries) {
        if (lefData->hasGeoLayer == 0) {   // LAYER statement is missing 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefError(1701, "A LAYER statement is missing in Geometry.\nLAYER is a required statement before any geometry can be defined.");
              CHKERR();
           }
        } else
           lefData->lefrGeometriesPtr->addWidth((yyvsp[-1].dval)); 
      } 
    }
#line 10708 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 5494 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoGeometries) {
        if (lefData->hasGeoLayer == 0) {   // LAYER statement is missing 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefError(1701, "A LAYER statement is missing in Geometry.\nLAYER is a required statement before any geometry can be defined.");
              CHKERR();
           }
        } else {
           if (lefData->versionNum < 5.8 && (int)(yyvsp[-3].integer) > 0) {
              if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
                 lefError(2083, "Color mask information can only be defined with version 5.8.");
                 CHKERR(); 
              }           
           } else {
                lefData->lefrGeometriesPtr->addPath((int)(yyvsp[-3].integer));
           }
        }
      }
      lefData->hasPRP = 1;
      lefData->needGeometry = 2;
    }
#line 10733 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 704:
#line 5515 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoGeometries) {
        if (lefData->hasGeoLayer == 0) {   // LAYER statement is missing 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefError(1701, "A LAYER statement is missing in Geometry.\nLAYER is a required statement before any geometry can be defined.");
              CHKERR();
           }
        } else {
           if (lefData->versionNum < 5.8 && (int)(yyvsp[-5].integer) > 0) {
              if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
                 lefError(2083, "Color mask information can only be defined with version 5.8.");
                 CHKERR(); 
              }           
           } else {
              lefData->lefrGeometriesPtr->addPathIter((int)(yyvsp[-5].integer));
            }
         }
      } 
      lefData->hasPRP = 1;
      lefData->needGeometry = 2;
    }
#line 10758 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5536 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoGeometries) {
        if (lefData->hasGeoLayer == 0) {   // LAYER statement is missing 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefError(1701, "A LAYER statement is missing in Geometry.\nLAYER is a required statement before any geometry can be defined.");
              CHKERR();
           }
        } else {
           if (lefData->versionNum < 5.8 && (int)(yyvsp[-3].integer) > 0) {
              if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
                 lefError(2083, "Color mask information can only be defined with version 5.8.");
                 CHKERR(); 
              }           
           } else {
              lefData->lefrGeometriesPtr->addRect((int)(yyvsp[-3].integer), (yyvsp[-2].pt).x, (yyvsp[-2].pt).y, (yyvsp[-1].pt).x, (yyvsp[-1].pt).y);
           }
        }
      }
      lefData->needGeometry = 2;
    }
#line 10782 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 5556 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoGeometries) {
        if (lefData->hasGeoLayer == 0) {   // LAYER statement is missing 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefError(1701, "A LAYER statement is missing in Geometry.\nLAYER is a required statement before any geometry can be defined.");
              CHKERR();
           }
        } else {
           if (lefData->versionNum < 5.8 && (int)(yyvsp[-5].integer) > 0) {
              if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
                 lefError(2083, "Color mask information can only be defined with version 5.8.");
                 CHKERR(); 
              }           
           } else {
              lefData->lefrGeometriesPtr->addRectIter((int)(yyvsp[-5].integer), (yyvsp[-3].pt).x, (yyvsp[-3].pt).y, (yyvsp[-2].pt).x, (yyvsp[-2].pt).y);
           }
        }
      }
      lefData->needGeometry = 2;
    }
#line 10806 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 707:
#line 5576 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->lefrDoGeometries) {
        if (lefData->hasGeoLayer == 0) {   // LAYER statement is missing 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefError(1701, "A LAYER statement is missing in Geometry.\nLAYER is a required statement before any geometry can be defined.");
              CHKERR();
           }
        } else {
           if (lefData->versionNum < 5.8 && (int)(yyvsp[-5].integer) > 0) {
              if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
                 lefError(2083, "Color mask information can only be defined with version 5.8.");
                 CHKERR(); 
              }           
           } else {
              lefData->lefrGeometriesPtr->addPolygon((int)(yyvsp[-5].integer));
            }
           }
      }
      lefData->hasPRP = 1;
      lefData->needGeometry = 2;
    }
#line 10832 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 708:
#line 5598 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoGeometries) {
        if (lefData->hasGeoLayer == 0) {   // LAYER statement is missing 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefError(1701, "A LAYER statement is missing in Geometry.\nLAYER is a required statement before any geometry can be defined.");
              CHKERR();
           }
        } else {
           if (lefData->versionNum < 5.8 && (int)(yyvsp[-7].integer) > 0) {
              if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
                 lefError(2083, "Color mask information can only be defined with version 5.8.");
                 CHKERR(); 
              }           
           } else {
              lefData->lefrGeometriesPtr->addPolygonIter((int)(yyvsp[-7].integer));
           }
         }
      }
      lefData->hasPRP = 1;
      lefData->needGeometry = 2;
    }
#line 10857 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 5619 "lef.y" /* yacc.c:1646  */
    { }
#line 10863 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 713:
#line 5626 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
        lefData->outMsg = (char*)lefMalloc(10000);
        sprintf(lefData->outMsg,
          "EXCEPTPGNET is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
        lefError(1699, lefData->outMsg);
        lefFree(lefData->outMsg);
        CHKERR();
      } else {
       if (lefData->lefrDoGeometries)
        lefData->lefrGeometriesPtr->addLayerExceptPgNet();
      }
    }
#line 10881 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 5642 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoGeometries) {
        if (zeroOrGt((yyvsp[0].dval)))
           lefData->lefrGeometriesPtr->addLayerMinSpacing((yyvsp[0].dval));
        else {
           lefData->outMsg = (char*)lefMalloc(10000);
           sprintf (lefData->outMsg,
              "THE SPACING statement has the value %g in MACRO OBS.\nValue has to be 0 or greater.", (yyvsp[0].dval));
           lefError(1659, lefData->outMsg);
           lefFree(lefData->outMsg);
           CHKERR();
        }
      }
    }
#line 10899 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 716:
#line 5656 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoGeometries) {
        if (zeroOrGt((yyvsp[0].dval)))
           lefData->lefrGeometriesPtr->addLayerRuleWidth((yyvsp[0].dval));
        else {
           lefData->outMsg = (char*)lefMalloc(10000);
           sprintf (lefData->outMsg,
              "THE DESIGNRULEWIDTH statement has the value %g in MACRO OBS.\nValue has to be 0 or greater.", (yyvsp[0].dval));
           lefError(1660, lefData->outMsg);
           lefFree(lefData->outMsg);
           CHKERR();
        }
      }
    }
#line 10917 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 717:
#line 5671 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoGeometries)
        lefData->lefrGeometriesPtr->startList((yyvsp[0].pt).x, (yyvsp[0].pt).y); }
#line 10924 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 5675 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoGeometries)
        lefData->lefrGeometriesPtr->addToList((yyvsp[0].pt).x, (yyvsp[0].pt).y); }
#line 10931 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 5684 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1;}
#line 10937 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 5685 "lef.y" /* yacc.c:1646  */
    { 
        if (lefData->lefrDoGeometries){
            if (lefData->versionNum < 5.8 && (int)(yyvsp[-4].integer) > 0) {
              if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
                 lefError(2083, "Color mask information can only be defined with version 5.8.");
                 CHKERR(); 
              }           
            } else {
                lefData->lefrGeometriesPtr->addVia((int)(yyvsp[-4].integer), (yyvsp[-3].pt).x, (yyvsp[-3].pt).y, (yyvsp[-1].string));
            }
        }
    }
#line 10954 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 5697 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 10960 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 5699 "lef.y" /* yacc.c:1646  */
    { 
        if (lefData->lefrDoGeometries) {
            if (lefData->versionNum < 5.8 && (int)(yyvsp[-5].integer) > 0) {
              if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
                 lefError(2083, "Color mask information can only be defined with version 5.8.");
                 CHKERR(); 
              }           
            } else {
              lefData->lefrGeometriesPtr->addViaIter((int)(yyvsp[-5].integer), (yyvsp[-4].pt).x, (yyvsp[-4].pt).y, (yyvsp[-2].string)); 
            }
        }
    }
#line 10977 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 5713 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoGeometries)
         lefData->lefrGeometriesPtr->addStepPattern((yyvsp[-5].dval), (yyvsp[-3].dval), (yyvsp[-1].dval), (yyvsp[0].dval)); }
#line 10984 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 5718 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->lefrDoSite) {
        lefData->lefrSitePatternPtr = (lefiSitePattern*)lefMalloc(
                                   sizeof(lefiSitePattern));
        lefData->lefrSitePatternPtr->Init();
        lefData->lefrSitePatternPtr->set((yyvsp[-10].string), (yyvsp[-9].dval), (yyvsp[-8].dval), (yyvsp[-7].integer), (yyvsp[-5].dval), (yyvsp[-3].dval),
          (yyvsp[-1].dval), (yyvsp[0].dval));
        }
    }
#line 10998 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 5728 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->lefrDoSite) {
        lefData->lefrSitePatternPtr = (lefiSitePattern*)lefMalloc(
                                   sizeof(lefiSitePattern));
        lefData->lefrSitePatternPtr->Init();
        lefData->lefrSitePatternPtr->set((yyvsp[-3].string), (yyvsp[-2].dval), (yyvsp[-1].dval), (yyvsp[0].integer), -1, -1,
          -1, -1);
        }
    }
#line 11012 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 5740 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->lefrDoTrack) {
        lefData->lefrTrackPatternPtr = (lefiTrackPattern*)lefMalloc(
                                sizeof(lefiTrackPattern));
        lefData->lefrTrackPatternPtr->Init();
        lefData->lefrTrackPatternPtr->set("X", (yyvsp[-4].dval), (int)(yyvsp[-2].dval), (yyvsp[0].dval));
      }    
    }
#line 11025 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 729:
#line 5748 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1000000000;}
#line 11031 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 730:
#line 5749 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 0;}
#line 11037 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 731:
#line 5751 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->lefrDoTrack) {
        lefData->lefrTrackPatternPtr = (lefiTrackPattern*)lefMalloc(
                                    sizeof(lefiTrackPattern));
        lefData->lefrTrackPatternPtr->Init();
        lefData->lefrTrackPatternPtr->set("Y", (yyvsp[-4].dval), (int)(yyvsp[-2].dval), (yyvsp[0].dval));
      }    
    }
#line 11050 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 732:
#line 5759 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1000000000;}
#line 11056 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 733:
#line 5760 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 0;}
#line 11062 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 734:
#line 5762 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->lefrDoTrack) {
        lefData->lefrTrackPatternPtr = (lefiTrackPattern*)lefMalloc(
                                    sizeof(lefiTrackPattern));
        lefData->lefrTrackPatternPtr->Init();
        lefData->lefrTrackPatternPtr->set("X", (yyvsp[-4].dval), (int)(yyvsp[-2].dval), (yyvsp[0].dval));
      }    
    }
#line 11075 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 735:
#line 5771 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->lefrDoTrack) {
        lefData->lefrTrackPatternPtr = (lefiTrackPattern*)lefMalloc(
                                    sizeof(lefiTrackPattern));
        lefData->lefrTrackPatternPtr->Init();
        lefData->lefrTrackPatternPtr->set("Y", (yyvsp[-4].dval), (int)(yyvsp[-2].dval), (yyvsp[0].dval));
      }    
    }
#line 11088 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 738:
#line 5786 "lef.y" /* yacc.c:1646  */
    { if (lefData->lefrDoTrack) lefData->lefrTrackPatternPtr->addLayer((yyvsp[0].string)); }
#line 11094 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 739:
#line 5789 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->lefrDoGcell) {
        lefData->lefrGcellPatternPtr = (lefiGcellPattern*)lefMalloc(
                                    sizeof(lefiGcellPattern));
        lefData->lefrGcellPatternPtr->Init();
        lefData->lefrGcellPatternPtr->set("X", (yyvsp[-4].dval), (int)(yyvsp[-2].dval), (yyvsp[0].dval));
      }    
    }
#line 11107 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 5798 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->lefrDoGcell) {
        lefData->lefrGcellPatternPtr = (lefiGcellPattern*)lefMalloc(
                                    sizeof(lefiGcellPattern));
        lefData->lefrGcellPatternPtr->Init();
        lefData->lefrGcellPatternPtr->set("Y", (yyvsp[-4].dval), (int)(yyvsp[-2].dval), (yyvsp[0].dval));
      }    
    }
#line 11120 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 5808 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->ObstructionCbk) {
        lefData->lefrObstruction.setGeometries(lefData->lefrGeometriesPtr);
        lefData->lefrGeometriesPtr = 0;
        lefData->lefrDoGeometries = 0;
        CALLBACK(lefCallbacks->ObstructionCbk, lefrObstructionCbkType, &lefData->lefrObstruction);
      }
      lefData->lefDumbMode = 0;
      lefData->hasGeoLayer = 0;       // reset 
    }
#line 11135 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 5819 "lef.y" /* yacc.c:1646  */
    {
       // The pointer has malloced in start, need to free manually 
       if (lefData->lefrGeometriesPtr) {
          lefData->lefrGeometriesPtr->Destroy();
          lefFree(lefData->lefrGeometriesPtr);
          lefData->lefrGeometriesPtr = 0;
          lefData->lefrDoGeometries = 0;
       }
       lefData->hasGeoLayer = 0;
    }
#line 11150 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 5831 "lef.y" /* yacc.c:1646  */
    {
      lefData->obsDef = 1;
      if (lefCallbacks->ObstructionCbk) {
        lefData->lefrDoGeometries = 1;
        lefData->lefrGeometriesPtr = (lefiGeometries*)lefMalloc(
            sizeof(lefiGeometries));
        lefData->lefrGeometriesPtr->Init();
        }
      lefData->hasGeoLayer = 0;
    }
#line 11165 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 5843 "lef.y" /* yacc.c:1646  */
    { 
      if (lefData->versionNum < 5.6) {
        if (lefCallbacks->DensityCbk) { // write error only if cbk is set 
           if (lefData->macroWarnings++ < lefSettings->MacroWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "DENSITY statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1661, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
      } 
      if (lefCallbacks->DensityCbk) {
        CALLBACK(lefCallbacks->DensityCbk, lefrDensityCbkType, &lefData->lefrDensity);
        lefData->lefrDensity.clear();
      }
      lefData->lefDumbMode = 0;
    }
#line 11189 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 5867 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 11195 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 5868 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->DensityCbk)
        lefData->lefrDensity.addLayer((yyvsp[-1].string));
    }
#line 11204 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 5879 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->DensityCbk)
        lefData->lefrDensity.addRect((yyvsp[-3].pt).x, (yyvsp[-3].pt).y, (yyvsp[-2].pt).x, (yyvsp[-2].pt).y, (yyvsp[-1].dval)); 
    }
#line 11213 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 753:
#line 5884 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 11219 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 754:
#line 5885 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->MacroCbk) lefData->lefrMacro.setClockType((yyvsp[-1].string)); }
#line 11225 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 755:
#line 5888 "lef.y" /* yacc.c:1646  */
    { }
#line 11231 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 756:
#line 5891 "lef.y" /* yacc.c:1646  */
    { }
#line 11237 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 757:
#line 5894 "lef.y" /* yacc.c:1646  */
    {
    if (lefData->versionNum < 5.4) {
      if (lefCallbacks->TimingCbk && lefData->lefrTiming.hasData())
        CALLBACK(lefCallbacks->TimingCbk, lefrTimingCbkType, &lefData->lefrTiming);
      lefData->lefrTiming.clear();
    } else {
      if (lefCallbacks->TimingCbk) // write warning only if cbk is set 
        if (lefData->timingWarnings++ < lefSettings->TimingWarnings)
          lefWarning(2066, "MACRO TIMING statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
      lefData->lefrTiming.clear();
    }
  }
#line 11254 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 760:
#line 5914 "lef.y" /* yacc.c:1646  */
    {
    if (lefData->versionNum < 5.4) {
      if (lefCallbacks->TimingCbk && lefData->lefrTiming.hasData())
        CALLBACK(lefCallbacks->TimingCbk, lefrTimingCbkType, &lefData->lefrTiming);
    }
    lefData->lefDumbMode = 1000000000;
    lefData->lefrTiming.clear();
    }
#line 11267 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 761:
#line 5923 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 0;}
#line 11273 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 762:
#line 5924 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1000000000;}
#line 11279 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 763:
#line 5925 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 0;}
#line 11285 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 764:
#line 5927 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addRiseFall((yyvsp[-3].string),(yyvsp[-1].dval),(yyvsp[0].dval)); }
#line 11291 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 765:
#line 5929 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addRiseFallVariable((yyvsp[-2].dval),(yyvsp[-1].dval)); }
#line 11297 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 766:
#line 5932 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) {
        if ((yyvsp[-7].string)[0] == 'D' || (yyvsp[-7].string)[0] == 'd') // delay 
          lefData->lefrTiming.addDelay((yyvsp[-8].string), (yyvsp[-5].string), (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
        else
          lefData->lefrTiming.addTransition((yyvsp[-8].string), (yyvsp[-5].string), (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
      }
    }
#line 11309 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 767:
#line 5940 "lef.y" /* yacc.c:1646  */
    { }
#line 11315 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 768:
#line 5942 "lef.y" /* yacc.c:1646  */
    { }
#line 11321 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 769:
#line 5944 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setRiseRS((yyvsp[-2].dval),(yyvsp[-1].dval)); }
#line 11327 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 770:
#line 5946 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setFallRS((yyvsp[-2].dval),(yyvsp[-1].dval)); }
#line 11333 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 771:
#line 5948 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setRiseCS((yyvsp[-2].dval),(yyvsp[-1].dval)); }
#line 11339 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 772:
#line 5950 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setFallCS((yyvsp[-2].dval),(yyvsp[-1].dval)); }
#line 11345 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 773:
#line 5952 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setRiseAtt1((yyvsp[-2].dval),(yyvsp[-1].dval)); }
#line 11351 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 774:
#line 5954 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setFallAtt1((yyvsp[-2].dval),(yyvsp[-1].dval)); }
#line 11357 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 775:
#line 5956 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setRiseTo((yyvsp[-2].dval),(yyvsp[-1].dval)); }
#line 11363 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 776:
#line 5958 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setFallTo((yyvsp[-2].dval),(yyvsp[-1].dval)); }
#line 11369 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 777:
#line 5960 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addUnateness((yyvsp[-1].string)); }
#line 11375 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 778:
#line 5962 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setStable((yyvsp[-4].dval),(yyvsp[-2].dval),(yyvsp[-1].string)); }
#line 11381 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 779:
#line 5964 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addSDF2Pins((yyvsp[-7].string),(yyvsp[-6].string),(yyvsp[-5].string),(yyvsp[-3].dval),(yyvsp[-2].dval),(yyvsp[-1].dval)); }
#line 11387 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 780:
#line 5966 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addSDF1Pin((yyvsp[-5].string),(yyvsp[-3].dval),(yyvsp[-2].dval),(yyvsp[-2].dval)); }
#line 11393 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 781:
#line 5968 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setSDFcondStart((yyvsp[-1].string)); }
#line 11399 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 782:
#line 5970 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setSDFcondEnd((yyvsp[-1].string)); }
#line 11405 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 783:
#line 5972 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.setSDFcond((yyvsp[-1].string)); }
#line 11411 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 784:
#line 5974 "lef.y" /* yacc.c:1646  */
    { }
#line 11417 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 785:
#line 5978 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"MPWH";}
#line 11423 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 786:
#line 5980 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"MPWL";}
#line 11429 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 787:
#line 5982 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"PERIOD";}
#line 11435 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 788:
#line 5986 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"SETUP";}
#line 11441 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 789:
#line 5988 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"HOLD";}
#line 11447 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 790:
#line 5990 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"RECOVERY";}
#line 11453 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 791:
#line 5992 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"SKEW";}
#line 11459 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 792:
#line 5996 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"ANYEDGE";}
#line 11465 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 793:
#line 5998 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"POSEDGE";}
#line 11471 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 794:
#line 6000 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"NEGEDGE";}
#line 11477 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 795:
#line 6004 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"ANYEDGE";}
#line 11483 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 796:
#line 6006 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"POSEDGE";}
#line 11489 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 797:
#line 6008 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"NEGEDGE";}
#line 11495 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 798:
#line 6012 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"DELAY"; }
#line 11501 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 799:
#line 6014 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"TRANSITION"; }
#line 11507 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 800:
#line 6018 "lef.y" /* yacc.c:1646  */
    { }
#line 11513 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 801:
#line 6020 "lef.y" /* yacc.c:1646  */
    { }
#line 11519 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 802:
#line 6023 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addTableEntry((yyvsp[-3].dval),(yyvsp[-2].dval),(yyvsp[-1].dval)); }
#line 11525 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 803:
#line 6027 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addTableAxisNumber((yyvsp[0].dval)); }
#line 11531 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6029 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addTableAxisNumber((yyvsp[0].dval)); }
#line 11537 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 805:
#line 6033 "lef.y" /* yacc.c:1646  */
    { }
#line 11543 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6035 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addRiseFallSlew((yyvsp[-3].dval),(yyvsp[-2].dval),(yyvsp[-1].dval),(yyvsp[0].dval)); }
#line 11549 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6037 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addRiseFallSlew((yyvsp[-6].dval),(yyvsp[-5].dval),(yyvsp[-4].dval),(yyvsp[-3].dval));
      if (lefCallbacks->TimingCbk) lefData->lefrTiming.addRiseFallSlew2((yyvsp[-2].dval),(yyvsp[-1].dval),(yyvsp[0].dval)); }
#line 11556 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6042 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"RISE"; }
#line 11562 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6044 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"FALL"; }
#line 11568 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6048 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"INVERT"; }
#line 11574 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6050 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"NONINVERT"; }
#line 11580 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6052 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (char*)"NONUNATE"; }
#line 11586 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6056 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addFromPin((yyvsp[0].string)); }
#line 11592 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6058 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addFromPin((yyvsp[0].string)); }
#line 11598 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6062 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addToPin((yyvsp[0].string)); }
#line 11604 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6064 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->TimingCbk) lefData->lefrTiming.addToPin((yyvsp[0].string)); }
#line 11610 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6067 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ArrayCbk)
        CALLBACK(lefCallbacks->ArrayCbk, lefrArrayCbkType, &lefData->lefrArray);
      lefData->lefrArray.clear();
      lefData->lefrSitePatternPtr = 0;
      lefData->lefrDoSite = 0;
   }
#line 11622 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6076 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 11628 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6077 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ArrayCbk) {
        lefData->lefrArray.setName((yyvsp[0].string));
        CALLBACK(lefCallbacks->ArrayBeginCbk, lefrArrayBeginCbkType, (yyvsp[0].string));
      }
      //strcpy(lefData->arrayName, $3);
      lefData->arrayName = strdup((yyvsp[0].string));
    }
#line 11641 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6086 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1;}
#line 11647 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6087 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ArrayCbk && lefCallbacks->ArrayEndCbk)
        CALLBACK(lefCallbacks->ArrayEndCbk, lefrArrayEndCbkType, (yyvsp[0].string));
      if (strcmp(lefData->arrayName, (yyvsp[0].string)) != 0) {
        if (lefCallbacks->ArrayCbk) { // write error only if cbk is set 
           if (lefData->arrayWarnings++ < lefSettings->ArrayWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "END ARRAY name %s is different from the ARRAY name %s.\nCorrect the LEF file before rerunning it through the LEF parser.", (yyvsp[0].string), lefData->arrayName);
              lefError(1662, lefData->outMsg);
              lefFree(lefData->outMsg);
              lefFree(lefData->arrayName);
              CHKERR();
           } else
              lefFree(lefData->arrayName);
        } else
           lefFree(lefData->arrayName);
      } else
        lefFree(lefData->arrayName);
    }
#line 11672 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6110 "lef.y" /* yacc.c:1646  */
    { }
#line 11678 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6112 "lef.y" /* yacc.c:1646  */
    { }
#line 11684 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6115 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ArrayCbk) lefData->lefrDoSite = 1; lefData->lefDumbMode = 1; }
#line 11690 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6117 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ArrayCbk) {
        lefData->lefrArray.addSitePattern(lefData->lefrSitePatternPtr);
      }
    }
#line 11700 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6122 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; if (lefCallbacks->ArrayCbk) lefData->lefrDoSite = 1; }
#line 11706 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6124 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ArrayCbk) {
        lefData->lefrArray.addCanPlace(lefData->lefrSitePatternPtr);
      }
    }
#line 11716 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6129 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; if (lefCallbacks->ArrayCbk) lefData->lefrDoSite = 1; }
#line 11722 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6131 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ArrayCbk) {
        lefData->lefrArray.addCannotOccupy(lefData->lefrSitePatternPtr);
      }
    }
#line 11732 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6136 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ArrayCbk) lefData->lefrDoTrack = 1; }
#line 11738 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6137 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ArrayCbk) {
        lefData->lefrArray.addTrack(lefData->lefrTrackPatternPtr);
      }
    }
#line 11748 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6143 "lef.y" /* yacc.c:1646  */
    {
    }
#line 11755 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6145 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ArrayCbk) lefData->lefrDoGcell = 1; }
#line 11761 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6146 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ArrayCbk) {
        lefData->lefrArray.addGcell(lefData->lefrGcellPatternPtr);
      }
    }
#line 11771 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6152 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ArrayCbk) {
        lefData->lefrArray.setTableSize((int)(yyvsp[-3].dval));
      }
    }
#line 11781 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6158 "lef.y" /* yacc.c:1646  */
    { }
#line 11787 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6161 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ArrayCbk) lefData->lefrArray.addFloorPlan((yyvsp[0].string)); }
#line 11793 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6165 "lef.y" /* yacc.c:1646  */
    { }
#line 11799 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6167 "lef.y" /* yacc.c:1646  */
    { }
#line 11805 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6170 "lef.y" /* yacc.c:1646  */
    { lefData->lefDumbMode = 1; if (lefCallbacks->ArrayCbk) lefData->lefrDoSite = 1; }
#line 11811 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6172 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ArrayCbk)
        lefData->lefrArray.addSiteToFloorPlan("CANPLACE",
        lefData->lefrSitePatternPtr);
    }
#line 11821 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6177 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ArrayCbk) lefData->lefrDoSite = 1; lefData->lefDumbMode = 1; }
#line 11827 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6179 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->ArrayCbk)
        lefData->lefrArray.addSiteToFloorPlan("CANNOTOCCUPY",
        lefData->lefrSitePatternPtr);
     }
#line 11837 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6187 "lef.y" /* yacc.c:1646  */
    { }
#line 11843 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6189 "lef.y" /* yacc.c:1646  */
    { }
#line 11849 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6192 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->ArrayCbk) lefData->lefrArray.addDefaultCap((int)(yyvsp[-3].dval), (yyvsp[-1].dval)); }
#line 11855 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6195 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode=1;lefData->lefNlToken=TRUE;}
#line 11861 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6196 "lef.y" /* yacc.c:1646  */
    {  }
#line 11867 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6199 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode=1;lefData->lefNlToken=TRUE;}
#line 11873 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6200 "lef.y" /* yacc.c:1646  */
    { }
#line 11879 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6203 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode=1;lefData->lefNlToken=TRUE;}
#line 11885 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6204 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6)
        lefAddNumDefine((yyvsp[-3].string), (yyvsp[-1].dval));
      else
        if (lefCallbacks->ArrayCbk) // write warning only if cbk is set 
           if (lefData->arrayWarnings++ < lefSettings->ArrayWarnings)
             lefWarning(2067, "DEFINE statement is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 11898 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6212 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode=1;lefData->lefNlToken=TRUE;}
#line 11904 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6213 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6)
        lefAddStringDefine((yyvsp[-3].string), (yyvsp[-1].string));
      else
        if (lefCallbacks->ArrayCbk) // write warning only if cbk is set 
           if (lefData->arrayWarnings++ < lefSettings->ArrayWarnings)
             lefWarning(2068, "DEFINES statement is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 11917 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6221 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode=1;lefData->lefNlToken=TRUE;}
#line 11923 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6222 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.6)
        lefAddBooleanDefine((yyvsp[-3].string), (yyvsp[-1].integer));
      else
        if (lefCallbacks->ArrayCbk) // write warning only if cbk is set 
           if (lefData->arrayWarnings++ < lefSettings->ArrayWarnings)
             lefWarning(2069, "DEFINEB statement is obsolete in version 5.6 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.6 or later.");
    }
#line 11936 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6233 "lef.y" /* yacc.c:1646  */
    {lefData->lefNlToken = FALSE;}
#line 11942 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6234 "lef.y" /* yacc.c:1646  */
    {lefData->lefNlToken = FALSE;}
#line 11948 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6247 "lef.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval) + (yyvsp[0].dval); }
#line 11954 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6248 "lef.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval) - (yyvsp[0].dval); }
#line 11960 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6249 "lef.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval) * (yyvsp[0].dval); }
#line 11966 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6250 "lef.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-2].dval) / (yyvsp[0].dval); }
#line 11972 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6251 "lef.y" /* yacc.c:1646  */
    {(yyval.dval) = -(yyvsp[0].dval);}
#line 11978 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6252 "lef.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[-1].dval);}
#line 11984 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6254 "lef.y" /* yacc.c:1646  */
    {(yyval.dval) = ((yyvsp[-4].integer) != 0) ? (yyvsp[-2].dval) : (yyvsp[0].dval);}
#line 11990 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6255 "lef.y" /* yacc.c:1646  */
    {(yyval.dval) = (yyvsp[0].dval);}
#line 11996 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6258 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = comp_num((yyvsp[-2].dval),(yyvsp[-1].integer),(yyvsp[0].dval));}
#line 12002 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 874:
#line 6259 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-2].dval) != 0 && (yyvsp[0].dval) != 0;}
#line 12008 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6260 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-2].dval) != 0 || (yyvsp[0].dval) != 0;}
#line 12014 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 876:
#line 6261 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = comp_str((yyvsp[-2].string),(yyvsp[-1].integer),(yyvsp[0].string));}
#line 12020 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6262 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-2].string)[0] != 0 && (yyvsp[0].string)[0] != 0;}
#line 12026 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6263 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-2].string)[0] != 0 || (yyvsp[0].string)[0] != 0;}
#line 12032 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 879:
#line 6264 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-2].integer) == (yyvsp[0].integer);}
#line 12038 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6265 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-2].integer) != (yyvsp[0].integer);}
#line 12044 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 881:
#line 6266 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-2].integer) && (yyvsp[0].integer);}
#line 12050 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 882:
#line 6267 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-2].integer) || (yyvsp[0].integer);}
#line 12056 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 883:
#line 6268 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = !(yyval.integer);}
#line 12062 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 884:
#line 6269 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = (yyvsp[-1].integer);}
#line 12068 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6271 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = ((yyvsp[-4].integer) != 0) ? (yyvsp[-2].integer) : (yyvsp[0].integer);}
#line 12074 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6272 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 1;}
#line 12080 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 887:
#line 6273 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = 0;}
#line 12086 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6277 "lef.y" /* yacc.c:1646  */
    {
      (yyval.string) = (char*)lefMalloc(strlen((yyvsp[-2].string))+strlen((yyvsp[0].string))+1);
      strcpy((yyval.string),(yyvsp[-2].string));
      strcat((yyval.string),(yyvsp[0].string));
    }
#line 12096 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6283 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[-1].string); }
#line 12102 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6285 "lef.y" /* yacc.c:1646  */
    {
      lefData->lefDefIf = TRUE;
      if ((yyvsp[-4].integer) != 0) {
        (yyval.string) = (yyvsp[-2].string);        
      } else {
        (yyval.string) = (yyvsp[0].string);
      }
    }
#line 12115 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6294 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 12121 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 892:
#line 6297 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = C_LE;}
#line 12127 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 893:
#line 6298 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = C_LT;}
#line 12133 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 894:
#line 6299 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = C_GE;}
#line 12139 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 895:
#line 6300 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = C_GT;}
#line 12145 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 896:
#line 6301 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = C_EQ;}
#line 12151 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 897:
#line 6302 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = C_NE;}
#line 12157 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 898:
#line 6303 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = C_EQ;}
#line 12163 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 899:
#line 6304 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = C_LT;}
#line 12169 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 900:
#line 6305 "lef.y" /* yacc.c:1646  */
    {(yyval.integer) = C_GT;}
#line 12175 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 901:
#line 6309 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropBeginCbk)
        CALLBACK(lefCallbacks->PropBeginCbk, lefrPropBeginCbkType, 0);
    }
#line 12184 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 902:
#line 6314 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropEndCbk)
        CALLBACK(lefCallbacks->PropEndCbk, lefrPropEndCbkType, 0);
    }
#line 12193 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 903:
#line 6321 "lef.y" /* yacc.c:1646  */
    { }
#line 12199 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 904:
#line 6323 "lef.y" /* yacc.c:1646  */
    { }
#line 12205 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 905:
#line 6326 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefrProp.clear(); }
#line 12211 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 906:
#line 6328 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropCbk) {
        lefData->lefrProp.setPropType("library", (yyvsp[-2].string));
        CALLBACK(lefCallbacks->PropCbk, lefrPropCbkType, &lefData->lefrProp);
      }
      lefSettings->lefProps.lefrLibProp.setPropType((yyvsp[-2].string), lefData->lefPropDefType);
    }
#line 12223 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 907:
#line 6335 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefrProp.clear(); }
#line 12229 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 908:
#line 6337 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropCbk) {
        lefData->lefrProp.setPropType("componentpin", (yyvsp[-2].string));
        CALLBACK(lefCallbacks->PropCbk, lefrPropCbkType, &lefData->lefrProp);
      }
      lefSettings->lefProps.lefrCompProp.setPropType((yyvsp[-2].string), lefData->lefPropDefType);
    }
#line 12241 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 909:
#line 6344 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefrProp.clear(); }
#line 12247 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 910:
#line 6346 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropCbk) {
        lefData->lefrProp.setPropType("pin", (yyvsp[-2].string));
        CALLBACK(lefCallbacks->PropCbk, lefrPropCbkType, &lefData->lefrProp);
      }
      lefSettings->lefProps.lefrPinProp.setPropType((yyvsp[-2].string), lefData->lefPropDefType);
      
    }
#line 12260 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 911:
#line 6354 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefrProp.clear(); }
#line 12266 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 912:
#line 6356 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropCbk) {
        lefData->lefrProp.setPropType("macro", (yyvsp[-2].string));
        CALLBACK(lefCallbacks->PropCbk, lefrPropCbkType, &lefData->lefrProp);
      }
      lefSettings->lefProps.lefrMacroProp.setPropType((yyvsp[-2].string), lefData->lefPropDefType);
    }
#line 12278 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 913:
#line 6363 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefrProp.clear(); }
#line 12284 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 914:
#line 6365 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropCbk) {
        lefData->lefrProp.setPropType("via", (yyvsp[-2].string));
        CALLBACK(lefCallbacks->PropCbk, lefrPropCbkType, &lefData->lefrProp);
      }
      lefSettings->lefProps.lefrViaProp.setPropType((yyvsp[-2].string), lefData->lefPropDefType);
    }
#line 12296 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 915:
#line 6372 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefrProp.clear(); }
#line 12302 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 916:
#line 6374 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropCbk) {
        lefData->lefrProp.setPropType("viarule", (yyvsp[-2].string));
        CALLBACK(lefCallbacks->PropCbk, lefrPropCbkType, &lefData->lefrProp);
      }
      lefSettings->lefProps.lefrViaRuleProp.setPropType((yyvsp[-2].string), lefData->lefPropDefType);
    }
#line 12314 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 917:
#line 6381 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefrProp.clear(); }
#line 12320 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 918:
#line 6383 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropCbk) {
        lefData->lefrProp.setPropType("layer", (yyvsp[-2].string));
        CALLBACK(lefCallbacks->PropCbk, lefrPropCbkType, &lefData->lefrProp);
      }
      lefSettings->lefProps.lefrLayerProp.setPropType((yyvsp[-2].string), lefData->lefPropDefType);
    }
#line 12332 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 919:
#line 6390 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefrProp.clear(); }
#line 12338 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 920:
#line 6392 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropCbk) {
        lefData->lefrProp.setPropType("nondefaultrule", (yyvsp[-2].string));
        CALLBACK(lefCallbacks->PropCbk, lefrPropCbkType, &lefData->lefrProp);
      }
      lefSettings->lefProps.lefrNondefProp.setPropType((yyvsp[-2].string), lefData->lefPropDefType);
    }
#line 12350 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 921:
#line 6402 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropCbk) lefData->lefrProp.setPropInteger();
      lefData->lefPropDefType = 'I';
    }
#line 12359 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 922:
#line 6407 "lef.y" /* yacc.c:1646  */
    { 
      if (lefCallbacks->PropCbk) lefData->lefrProp.setPropReal();
      lefData->lefPropDefType = 'R';
    }
#line 12368 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 923:
#line 6412 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->PropCbk) lefData->lefrProp.setPropString();
      lefData->lefPropDefType = 'S';
    }
#line 12377 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 924:
#line 6417 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->PropCbk) lefData->lefrProp.setPropQString((yyvsp[0].string));
      lefData->lefPropDefType = 'Q';
    }
#line 12386 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 925:
#line 6422 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->PropCbk) lefData->lefrProp.setPropNameMapString((yyvsp[0].string));
      lefData->lefPropDefType = 'S';
    }
#line 12395 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 926:
#line 6429 "lef.y" /* yacc.c:1646  */
    { }
#line 12401 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 927:
#line 6431 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
        lefData->lefrLayer.setSpacingRangeUseLength();
    }
#line 12410 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 928:
#line 6436 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
        lefData->lefrLayer.setSpacingRangeInfluence((yyvsp[0].dval));
        lefData->lefrLayer.setSpacingRangeInfluenceRange(-1, -1);
      }
    }
#line 12421 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 929:
#line 6443 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
        lefData->lefrLayer.setSpacingRangeInfluence((yyvsp[-3].dval));
        lefData->lefrLayer.setSpacingRangeInfluenceRange((yyvsp[-1].dval), (yyvsp[0].dval));
      }
    }
#line 12432 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 930:
#line 6450 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
        lefData->lefrLayer.setSpacingRangeRange((yyvsp[-1].dval), (yyvsp[0].dval));
    }
#line 12441 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 931:
#line 6457 "lef.y" /* yacc.c:1646  */
    { }
#line 12447 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 932:
#line 6459 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
        lefData->lefrLayer.setSpacingParSW((yyvsp[-2].dval), (yyvsp[0].dval));
    }
#line 12456 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 934:
#line 6467 "lef.y" /* yacc.c:1646  */
    { }
#line 12462 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 935:
#line 6469 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
        lefData->lefrLayer.setSpacingParTwoEdges();
    }
#line 12471 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 936:
#line 6476 "lef.y" /* yacc.c:1646  */
    { }
#line 12477 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 937:
#line 6478 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
        lefData->lefrLayer.setSpacingSamenetPGonly();
    }
#line 12486 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 938:
#line 6485 "lef.y" /* yacc.c:1646  */
    { }
#line 12492 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 939:
#line 6487 "lef.y" /* yacc.c:1646  */
    {  if (lefCallbacks->PropCbk) lefData->lefrProp.setRange((yyvsp[-1].dval), (yyvsp[0].dval)); }
#line 12498 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 940:
#line 6491 "lef.y" /* yacc.c:1646  */
    { }
#line 12504 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 941:
#line 6493 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PropCbk) lefData->lefrProp.setNumber((yyvsp[0].dval)); }
#line 12510 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 942:
#line 6497 "lef.y" /* yacc.c:1646  */
    { }
#line 12516 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 943:
#line 6499 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->PropCbk) lefData->lefrProp.setNumber((yyvsp[0].dval)); }
#line 12522 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 946:
#line 6506 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
         if (lefData->hasSpCenter) {
           if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1663, "A CENTERTOCENTER statement was already defined in SPACING\nCENTERTOCENTER can only be defined once per LAYER CUT SPACING.");
              CHKERR();
           }
        }
        lefData->hasSpCenter = 1;
        if (lefData->versionNum < 5.6) {
           if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "CENTERTOCENTER statement is a version 5.6 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1664, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
        if (lefCallbacks->LayerCbk)
          lefData->lefrLayer.setSpacingCenterToCenter();
      }
    }
#line 12550 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 947:
#line 6530 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
        if (lefData->hasSpSamenet) {
           if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefError(1665, "A SAMENET statement was already defined in SPACING\nSAMENET can only be defined once per LAYER CUT SPACING.");
              CHKERR();
           }
        }
        lefData->hasSpSamenet = 1;
        if (lefCallbacks->LayerCbk)
          lefData->lefrLayer.setSpacingSamenet();
       }
    }
#line 12568 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 948:
#line 6544 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
        lefData->outMsg = (char*)lefMalloc(10000);
        sprintf(lefData->outMsg,
          "SAMENET is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
        lefError(1684, lefData->outMsg);
        lefFree(lefData->outMsg);
        CHKERR();
      }
    }
#line 12583 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 949:
#line 6555 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
        lefData->outMsg = (char*)lefMalloc(10000);
        sprintf(lefData->outMsg,
          "PARALLELOVERLAP is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
        lefError(1680, lefData->outMsg);
        lefFree(lefData->outMsg);
        CHKERR(); 
      } else {
        if (lefCallbacks->LayerCbk) {
          if (lefData->hasSpParallel) {
             if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                lefError(1666, "A PARALLELOVERLAP statement was already defined in SPACING\nPARALLELOVERLAP can only be defined once per LAYER CUT SPACING.");
                CHKERR();
             }
          }
          lefData->hasSpParallel = 1;
          if (lefCallbacks->LayerCbk)
            lefData->lefrLayer.setSpacingParallelOverlap();
        }
      }
    }
#line 12610 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 951:
#line 6580 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 12616 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 952:
#line 6581 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
{
        if (lefData->versionNum < 5.7) {
           if (lefData->hasSpSamenet) {    // 5.6 and earlier does not allow 
              if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                 lefError(1667, "A SAMENET statement was already defined in SPACING\nEither SAMENET or LAYER can be defined, but not both.");
                 CHKERR();
              }
           }
        }
        lefData->lefrLayer.setSpacingName((yyvsp[0].string));
      }
    }
#line 12635 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 954:
#line 6597 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
        if (lefData->versionNum < 5.5) {
           if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
              lefData->outMsg = (char*)lefMalloc(10000);
              sprintf (lefData->outMsg,
                 "ADJACENTCUTS statement is a version 5.5 and later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
              lefError(1668, lefData->outMsg);
              lefFree(lefData->outMsg);
              CHKERR();
           }
        }
        if (lefData->versionNum < 5.7) {
           if (lefData->hasSpSamenet) {    // 5.6 and earlier does not allow 
              if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                 lefError(1669, "A SAMENET statement was already defined in SPACING\nEither SAMENET or ADJACENTCUTS can be defined, but not both.");
                 CHKERR();
              }
           }
        }
        lefData->lefrLayer.setSpacingAdjacent((int)(yyvsp[-2].dval), (yyvsp[0].dval));
      }
    }
#line 12663 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 956:
#line 6622 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
        lefData->outMsg = (char*)lefMalloc(10000);
        sprintf(lefData->outMsg,
          "AREA is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
        lefError(1693, lefData->outMsg);
        lefFree(lefData->outMsg);
        CHKERR();
      } else {
        if (lefCallbacks->LayerCbk) {
          if (lefData->versionNum < 5.7) {
             if (lefData->hasSpSamenet) {    // 5.6 and earlier does not allow 
                if (lefData->layerWarnings++ < lefSettings->LayerWarnings) {
                   lefError(1670, "A SAMENET statement was already defined in SPACING\nEither SAMENET or AREA can be defined, but not both.");
                   CHKERR();
                }
             }
          }
          lefData->lefrLayer.setSpacingArea((yyvsp[0].dval));
        }
      }
    }
#line 12690 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 957:
#line 6645 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
        lefData->lefrLayer.setSpacingRange((yyvsp[-1].dval), (yyvsp[0].dval));
    }
#line 12699 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 959:
#line 6651 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
        lefData->lefrLayer.setSpacingLength((yyvsp[0].dval));
      }
    }
#line 12709 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 960:
#line 6657 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk) {
        lefData->lefrLayer.setSpacingLength((yyvsp[-3].dval));
        lefData->lefrLayer.setSpacingLengthRange((yyvsp[-1].dval), (yyvsp[0].dval));
      }
    }
#line 12720 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 961:
#line 6664 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
        lefData->lefrLayer.setSpacingEol((yyvsp[-2].dval), (yyvsp[0].dval));
    }
#line 12729 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 962:
#line 6669 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
        lefData->outMsg = (char*)lefMalloc(10000);
        sprintf(lefData->outMsg,
          "ENDOFLINE is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
        lefError(1681, lefData->outMsg);
        lefFree(lefData->outMsg);
        CHKERR();
      }
    }
#line 12744 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 963:
#line 6680 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
        lefData->outMsg = (char*)lefMalloc(10000);
        sprintf(lefData->outMsg,
          "NOTCHLENGTH is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
        lefError(1682, lefData->outMsg);
        lefFree(lefData->outMsg);
        CHKERR();
      } else {
        if (lefCallbacks->LayerCbk)
          lefData->lefrLayer.setSpacingNotchLength((yyvsp[0].dval));
      }
    }
#line 12762 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 964:
#line 6694 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
        lefData->outMsg = (char*)lefMalloc(10000);
        sprintf(lefData->outMsg,
          "ENDOFNOTCHWIDTH is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
        lefError(1696, lefData->outMsg);
        lefFree(lefData->outMsg);
        CHKERR();
      } else {
        if (lefCallbacks->LayerCbk)
          lefData->lefrLayer.setSpacingEndOfNotchWidth((yyvsp[-4].dval), (yyvsp[-2].dval), (yyvsp[0].dval));
      }
    }
#line 12780 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 965:
#line 6710 "lef.y" /* yacc.c:1646  */
    {}
#line 12786 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 966:
#line 6712 "lef.y" /* yacc.c:1646  */
    {
      if (lefCallbacks->LayerCbk)
        lefData->lefrLayer.setSpacingLayerStack();
    }
#line 12795 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 967:
#line 6719 "lef.y" /* yacc.c:1646  */
    {}
#line 12801 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 968:
#line 6721 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.7) {
        lefData->outMsg = (char*)lefMalloc(10000);
        sprintf(lefData->outMsg,
          "EXCEPTSAMEPGNET is a version 5.7 or later syntax.\nYour lef file is defined with version %g.", lefData->versionNum);
        lefError(1683, lefData->outMsg);
        lefFree(lefData->outMsg);
        CHKERR();
      } else {
        if (lefCallbacks->LayerCbk)
          lefData->lefrLayer.setSpacingAdjacentExcept();
      }
    }
#line 12819 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 969:
#line 6737 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = 0; }
#line 12825 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 970:
#line 6738 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 12831 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 971:
#line 6739 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 12837 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 972:
#line 6743 "lef.y" /* yacc.c:1646  */
    {lefData->lefDumbMode = 1; lefData->lefNoNum = 1; }
#line 12843 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 973:
#line 6744 "lef.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 12849 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 974:
#line 6748 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->NoiseMarginCbk) {
          lefData->lefrNoiseMargin.low = (yyvsp[-2].dval);
          lefData->lefrNoiseMargin.high = (yyvsp[-1].dval);
          CALLBACK(lefCallbacks->NoiseMarginCbk, lefrNoiseMarginCbkType, &lefData->lefrNoiseMargin);
        }
      } else
        if (lefCallbacks->NoiseMarginCbk) // write warning only if cbk is set 
          if (lefData->noiseMarginWarnings++ < lefSettings->NoiseMarginWarnings)
            lefWarning(2070, "UNIVERSALNOISEMARGIN statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 12866 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 975:
#line 6762 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->EdgeRateThreshold1Cbk) {
          CALLBACK(lefCallbacks->EdgeRateThreshold1Cbk,
          lefrEdgeRateThreshold1CbkType, (yyvsp[-1].dval));
        }
      } else
        if (lefCallbacks->EdgeRateThreshold1Cbk) // write warning only if cbk is set 
          if (lefData->edgeRateThreshold1Warnings++ < lefSettings->EdgeRateThreshold1Warnings)
            lefWarning(2071, "EDGERATETHRESHOLD1 statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 12882 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 976:
#line 6775 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->EdgeRateThreshold2Cbk) {
          CALLBACK(lefCallbacks->EdgeRateThreshold2Cbk,
          lefrEdgeRateThreshold2CbkType, (yyvsp[-1].dval));
        }
      } else
        if (lefCallbacks->EdgeRateThreshold2Cbk) // write warning only if cbk is set 
          if (lefData->edgeRateThreshold2Warnings++ < lefSettings->EdgeRateThreshold2Warnings)
            lefWarning(2072, "EDGERATETHRESHOLD2 statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 12898 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 977:
#line 6788 "lef.y" /* yacc.c:1646  */
    {
      if (lefData->versionNum < 5.4) {
        if (lefCallbacks->EdgeRateScaleFactorCbk) {
          CALLBACK(lefCallbacks->EdgeRateScaleFactorCbk,
          lefrEdgeRateScaleFactorCbkType, (yyvsp[-1].dval));
        }
      } else
        if (lefCallbacks->EdgeRateScaleFactorCbk) // write warning only if cbk is set 
          if (lefData->edgeRateScaleFactorWarnings++ < lefSettings->EdgeRateScaleFactorWarnings)
            lefWarning(2073, "EDGERATESCALEFACTOR statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
    }
#line 12914 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 978:
#line 6801 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->NoiseTableCbk) lefData->lefrNoiseTable.setup((int)(yyvsp[0].dval)); }
#line 12920 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 979:
#line 6803 "lef.y" /* yacc.c:1646  */
    { }
#line 12926 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 980:
#line 6807 "lef.y" /* yacc.c:1646  */
    {
    if (lefData->versionNum < 5.4) {
      if (lefCallbacks->NoiseTableCbk)
        CALLBACK(lefCallbacks->NoiseTableCbk, lefrNoiseTableCbkType, &lefData->lefrNoiseTable);
    } else
      if (lefCallbacks->NoiseTableCbk) // write warning only if cbk is set 
        if (lefData->noiseTableWarnings++ < lefSettings->NoiseTableWarnings)
          lefWarning(2074, "NOISETABLE statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
  }
#line 12940 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 983:
#line 6825 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->NoiseTableCbk)
         {
            lefData->lefrNoiseTable.newEdge();
            lefData->lefrNoiseTable.addEdge((yyvsp[-1].dval));
         }
    }
#line 12951 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 984:
#line 6832 "lef.y" /* yacc.c:1646  */
    { }
#line 12957 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 985:
#line 6835 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->NoiseTableCbk) lefData->lefrNoiseTable.addResistance(); }
#line 12963 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 987:
#line 6841 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->NoiseTableCbk)
    lefData->lefrNoiseTable.addResistanceNumber((yyvsp[0].dval)); }
#line 12970 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 988:
#line 6844 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->NoiseTableCbk)
    lefData->lefrNoiseTable.addResistanceNumber((yyvsp[0].dval)); }
#line 12977 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 991:
#line 6853 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->NoiseTableCbk)
        lefData->lefrNoiseTable.addVictimLength((yyvsp[-1].dval)); }
#line 12984 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 992:
#line 6856 "lef.y" /* yacc.c:1646  */
    { }
#line 12990 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 993:
#line 6860 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->NoiseTableCbk)
    lefData->lefrNoiseTable.addVictimNoise((yyvsp[0].dval)); }
#line 12997 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 994:
#line 6863 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->NoiseTableCbk)
    lefData->lefrNoiseTable.addVictimNoise((yyvsp[0].dval)); }
#line 13004 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 995:
#line 6867 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->CorrectionTableCbk)
    lefData->lefrCorrectionTable.setup((int)(yyvsp[-1].dval)); }
#line 13011 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 996:
#line 6870 "lef.y" /* yacc.c:1646  */
    { }
#line 13017 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 997:
#line 6874 "lef.y" /* yacc.c:1646  */
    {
    if (lefData->versionNum < 5.4) {
      if (lefCallbacks->CorrectionTableCbk)
        CALLBACK(lefCallbacks->CorrectionTableCbk, lefrCorrectionTableCbkType,
               &lefData->lefrCorrectionTable);
    } else
      if (lefCallbacks->CorrectionTableCbk) // write warning only if cbk is set 
        if (lefData->correctionTableWarnings++ < lefSettings->CorrectionTableWarnings)
          lefWarning(2075, "CORRECTIONTABLE statement is obsolete in version 5.4 and later.\nThe LEF parser will ignore this statement.\nTo avoid this warning in the future, remove this statement from the LEF file with version 5.4 or later.");
  }
#line 13032 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 6892 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->CorrectionTableCbk)
         {
            lefData->lefrCorrectionTable.newEdge();
            lefData->lefrCorrectionTable.addEdge((yyvsp[-1].dval));
         }
    }
#line 13043 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 6899 "lef.y" /* yacc.c:1646  */
    { }
#line 13049 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 6902 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->CorrectionTableCbk)
  lefData->lefrCorrectionTable.addResistance(); }
#line 13056 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 6905 "lef.y" /* yacc.c:1646  */
    { }
#line 13062 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 6909 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->CorrectionTableCbk)
    lefData->lefrCorrectionTable.addResistanceNumber((yyvsp[0].dval)); }
#line 13069 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 6912 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->CorrectionTableCbk)
    lefData->lefrCorrectionTable.addResistanceNumber((yyvsp[0].dval)); }
#line 13076 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 6922 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->CorrectionTableCbk)
     lefData->lefrCorrectionTable.addVictimLength((yyvsp[-1].dval)); }
#line 13083 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 6925 "lef.y" /* yacc.c:1646  */
    { }
#line 13089 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 6929 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->CorrectionTableCbk)
        lefData->lefrCorrectionTable.addVictimCorrection((yyvsp[0].dval)); }
#line 13096 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 6932 "lef.y" /* yacc.c:1646  */
    { if (lefCallbacks->CorrectionTableCbk)
        lefData->lefrCorrectionTable.addVictimCorrection((yyvsp[0].dval)); }
#line 13103 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 6938 "lef.y" /* yacc.c:1646  */
    { // 5.3 syntax 
        lefData->use5_3 = 1;
        if (lefData->ignoreVersion) {
           // do nothing 
        } else if (lefData->versionNum > 5.3) {
           // A 5.3 syntax in 5.4 
           if (lefData->use5_4) {
              if (lefCallbacks->InputAntennaCbk) { // write warning only if cbk is set 
                if (lefData->inputAntennaWarnings++ < lefSettings->InputAntennaWarnings) {
                   lefData->outMsg = (char*)lefMalloc(10000);
                   sprintf (lefData->outMsg,
                      "INPUTPINANTENNASIZE statement is a version 5.3 or earlier syntax.\nYour lef file with version %g, has both old and new INPUTPINANTENNASIZE syntax, which is incorrect.", lefData->versionNum);
                   lefError(1671, lefData->outMsg);
                   lefFree(lefData->outMsg);
                   CHKERR();
                }
              }
           }
        }
        if (lefCallbacks->InputAntennaCbk)
          CALLBACK(lefCallbacks->InputAntennaCbk, lefrInputAntennaCbkType, (yyvsp[-1].dval));
    }
#line 13130 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 6962 "lef.y" /* yacc.c:1646  */
    { // 5.3 syntax 
        lefData->use5_3 = 1;
        if (lefData->ignoreVersion) {
           // do nothing 
        } else if (lefData->versionNum > 5.3) {
           // A 5.3 syntax in 5.4 
           if (lefData->use5_4) {
              if (lefCallbacks->OutputAntennaCbk) { // write warning only if cbk is set 
                if (lefData->outputAntennaWarnings++ < lefSettings->OutputAntennaWarnings) {
                   lefData->outMsg = (char*)lefMalloc(10000);
                   sprintf (lefData->outMsg,
                      "OUTPUTPINANTENNASIZE statement is a version 5.3 or earlier syntax.\nYour lef file with version %g, has both old and new OUTPUTPINANTENNASIZE syntax, which is incorrect.", lefData->versionNum);
                   lefError(1672, lefData->outMsg);
                   lefFree(lefData->outMsg);
                   CHKERR();
                }
              }
           }
        }
        if (lefCallbacks->OutputAntennaCbk)
          CALLBACK(lefCallbacks->OutputAntennaCbk, lefrOutputAntennaCbkType, (yyvsp[-1].dval));
    }
#line 13157 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 6986 "lef.y" /* yacc.c:1646  */
    { // 5.3 syntax 
        lefData->use5_3 = 1;
        if (lefData->ignoreVersion) {
           // do nothing 
        } else if (lefData->versionNum > 5.3) {
           // A 5.3 syntax in 5.4 
           if (lefData->use5_4) {
              if (lefCallbacks->InoutAntennaCbk) { // write warning only if cbk is set 
                if (lefData->inoutAntennaWarnings++ < lefSettings->InoutAntennaWarnings) {
                   lefData->outMsg = (char*)lefMalloc(10000);
                   sprintf (lefData->outMsg,
                      "INOUTPINANTENNASIZE statement is a version 5.3 or earlier syntax.\nYour lef file with version %g, has both old and new INOUTPINANTENNASIZE syntax, which is incorrect.", lefData->versionNum);
                   lefError(1673, lefData->outMsg);
                   lefFree(lefData->outMsg);
                   CHKERR();
                }
              }
           }
        }
        if (lefCallbacks->InoutAntennaCbk)
          CALLBACK(lefCallbacks->InoutAntennaCbk, lefrInoutAntennaCbkType, (yyvsp[-1].dval));
    }
#line 13184 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7010 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
        // 11/12/2002 - this is obsolete in 5.5, suppose should be ingored 
        // 12/16/2002 - talked to Dave Noice, leave them in here for debugging
        lefData->use5_4 = 1;
        if (lefData->ignoreVersion) {
           // do nothing 
        } else if (lefData->versionNum < 5.4) {
           if (lefCallbacks->AntennaInputCbk) { // write warning only if cbk is set 
             if (lefData->antennaInputWarnings++ < lefSettings->AntennaInputWarnings) {
               lefData->outMsg = (char*)lefMalloc(10000);
               sprintf (lefData->outMsg,
                  "ANTENNAINPUTGATEAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.\nEither update your VERSION number or use the 5.3 syntax.", lefData->versionNum);
               lefError(1674, lefData->outMsg);
               lefFree(lefData->outMsg);
               CHKERR();
             }
           }
        } else if (lefData->use5_3) {
           if (lefCallbacks->AntennaInputCbk) { // write warning only if cbk is set 
             if (lefData->antennaInputWarnings++ < lefSettings->AntennaInputWarnings) {
                lefData->outMsg = (char*)lefMalloc(10000);
                sprintf (lefData->outMsg,
                   "ANTENNAINPUTGATEAREA statement is a version 5.4 or later syntax.\nYour lef file with version %g, has both old and new ANTENNAINPUTGATEAREA syntax, which is incorrect.", lefData->versionNum);
                lefError(1675, lefData->outMsg);
                lefFree(lefData->outMsg);
               CHKERR();
             }
           }
        }
        if (lefCallbacks->AntennaInputCbk)
          CALLBACK(lefCallbacks->AntennaInputCbk, lefrAntennaInputCbkType, (yyvsp[-1].dval));
    }
#line 13221 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7044 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
        // 11/12/2002 - this is obsolete in 5.5, & will be ignored 
        // 12/16/2002 - talked to Dave Noice, leave them in here for debugging
        lefData->use5_4 = 1;
        if (lefData->ignoreVersion) {
           // do nothing 
        } else if (lefData->versionNum < 5.4) {
           if (lefCallbacks->AntennaInoutCbk) { // write warning only if cbk is set 
              if (lefData->antennaInoutWarnings++ < lefSettings->AntennaInoutWarnings) {
                 lefData->outMsg = (char*)lefMalloc(10000);
                 sprintf (lefData->outMsg,
                    "ANTENNAINOUTDIFFAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.\nEither update your VERSION number or use the 5.3 syntax.", lefData->versionNum);
                 lefError(1676, lefData->outMsg);
                 lefFree(lefData->outMsg);
                 CHKERR();
              }
           }
        } else if (lefData->use5_3) {
           if (lefCallbacks->AntennaInoutCbk) { // write warning only if cbk is set 
              if (lefData->antennaInoutWarnings++ < lefSettings->AntennaInoutWarnings) {
                 lefData->outMsg = (char*)lefMalloc(10000);
                 sprintf (lefData->outMsg,
                    "ANTENNAINOUTDIFFAREA statement is a version 5.4 or later syntax.\nYour lef file with version %g, has both old and new ANTENNAINOUTDIFFAREA syntax, which is incorrect.", lefData->versionNum);
                 lefError(1677, lefData->outMsg);
                 lefFree(lefData->outMsg);
                 CHKERR();
              }
           }
        }
        if (lefCallbacks->AntennaInoutCbk)
          CALLBACK(lefCallbacks->AntennaInoutCbk, lefrAntennaInoutCbkType, (yyvsp[-1].dval));
    }
#line 13258 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7078 "lef.y" /* yacc.c:1646  */
    { // 5.4 syntax 
        // 11/12/2002 - this is obsolete in 5.5, & will be ignored 
        // 12/16/2002 - talked to Dave Noice, leave them in here for debugging
        lefData->use5_4 = 1;
        if (lefData->ignoreVersion) {
           // do nothing 
        } else if (lefData->versionNum < 5.4) {
           if (lefCallbacks->AntennaOutputCbk) { // write warning only if cbk is set 
              if (lefData->antennaOutputWarnings++ < lefSettings->AntennaOutputWarnings) {
                 lefData->outMsg = (char*)lefMalloc(10000);
                 sprintf (lefData->outMsg,
                    "ANTENNAOUTPUTDIFFAREA statement is a version 5.4 and later syntax.\nYour lef file is defined with version %g.\nEither update your VERSION number or use the 5.3 syntax.", lefData->versionNum);
                 lefError(1678, lefData->outMsg);
                 lefFree(lefData->outMsg);
                 CHKERR();
              }
           }
        } else if (lefData->use5_3) {
           if (lefCallbacks->AntennaOutputCbk) { // write warning only if cbk is set 
              if (lefData->antennaOutputWarnings++ < lefSettings->AntennaOutputWarnings) {
                 lefData->outMsg = (char*)lefMalloc(10000);
                 sprintf (lefData->outMsg,
                    "ANTENNAOUTPUTDIFFAREA statement is a version 5.4 or later syntax.\nYour lef file with version %g, has both old and new ANTENNAOUTPUTDIFFAREA syntax, which is incorrect.", lefData->versionNum);
                 lefError(1679, lefData->outMsg);
                 lefFree(lefData->outMsg);
                 CHKERR();
              }
           }
        }
        if (lefCallbacks->AntennaOutputCbk)
          CALLBACK(lefCallbacks->AntennaOutputCbk, lefrAntennaOutputCbkType, (yyvsp[-1].dval));
    }
#line 13295 "lef.tab.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7115 "lef.y" /* yacc.c:1646  */
    { 
        if (lefCallbacks->ExtensionCbk)
          CALLBACK(lefCallbacks->ExtensionCbk, lefrExtensionCbkType, &lefData->Hist_text[0]);
        if (lefData->versionNum >= 5.6)
           lefData->ge56almostDone = 1;
    }
#line 13306 "lef.tab.c" /* yacc.c:1646  */
    break;


#line 13310 "lef.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 7122 "lef.y" /* yacc.c:1906  */


END_LEFDEF_PARSER_NAMESPACE
