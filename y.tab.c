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




/* Copy the first part of user declarations.  */
#line 1 "codeintar_14AprWorking.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include "lex.yy.c"
#include<ctype.h>




void yyerror (char const *);
//extern char yytext[];

struct OPT
{
	char op[10];
	char arg1[10];
	char arg2[10];
	char result[10];
};

struct OPT QIC[100];
struct OPT OPT[100];
int ind = 0;
int oind =0;


#line 96 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    DECIMAL = 259,
    IDENTIFIER = 260,
    CONSTANT = 261,
    STRING_LITERAL = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LE = 265,
    GE = 266,
    EQ = 267,
    NE_OP = 268,
    DEQ = 269,
    AND_OP = 270,
    OR_OP = 271,
    MUL_ASSIGN = 272,
    DIV_ASSIGN = 273,
    MOD = 274,
    ADD_ASSIGN = 275,
    SUB_ASSIGN = 276,
    TYPEDEF = 277,
    STATIC = 278,
    CHAR = 279,
    INT = 280,
    FLOAT = 281,
    CONST = 282,
    VOID = 283,
    IF = 284,
    ELSE = 285,
    FOR = 286,
    GOTO = 287,
    CONTINUE = 288,
    BREAK = 289,
    RETURN = 290,
    TRUE1 = 291,
    FALSE1 = 292,
    BOOLEAN = 293,
    IMPORT = 294,
    CLASS = 295,
    PACKAGE = 296,
    MAIN = 297,
    STRING = 298,
    ARGS = 299,
    PUBLIC = 300,
    SOP = 301,
    OC = 302,
    CC = 303,
    OF = 304,
    CF = 305,
    OS = 306,
    FS = 307,
    ADD = 308,
    SUB = 309,
    MUL = 310,
    DIV = 311,
    LT = 312,
    GT = 313,
    COMMA = 314,
    COL = 315,
    DOT = 316,
    BIT_AND = 317,
    NOT = 318,
    EXP = 319,
    BIT_OR = 320,
    QUE = 321,
    SEMC = 322,
    NE = 323
  };
#endif
/* Tokens.  */
#define NUM 258
#define DECIMAL 259
#define IDENTIFIER 260
#define CONSTANT 261
#define STRING_LITERAL 262
#define INC_OP 263
#define DEC_OP 264
#define LE 265
#define GE 266
#define EQ 267
#define NE_OP 268
#define DEQ 269
#define AND_OP 270
#define OR_OP 271
#define MUL_ASSIGN 272
#define DIV_ASSIGN 273
#define MOD 274
#define ADD_ASSIGN 275
#define SUB_ASSIGN 276
#define TYPEDEF 277
#define STATIC 278
#define CHAR 279
#define INT 280
#define FLOAT 281
#define CONST 282
#define VOID 283
#define IF 284
#define ELSE 285
#define FOR 286
#define GOTO 287
#define CONTINUE 288
#define BREAK 289
#define RETURN 290
#define TRUE1 291
#define FALSE1 292
#define BOOLEAN 293
#define IMPORT 294
#define CLASS 295
#define PACKAGE 296
#define MAIN 297
#define STRING 298
#define ARGS 299
#define PUBLIC 300
#define SOP 301
#define OC 302
#define CC 303
#define OF 304
#define CF 305
#define OS 306
#define FS 307
#define ADD 308
#define SUB 309
#define MUL 310
#define DIV 311
#define LT 312
#define GT 313
#define COMMA 314
#define COL 315
#define DOT 316
#define BIT_AND 317
#define NOT 318
#define EXP 319
#define BIT_OR 320
#define QUE 321
#define SEMC 322
#define NE 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "codeintar_14AprWorking.y" /* yacc.c:355  */

        int number;
        char *string;
        bool *boo;
       
        

