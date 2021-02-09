#!/bin/bash
red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`

IP="192.168.1.7"
PATH="/E/DOS/DEV/THEMER/"
#FILE="$1"
FILE="pal.com"

if [ -z "$FTPPASS" ]
then
       echo "${red}[ ERROR ]  ${reset}ENV \$FTPPASS NOT SET${reset}"
      exit 1

else
      echo "${green}[OK] ${reset}\$FTPPASS is set. Uploading";
      /usr/bin/curl -k -T $FILE ftp:/$IP:$PATH --user dmitry:$FTPPASS
        if [ $? -eq 0 ]
then
        echo "${green}UPLOADED $IP:$PATH$FILE ${reset}"
else
        echo "${red}UPLOAD FAILED  $IP:$PATH$FILE${reset}"
fi

fi


