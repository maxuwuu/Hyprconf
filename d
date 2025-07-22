#!/bin/bash
feh --bg-scale ~/wall.jpg &
pkill polybar
~/.config/polybar/launch.sh &