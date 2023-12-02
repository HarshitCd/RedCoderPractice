#! /bin/bash

alias lcode=load_template $1
alias rcode=run_code $1

SETUP_PATH=$(pwd)/my_setup

function load_template () {
  cat template.cpp > $1;
  code $1;
}

function run_code () {
  g++ --std=c++11 $1 -o $SETUP_PATH/a.out &&
  $SETUP_PATH/a.out < $SETUP_PATH/input.txt > my_setup/output.txt;
}
