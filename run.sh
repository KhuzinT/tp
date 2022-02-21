#!/bin/bash

absolute_path = $1
expansion = $2
name_folder = $3
name_archive = $4

tmp_str = "*."
str = "$tmp_str$expansion"

mkdir name_folder

find absolute_path -name str -exec cp --backup=numbered {}./name_folder 

tar -zcf name_archive ./name_folder

echo 'done'