#line 280 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 297 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   175

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  159

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    74,    76,    78,    79,    80,    81,    84,
      86,    88,    91,    92,    95,    96,    97,    98,    99,   102,
     105,   106,   107,   110,   110,   110,   111,   112,   116,   116,
     116,   117,   118,   121,   121,   121,   122,   123,   126,   127,
     131,   131,   132,   132,   133,   133,   134,   134,   135,   135,
     136,   136,   137,   137,   137,   138,   139,   140,   144,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   148,   148,
     149,   150,   150,   152,   152,   153,   153,   165,   165,   165,
     183,   186,   186,   186,   189,   190,   191,   195,   196,   199,
     200
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "DECIMAL", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "INC_OP", "DEC_OP", "LE", "GE", "EQ",
  "NE_OP", "DEQ", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD",
  "ADD_ASSIGN", "SUB_ASSIGN", "TYPEDEF", "STATIC", "CHAR", "INT", "FLOAT",
  "CONST", "VOID", "IF", "ELSE", "FOR", "GOTO", "CONTINUE", "BREAK",
  "RETURN", "TRUE1", "FALSE1", "BOOLEAN", "IMPORT", "CLASS", "PACKAGE",
  "MAIN", "STRING", "ARGS", "PUBLIC", "SOP", "OC", "CC", "OF", "CF", "OS",
  "FS", "ADD", "SUB", "MUL", "DIV", "LT", "GT", "COMMA", "COL", "DOT",
  "BIT_AND", "NOT", "EXP", "BIT_OR", "QUE", "SEMC", "NE", "$accept", "S",
  "compilation_unit", "package_statement", "import_statement",
  "class_name", "class_stmt", "main_method", "sl", "s1",
  "variable_declaration", "dtypes", "ids1", "$@1", "$@2", "ids2", "$@3",
  "$@4", "ids3", "$@5", "$@6", "expression", "rel_e", "$@7", "$@8", "$@9",
  "$@10", "$@11", "$@12", "$@13", "$@14", "arithm_e", "$@15", "$@16",
  "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "if_stmt", "$@25", "$@26", "for_stmt", "for_args", "$@27", "$@28",
  "arg1", "arg2", "arg3", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF -135

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-135)))

