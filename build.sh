while read line
do
    server=$(echo $line|awk '{print $1}')
    lang=$(echo $line|awk '{print $2}')
    echo $server $lang
done < build.conf
