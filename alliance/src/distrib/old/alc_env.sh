# -*- Mode: Shell-script    -*- 
# -*- vim: set filetype=sh: -*-
#             ,,,
#            (o o)
####=====oOO--(_)--OOO=========================================####
#
#  Alliance CAD system environnement
#  Usage (in Bourne-shell) : > . alc_env.sh
#  (C) 1997 Czo  -- <Olivier.Sirol@lip6.fr>
#  $Id: alc_env.sh,v 1.1 2002/04/29 14:15:27 czo Exp $
#  Generated from alc_env.sh.in on Wed Feb 27 11:25:31 CET 2002

# $ALLIANCE_OS and $ALLIANCE_TOP are the only variables you will
# have to modify if something goes wrong

# Which platform for Alliance CAD

# WARNING : if changing this remember to do it on the 3 config files :
# configure.in alc_env.sh.in and alc_env.csh.in

ALLIANCE_OS=Unknown
 
case `uname` in

  Linux*) case `uname -r` in
           1.*) ALLIANCE_OS=Linux_aout ;;
          2.0*) ALLIANCE_OS=Linux_elf  ;;            
             *) ALLIANCE_OS=Linux  ;;
          esac ;;

  SunOS*) case `uname -r` in
            5*) ALLIANCE_OS=Solaris ;;
             *) ALLIANCE_OS=SunOS ;;
          esac ;;

  FreeBSD*)     ALLIANCE_OS=FreeBSD ;;

  NetBSD*)      ALLIANCE_OS=NetBSD ;;

  HP-UX*)       ALLIANCE_OS=HPUX ;;

  OSF1*)        ALLIANCE_OS=OSF ;;

  CYGWIN*)      ALLIANCE_OS=Cygwin ;;

  *)            ALLIANCE_OS=Unknown ;;

esac

export ALLIANCE_OS

# Where the Alliance CAD is installed

 ALLIANCE_TOP=/users/soft5/newlabo/alliance-4.9.4/archi/$ALLIANCE_OS ;      export ALLIANCE_TOP

# User def 

         MBK_IN_LO=vst;                   export MBK_IN_LO
        MBK_OUT_LO=vst;                   export MBK_OUT_LO 
         MBK_IN_PH=ap;                    export MBK_IN_PH
        MBK_OUT_PH=ap;                    export MBK_OUT_PH

      MBK_WORK_LIB=.;                     export MBK_WORK_LIB
    MBK_CATAL_NAME=CATAL;                 export MBK_CATAL_NAME

       MBK_SCALE_X=100;                   export MBK_SCALE_X

          VH_MAXERR=10;                   export VH_MAXERR
         VH_BEHSFX=vbe;                   export VH_BEHSFX
         VH_PATSFX=pat;                   export VH_PATSFX
         VH_DLYSFX=dly;                   export VH_DLYSFX

      MBK_CATA_LIB=.:$ALLIANCE_TOP/cells/sxlib:$ALLIANCE_TOP/cells/dp_sxlib:$ALLIANCE_TOP/cells/padlib;    export MBK_CATA_LIB
    MBK_TARGET_LIB=$ALLIANCE_TOP/cells/sxlib;      export MBK_TARGET_LIB
        MBK_C4_LIB=./cellsC4;             export MBK_C4_LIB

           MBK_VDD=vdd;                    export MBK_VDD
           MBK_VSS=vss;                    export MBK_VSS

XPAT_PARAM_NAME=$ALLIANCE_TOP/etc/xpat.par
export XPAT_PARAM_NAME
XFSM_PARAM_NAME=$ALLIANCE_TOP/etc/xfsm.par
export XFSM_PARAM_NAME
XSCH_PARAM_NAME=$ALLIANCE_TOP/etc/xsch.par
export XSCH_PARAM_NAME

RDS_IN=cif
export RDS_IN
RDS_OUT=cif
export RDS_OUT

DREAL_TECHNO_NAME=$ALLIANCE_TOP/etc/cmos_7.dreal
export DREAL_TECHNO_NAME
GRAAL_TECHNO_NAME=$ALLIANCE_TOP/etc/cmos_12.graal
export GRAAL_TECHNO_NAME
GENVIEW_TECHNO_NAME=$ALLIANCE_TOP/etc/cmos_11.genview
export GENVIEW_TECHNO_NAME

RDS_TECHNO_NAME=$ALLIANCE_TOP/etc/cmos_12.rds
export RDS_TECHNO_NAME
ELP_TECHNO_NAME=$ALLIANCE_TOP/etc/prol035.elp
export ELP_TECHNO_NAME


## Update PATH and MANPATH
#PATH=$HOME/labo/$ALLIANCE_OS/bin:$ALLIANCE_TOP/bin:$PATH
PATH=$ALLIANCE_TOP/bin:$PATH
export PATH

if [ "X${MANPATH}Y" != "XY" ]
then
 MANPATH=$ALLIANCE_TOP/man:$MANPATH
else
 MANPATH=$ALLIANCE_TOP/man:/usr/share/man:/usr/man:/usr/local/man:/usr/X11R6/man:/usr/lib/perl5/man
fi
export MANPATH

# EOF 