#define YYTABLE_NINF -91

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -35,    -3,     8,  -135,   -19,   -46,  -135,    -1,   -22,  -135,
     -34,   -43,   -41,   -12,  -135,   -25,  -135,  -135,    26,   -24,
    -135,     6,  -135,    17,    43,    19,    48,  -135,    36,    37,
      46,    44,    47,    52,    40,    51,  -135,    20,     1,    97,
     100,    59,    60,  -135,  -135,   106,  -135,  -135,  -135,    49,
    -135,    53,  -135,   117,   110,   115,  -135,  -135,   111,   121,
     123,   122,    74,   124,    76,    24,    27,   125,    81,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,   129,   137,   131,   139,
      98,   117,  -135,  -135,    99,  -135,   133,   143,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   138,    24,
    -135,  -135,  -135,  -135,  -135,   102,    85,  -135,  -135,     3,
     -39,   -39,   -39,   -39,   -37,   -37,  -135,  -135,   -39,   -39,
    -135,  -135,   144,   144,   104,  -135,    45,    24,   144,   -39,
     -39,  -135,    54,  -135,  -135,  -135,   -39,    72,  -135,    87,
    -135,     0,   126,   -39,  -135,   108,  -135,    88,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     8,     0,     1,     0,     0,     4,
       9,     0,     0,     0,     3,     0,     7,     6,     0,     0,
       9,     0,     5,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    71,    70,     0,
       0,     0,     0,    55,    56,     0,    11,    18,    12,     0,
      19,     0,    38,    39,     0,     0,    16,    17,     0,     0,
       0,    27,    20,    32,    21,    71,    71,    37,    22,    14,
      15,    44,    46,    50,    48,    58,    60,    62,    64,    40,
      42,    67,    72,    53,    74,    76,     0,     0,     0,     0,
       0,    57,    84,    85,     0,    81,     0,     0,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,     0,    71,
      24,    26,    29,    31,    77,     0,     0,    34,    36,    70,
      45,    47,    51,    49,    59,    61,    63,    65,    41,    43,
      68,    54,    71,    71,     0,    13,    71,    71,    71,    25,
      30,    13,    71,    87,    82,    35,    69,    71,    80,     0,
      78,    71,     0,    89,    83,     0,    13,    71,    79
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,  -135,  -135,   140,  -135,  -135,  -134,  -135,
      93,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,    94,   -62,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,   -65,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    12,    14,    25,    37,    48,
      49,    50,    62,    86,   132,    64,    88,   133,    68,    96,
     137,    51,    52,   106,   107,    98,    99,   101,   100,    58,
     109,    53,   102,   103,   104,   105,    54,   108,   138,    55,
      59,    60,    56,   134,   152,    57,    94,   116,   149,    95,
     144,   154
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,   142,     5,    90,    10,   119,     1,   147,     6,   -73,
     -75,   -73,   -75,   -52,    75,    76,    77,    78,    77,    78,
       7,     9,   157,    13,    16,    38,    17,    15,    18,    38,
      19,    20,    38,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    22,    91,    39,    40,   131,   -90,    41,
      38,    42,    39,    40,    11,    23,    43,    44,    45,    38,
      43,    44,    24,    43,    44,    45,    26,   139,   140,    27,
      46,    91,    91,   146,   143,   145,    28,    38,    29,    39,
      40,    43,    44,    41,    30,    42,   153,    47,    35,    31,
      43,    44,    45,    38,   -86,    32,    34,    39,    40,    33,
      36,    41,    61,    42,   148,    63,    65,    66,    43,    44,
      45,    67,   -88,    39,    40,    81,    69,    41,    82,    42,
      70,    47,   150,    83,    43,    44,    45,    71,    72,    84,
      73,    74,    85,    87,   -23,    89,   -28,   -33,   158,    47,
      97,   110,   111,   112,   113,   117,   114,   115,   118,   119,
     130,   135,   136,   141,   151,    47,   155,   156,    21,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80
};

