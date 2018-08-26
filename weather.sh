location=${1}
if [ "${location}" == "" ]
then
    curl -s "wttr.in/$1?m1"
else
    curl -s "wttr.in/-${location}"
fi
