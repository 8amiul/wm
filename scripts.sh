#!/bin/bash
git add . &&
read -p '->>>' VAR
git commit -m "$VAR" &&
git push -u origin master &&
notify-send "Done"