static const yytype_int16 yycheck[] =
{
      65,   135,     5,    65,     5,     5,    41,   141,     0,     8,
       9,     8,     9,    12,    53,    54,    55,    56,    55,    56,
      39,    67,   156,    45,    67,     5,    67,    61,    40,     5,
      55,     5,     5,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    67,   109,    25,    26,   109,    48,    29,
       5,    31,    25,    26,    55,    49,    36,    37,    38,     5,
      36,    37,    45,    36,    37,    38,    23,   132,   133,    50,
      50,   136,   137,   138,   136,   137,    28,     5,    42,    25,
      26,    36,    37,    29,    47,    31,   151,    67,    48,    43,
      36,    37,    38,     5,    67,    51,    44,    25,    26,    52,
      49,    29,     5,    31,    50,     5,    47,    47,    36,    37,
      38,     5,    67,    25,    26,     5,    67,    29,     3,    31,
      67,    67,    50,    12,    36,    37,    38,    10,    11,     8,
      13,    14,     9,    59,    12,    59,    12,    12,    50,    67,
      59,    12,     5,    12,     5,    12,    48,    48,     5,     5,
      12,    49,    67,    49,    67,    67,    30,    49,    18,    66,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    70,    71,    72,     5,     0,    39,    73,    67,
       5,    55,    74,    45,    75,    61,    67,    67,    40,    55,
       5,    74,    67,    49,    45,    76,    23,    50,    28,    42,
      47,    43,    51,    52,    44,    48,    49,    77,     5,    25,
      26,    29,    31,    36,    37,    38,    50,    67,    78,    79,
      80,    90,    91,   100,   105,   108,   111,   114,    98,   109,
     110,     5,    81,     5,    84,    47,    47,     5,    87,    67,
      67,    10,    11,    13,    14,    53,    54,    55,    56,    57,
      58,     5,     3,    12,     8,     9,    82,    59,    85,    59,
      91,   100,    79,    90,   115,   118,    88,    59,    94,    95,
      97,    96,   101,   102,   103,   104,    92,    93,   106,    99,
      12,     5,    12,     5,    48,    48,   116,    12,     5,     5,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
      12,    91,    83,    86,   112,    49,    67,    89,   107,   100,
     100,    49,    77,    91,   119,    91,   100,    77,    50,   117,
      50,    67,   113,   100,   120,    30,    49,    77,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    72,    73,    73,    73,    73,    74,
      75,    76,    77,    77,    78,    78,    78,    78,    78,    79,
      80,    80,    80,    82,    83,    81,    81,    81,    85,    86,
      84,    84,    84,    88,    89,    87,    87,    87,    90,    90,
      92,    91,    93,    91,    94,    91,    95,    91,    96,    91,
      97,    91,    98,    99,    91,    91,    91,    91,   101,   100,
     102,   100,   103,   100,   104,   100,   105,   106,   107,   100,
     100,   108,   100,   109,   100,   110,   100,   112,   113,   111,
     114,   116,   117,   115,   118,   118,   118,   119,   119,   120,
     120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     5,     3,     3,     0,     1,
       6,    13,     2,     0,     2,     2,     1,     1,     1,     1,
       2,     2,     2,     0,     0,     5,     3,     1,     0,     0,
       5,     3,     1,     0,     0,     5,     3,     1,     1,     1,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     0,     5,     1,     1,     1,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     0,     0,     6,
       1,     0,     2,     0,     3,     0,     3,     0,     0,    13,
       7,     0,     0,     7,     1,     1,     0,     1,     0,     1,
       0
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
#line 71 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {printf("\nLine No. is %d  \n ACCEPTED\n\n\n\n",yylineno);  print_INT_CODE(); copy();  constant_folding(); print_OPT_CODE(); printf("\t\tAfter Constant Folding\n");  copy_prop(); print_OPT_CODE(); printf("\t\tAfter Copy propogation\n"); }
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 110 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    { pushId((yyvsp[0].string));}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 110 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {/*printStack();*/ codegen_assign();}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 116 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {/*printf("pushing identifier");*/ pushId((yyvsp[0].string));}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 116 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 116 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {/*printStack();*/  codegen_assign();}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 121 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {pushId((yyvsp[0].string));}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 121 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 121 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {/*printStack();*/  codegen_assign();}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 131 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 131 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {codegen();}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 132 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 132 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {codegen();}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 133 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 133 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {codegen();}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 134 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 134 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {codegen();}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 135 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 135 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {codegen();}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 136 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 136 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {codegen();}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 137 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {/*printf("pushing identifier");*/  pushId((yyvsp[0].string));}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 137 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 137 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 138 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 139 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 144 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 144 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    { /*printStack();*/ codegen();}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 145 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 145 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {/* printStack();*/codegen();}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 146 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 146 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {/* printStack();*/ codegen();}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 147 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 147 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    { /*printStack();*/ codegen();}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 148 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 148 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {pushId((yyvsp[0].string));}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 148 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 148 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {/*printStack();*/ codegen_assign();}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 149 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    { /*printf("pushing identifier");*/ pushId((yyvsp[0].string));}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 150 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {printf("");}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 150 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 152 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {pushId((yyvsp[0].string));}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 152 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 153 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {pushId((yyvsp[0].string));}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 153 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {push();}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 165 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {printf("\n");lab1();}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 165 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {lab2();}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 165 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {lab3();}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 183 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {lab4f(); }
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 186 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {lab1f();}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 186 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {lab2f();}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 186 "codeintar_14AprWorking.y" /* yacc.c:1646  */
    {lab3f();}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1822 "y.tab.c" /* yacc.c:1646  */
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
#line 204 "codeintar_14AprWorking.y" /* yacc.c:1906  */



void yyerror (char const *s)
{
fprintf (stderr, "%s\n", s);
  printf("Error occured at  Line No.  %d\n" , yylineno);
 //    printf("Error at position : %d\n" , yyltype);
 //printf("more : %s" , yymore);
 // printf("less: %s" , yyless);
   printf("Error after : %s\n" , yytext);
 exit(0); 
}
char st[100][10];
int top=0;
int i_ = 0;
char si[20];

char temp[2]="t";

int label[20];
int lnum=0;
int ltop=0;
int start=1;
char ss[20];
char l[1] = "L";

int main()
{
yyparse();
return 1;
}



void push()
{
//printf("pushing YYtext is %s\n",yytext);
strcpy(st[++top],yytext);
}


void pushId(char *name)
{
//printf("pushing yylval is %s\n",name);
strcpy(st[++top],name);
}



void codegen()
{
strcpy(temp,"t");
my_itoa(i_ , si);
strcat(temp, si);
strcpy(QIC[ind].result , temp);
strcpy(QIC[ind].op , st[top-1]);
strcpy(QIC[ind].arg1, st[top-2]);
strcpy(QIC[ind].arg2 , st[top]);
ind++;
printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
top-=2;
strcpy(st[top],temp);
i_++;
}


void codegen_umin()
{
strcpy(temp,"t");


my_itoa(i_ , si);
strcat(temp, si);

printf("%s = -%s\n",temp,st[top]);
top--;
strcpy(st[top],temp);
i_++;
}

void codegen_assign()
{
strcpy(QIC[ind].result , st[top-2]);
strcpy(QIC[ind].op , "=");
strcpy(QIC[ind].arg1, st[top]);
strcpy(QIC[ind].arg2 , "");
ind++;

printf("%s = %s\n",st[top-2],st[top]);
top-=2;
}


void printStack()
{
int i = top;
printf("Printing Curr stack\n");
while(i>-1){
	printf("%s \n",st[i]);
	i = i-1;
}
}



void lab1()   //Create a new label - after a not condition
{
 lnum++;
 strcpy(temp,"t");


my_itoa(i_ , si);
strcat(temp, si);

strcpy(QIC[ind].result , temp);
strcpy(QIC[ind].op , "= not");
strcpy(QIC[ind].arg1, st[top]);
strcpy(QIC[ind].arg2 , "");
ind++;
 printf("%s = not %s\n",temp,st[top]);

my_itoa(lnum, ss);
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "if goto");
strcpy(QIC[ind].arg1, temp);
strcpy(QIC[ind].arg2 , "");
ind++;

 printf("if %s goto L%d\n",temp,lnum);
 i_++;
 label[++ltop]=lnum;
}

