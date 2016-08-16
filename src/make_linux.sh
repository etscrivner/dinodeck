make clean

if [ -e "./dinodeck_linux" ]
then
    rm ./dinodeck
fi

make PLATFORM_DD=LINUX
