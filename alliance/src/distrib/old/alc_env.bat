@ECHO OFF
REM vim: set filetype=dosbatch:
REM              ,,,
REM             (o o)
REM ###=====oOO--(_)--OOO=========================================####
REM 
REM   Alliance CAD system environnement
REM   Usage (in C-shell) : source alc_env.csh
REM   (C) 1997 Czo  -- (Olivier.Sirol@lip6.fr)
REM   $Id: alc_env.bat,v 1.1 2002/04/29 14:15:27 czo Exp $
REM   Generated from alc_env.bat.in on Wed Feb 27 11:25:31 CET 2002
REM
REM  $ALLIANCE_OS and %ALLIANCE_TOP% are the only variables you will
REM  have to modify if something goes wrong

REM  Which platform for Alliance CAD
REM
REM  WARNING : if changing this remember to do it on the 3 config files :
REM  configure.in alc_env.sh.in and alc_env.csh.in

set ALLIANCE_OS=Cygwin

REM  Where t:he Alliance CAD is installed

set ALLIANCE_TOP=/users/soft5/newlabo/alliance-4.9.4/archi/%ALLIANCE_OS%

REM  User def 
set MBK_IN_LO=vst
set MBK_OUT_LO=vst
set MBK_IN_PH=ap
set MBK_OUT_PH=ap

set MBK_WORK_LIB=.
set MBK_CATAL_NAME=CATAL

set MBK_SCALE_X=100

set VH_MAXERR=10
set VH_BEHSFX=vbe
set VH_PATSFX=pat
set VH_DLYSFX=dly

set MBK_CATA_LIB=.:%ALLIANCE_TOP%/cells/sxlib:%ALLIANCE_TOP%/cells/dp_sxlib:%ALLIANCE_TOP%/cells/padlib
set MBK_TARGET_LIB=%ALLIANCE_TOP%/cells/sxlib
set MBK_C4_LIB=./cellsC4 

set MBK_VDD=vdd
set MBK_VSS=vss

set XPAT_PARAM_NAME=%ALLIANCE_TOP%/etc/xpat.par
set XFSM_PARAM_NAME=%ALLIANCE_TOP%/etc/xfsm.par
set XSCH_PARAM_NAME=%ALLIANCE_TOP%/etc/xsch.par

set DREAL_TECHNO_NAME=%ALLIANCE_TOP%/etc/cmos_7.dreal
set GRAAL_TECHNO_NAME=%ALLIANCE_TOP%/etc/cmos_12.graal
set RDS_TECHNO_NAME=%ALLIANCE_TOP%/etc/cmos_12.rds

set RDS_IN=cif
set RDS_OUT=cif

set ELP_TECHNO_NAME=%ALLIANCE_TOP%/etc/prol035.elp

REM  Cygwin 

set MAKE_MODE=UNIX
set DISPLAY=:0

REM  Update PATH and MANPATH 

set MANPATH=%ALLIANCE_TOP%/man;%MANPATH%

REM The path var should be written in dos style here, not unix
REM You might need to modify this by hand
REM set PATH=%ALLIANCE_TOP%/bin;%PATH%

set PATH=c:\usr\local\alliance\archi\%ALLIANCE_OS%\bin;%PATH%


REM  EOF 