void  lab2()  // Create an unconditional label
{
int x;
lnum++;
x=label[ltop--];

my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss , l ));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
printf("goto L%d\n",lnum);


my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
printf("L%d: \n",x);
label[++ltop]=lnum;
}

lab3()   //Add created label
{
int y;
y=label[ltop--];

my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
printf("L%d: \n",y);
}
 
lab1f()
{
	my_itoa(lnum ,ss );
	strcpy(QIC[ind].result , strcat(ss ,l ));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;
    	printf("L%d: \n",lnum++);
}

lab2f()  // if with 2 labels 
{
    strcpy(temp,"t");
    
my_itoa(i_ , si);
strcat(temp, si);

strcpy(QIC[ind].result , temp);
strcpy(QIC[ind].op , "= not");
strcpy(QIC[ind].arg1, st[top]);
strcpy(QIC[ind].arg2 , "");
ind++;
 printf("%s = not %s\n",temp,st[top]);

my_itoa(lnum, ss);
strcpy(QIC[ind].result , strcat(ss, l));
strcpy(QIC[ind].op , "if goto");
strcpy(QIC[ind].arg1, temp);
strcpy(QIC[ind].arg2 , "");
ind++;

 printf("if %s goto L%d\n",temp,lnum);



    i_++;
    label[++ltop]=lnum;
    lnum++;


	my_itoa(lnum, ss);
	strcpy(QIC[ind].result , strcat(ss , l));
	strcpy(QIC[ind].op , "if goto");
	strcpy(QIC[ind].arg1, temp);
	strcpy(QIC[ind].arg2 , "");
	ind++;
	 printf("if %s goto L%d\n",temp,lnum);

	
	my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l ));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
    printf("goto L%d\n",lnum);
    label[++ltop]=lnum;


	my_itoa(++lnum ,ss );
	strcpy(QIC[ind].result , strcat(ss,l ));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;
	printf("L%d: \n",lnum);
 }
