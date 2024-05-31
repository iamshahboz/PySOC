C     MOLECULE COMMON
C
C     Common definition for molecule data.
C
      CHARACTER ELEMENT(MXATM)*2,ZTYPE*4,ORSYM(MXSTO)*6,
     $          ANGBO*7,MOMSYM(2:MAXMOM)*3,ORSYMS(MXSTO)*6
      COMMON /CMOLECULE/ ELEMENT,ZTYPE,ORSYM,ANGBO,MOMSYM,
     $                   ORSYMS
C
      LOGICAL PRINT,UKS,SROKS,SPHEORB,DIRECTA,DIRECTB,SOCTWOM,
     $        GRAMS,ALTER,NOBIO,TDTB
      COMMON /LMOLECULE/ PRINT,UKS,SROKS,SPHEORB,DIRECTA,
     $                   DIRECTB,SOCTWOM,GRAMS,ALTER,NOBIO,TDTB
C
      INTEGER NAT,NGTF,CHARGE,MULTF,MULTS,
     $        NOMOAF,NOMOBF,NOMOAS,NOMOBS,
     $        LFOMOAF,LFOMOBF,LFOMOAS,LFOMOBS,HFOMOAF,HFOMOBF,
     $        HFOMOAS,HFOMOBS,DISCIN,READMO,MELEM
      COMMON /IMOLECULE/ NAT,NGTF,CHARGE,
     $                   MULTF,MULTS,
     $                   NOMOAF,NOMOBF,NOMOAS,NOMOBS,LFOMOAF,
     $                   LFOMOBF,LFOMOAS,LFOMOBS,HFOMOAF,HFOMOBF,
     $                   HFOMOAS,HFOMOBS,DISCIN,READMO,MELEM
C
      REAL C(3,MXATM),BOHR,GCC(MXGTF),ZATOM(MXATM),OCCNUM,
     $     OCCNAF(MXSTO),OCCNBF(MXSTO),OCCNAS(MXSTO),
     $     OCCNBS(MXSTO),ZEFF(MXATM),FINESTRC,CMM1,SCAL(MXATM),
     $     OCCNF(MXSTO),OCCNS(MXSTO),DEBYE,TRANS
      COMMON /RMOLECULE/ C,BOHR,GCC,ZATOM,OCCNUM,OCCNAF,OCCNBF,
     $                   OCCNAS,OCCNBS,ZEFF,FINESTRC,CMM1,SCAL,
     $                   OCCNF,OCCNS,DEBYE,TRANS
C
