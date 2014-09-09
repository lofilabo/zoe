zoe
===

dev v0.001

NOTES FOR COMPILING ON DIFFERENT OSes.
These notes are kept in imperfect form in the file lib-note.txt
i. Debian (vanilla)
NOTE for using gcc / cmake on Debian.

#gcc and cmake is not enough to install. Do this too:
sudo apt-get update && sudo apt-get install build-essential

#ncurses and readline libraries does not seem to be installed on Debian.
#install ncurses library:
apt-get install ncurses-dev

#try this to get readline library:
apt-get install libreadline6-dev
#or maybe this (suggested at <<https://packages.debian.org/cgi-bin/search_contents.pl?word=readline.h&searchmode=searchfiles&case=insensitive&version=stable&arch=i386>> but not tested in this build):
apt-get install libreadline-gplv2-dev