lab3f()
{
    int x;
    x=label[ltop--];

	my_itoa(start ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
    printf("goto L%d \n",start);


	my_itoa(x ,ss );
	strcpy(QIC[ind].result , strcat(ss,l ));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;
    printf("L%d: \n",x);
   
}

lab4f()
{
    int x;
    x=label[ltop--];


	my_itoa(lnum ,ss );
strcpy(QIC[ind].result , strcat(ss,l));
strcpy(QIC[ind].op , "goto");
strcpy(QIC[ind].arg1, "");
strcpy(QIC[ind].arg2 , "");
ind++;
    printf("goto L%d \n",lnum);   


	my_itoa(x ,ss );
	strcpy(QIC[ind].result , strcat(ss,l));
	strcpy(QIC[ind].op , "");
	strcpy(QIC[ind].arg1, "");
	strcpy(QIC[ind].arg2 , "");
	ind++;

    printf("L%d: \n",x);
}

void my_itoa(int num, char temp1[20])
{
	sprintf(temp1,"%d",num);
	//return temp1;
}







void print_INT_CODE()
{
	int i;
	printf("the value of ind %d\n",ind);
	printf("\n--------------------------------------------------------\n");
	printf("\nINTERMEDIATE CODE\n\n");
	printf("--------------------------------------------------------\n");
	printf("--------------------------------------------------------\n");
	printf("\n%17s%10s%10s%10s%10s","post","op","arg1","arg2","result\n");
	printf("--------------------------------------------------------\n");
	
	for(i=0;i<ind;i++)
	{
		printf("\n%15d%10s%10s%10s%10s", i,QIC[i].op, QIC[i].arg1,QIC[i].arg2,QIC[i].result);
	}
	printf("\n\t\t -----------------------");
	printf("\n");
	return 0;
}

void print_OPT_CODE()
{
	int i;
	printf("the value of ind %d\n",ind);
	printf("\n--------------------------------------------------------\n");
	printf("\nOPTIMIZED INTERMEDIATE CODE\n\n");
	printf("--------------------------------------------------------\n");
	printf("--------------------------------------------------------\n");
	printf("\n%17s%10s%10s%10s%10s","post","op","arg1","arg2","result\n");
	printf("--------------------------------------------------------\n");
	
	for(i=0;i<oind;i++)
	{
		printf("\n%15d%10s%10s%10s%10s", i,OPT[i].op, OPT[i].arg1,OPT[i].arg2,OPT[i].result);
	}
	printf("\n\t\t -----------------------");
	printf("\n");
	return 0;
}













int counter =0 ;

void constant_folding()
{
	//printf("inside \n");	
	int i=0;
	int flag=0;
	int temp;
	char temp1[10];
	for(i=0;i<ind;i++)
	{
		char s[100];
		char s1[100];
		strcpy(s,OPT[i].arg1);	
		strcpy(s1,OPT[i].arg2);
		flag=isDigit(s);
		if(flag==1)
		{
			continue;
			//printf("fail\n");
		}
		else
		{
			flag=isDigit(s1);
			if(flag==1)
			{
				continue;
			}
			else
			{
				//printf("both are number %d\n",i);
				char a= OPT[i].op[0];
				//printf("a value is %c\n",a);
				switch(a)
				{
					case '+': 
				//		  printf("inside the case %d \n",i);
						  temp = atoi(s) + atoi(s1);
				//		  printf("value of temp %d\n",temp);
						  my_itoa(temp,temp1);
				//		  printf("value of temp1 %s\n",temp1);
						  strcpy(OPT[i].arg1,temp1);
					          strcpy(OPT[i].op,"=");
						  strcpy(OPT[i].arg2,"");
						  break;
					case '-': 
				//		  printf("inside the case %d \n",i);
						  temp = atoi(s) - atoi(s1);
				//		  printf("value of temp %d\n",temp);
						  my_itoa(temp,temp1);
				//		  printf("value of temp1 %s\n",temp1);
						  strcpy(OPT[i].arg1,temp1);
					          strcpy(OPT[i].op,"=");
						  strcpy(OPT[i].arg2,"");
						  break;
				}
				char b= OPT[i+1].op[0];
				//printf("hello1 %c\n",b);
		
				if(b=='=')
				{
					 strcpy(OPT[i].result,OPT[i+1].result);
					 int j=0;
                  			 for(j=i+1;j<ind;j++)
					{
							OPT[j]=OPT[j+1];
					}
					ind--;
					//tIndex--;
					counter+=1;
					
				}
				else
				{
					int k;
					strcpy(OPT[i+1].arg1,OPT[i].arg1);
					for(k=i+1;k<ind;k++)
					{
							OPT[k-1]=OPT[k];
					}
					ind--;
					//tIndex--;
					i=i-1;
					counter+=1;
					
				}
		
			}
		}		
		flag=0;
		//printf("so m3 \n");	
	}
}


int isDigit(char t[100])
{
	//printf("inside digit %s\n",t);
	if(t!=NULL)
	{
		int check=atoi(t);
		//printf("value of check %s for %d\n",t,check);
		if(check==0)
			return 1;
		else
			return 0;
	}
	return 1;
}




void copy()
{
  oind=ind;
  int i=0;
  for(i=0;i<ind;i++)
  {
	OPT[i] = QIC[i];
  }
}






struct mappping{
	char ext[100];
	char ori[100];
	}map[100];


void copy_prop()
{
	int i=0;
	int k =0;
	int flag=0;
	int temp;
	char temp1[10];
	char ext1[100];
	char ext2[100];
	ind = oind;
	int remove[100] ;
	int cnt = 0;


	for(i=0;i<ind;i++)
	{
		
		char a= OPT[i].op[0];
		
		if(a =='=')
		{
		strcpy(map[k].ext,OPT[i].result);	
		strcpy(map[k].ori,OPT[i].arg1);
		k++;
		}
		
	}




	for(i=0;i<ind;i++)
	{
		char a= OPT[i].op[0];
		

		strcpy(ext1,OPT[i].arg1);
		int check = isDigit(ext1);
		//printf("%s , a is %c Is digit %d \n" ,ext1 , a ,  check);
		int ach = strncmp(ext1, "t" , 1) ; 
		if(check == 1 && a=='=' &&  ach!=0 )
		{	
			remove[cnt] = i;
			cnt++;
		}

		else{
			strcpy(ext1,OPT[i].arg1);	
			strcpy(ext2,OPT[i].arg2);
			for(int j=0;j<k;j++)
			{
			if(strcmp(ext1, map[j].ext)==0)
				strcpy(OPT[i].arg1 , map[j].ori);
			if(strcmp(ext2, map[j].ext)==0)
				strcpy(OPT[i].arg2 , map[j].ori);
			}
	     	   }
	}


	for(int m=0; m<cnt ;m++)
	{	
		printf("%d \n" , remove[m]);		
		for (int x = remove[m]-m ; x <  ind - 1; x++)
		{
			OPT[x] = OPT[x + 1];
			
		}
		oind = oind -1;
	}

}





















