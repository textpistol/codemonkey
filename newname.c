REM More Changes after Add
REM I Made some changes to this for storage on GitHub
REM Changes made on Tuesday morning 3 - 17 - 15

@ECHO OFF
@echo:
@echo:
ECHO           **** Sending the File - Might Take a Minute ****
@echo: 
ECHO ****     Patience and perseverance have a magical effect       ****
ECHO ****  before which difficulties disappear and obstacles vanish ****
@echo:
@echo:
REM TYPE NETEXEC ON THE TERMINAL EMULATOR
d:
cd \home
@ECHO ON

FIM.exe ^
-x 15.255.126.37 ^
-t bios ^
-n ce-arm ^
target.bdl

@ECHO OFF
REM -x <IP Address>     ; tells fimclient where to sent the file
REM -t bios             ; is the download path 
REM -n ce-arm           ; tells it that it is sending WindowsCE for ARM 
REM -c                  ; cleans the partition (reformats it)
REM <name of the priter with a string that represents the version>.bdl

@echo:
@echo:
ECHO       **** ALL DONE - JDI Image Updated ****
@echo:
@echo:

REM FimClient -x <HostName> -n <cputype/product> [-m <mfg options>] [-s] [-c]
REM [-f <pjl file>] [-p <password>] [-t <bios|web|print|pjlfile>]
REM [-w <WaitMS>] [-z] [-optcsv <csv file>] [-icbcsv <csv file>]
REM [<bundle filename>] [<csv file>]
REM
REM -x :   target device
REM -n :   name of device os-cpu type (ce-x86/ce-arm/xp-x86) or
REM         product name (legacy: coral/garnet/om/etc.)
REM -m :   manufacturing options: spiinit,icbinit
REM        icbinit : ICB file system wipe, can not download FW or
REM                  program nvram with this option
REM        spiinit : read formatter serial number, wipe SPI nvram, put the
REM                  formatter serial number back
REM -s :   require manual entry of serial number (NVRAM)
REM -c :   perform a mass storage device partition clean (FIM)
REM -p :   device password (FIM)
REM -t :   download path.  Defaults to web (FIM)
REM -f :   used with [-t pjlfile] option. Wraps bundle in PJL, writes
REM         to specified file name.
REM -w :   Send timeout in ms.  Default is none (FIM)
REM -z :   Indicates that the file is GZipped (FIM)
REM -optcsv : optional SPI nvram csv file
REM -icbcsv : optional ICB nvram csv file



