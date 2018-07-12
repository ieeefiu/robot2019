#!/bin/bash

currentPath=`pwd`

if [ ! -d "$currentPath/bin" ]; then
	mkdir bin
fi

cd bin
cmake -DCMAKE_BUILD_TYPE=Debug $currentPath
make -j4
printf "\n Done Building \n \n"
# ./robot_train clear_cache
# ./robot_train import /home/rubend/Documents/RobotTrainData
# ./robot_train create_data box.data
cd ..
