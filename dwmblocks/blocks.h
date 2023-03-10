//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/         /*Update Interval*/    /*Update Signal*/



    {" [📦 ", "/home/ohsean/.local/bin/statusbar/pacupdate",        36000,                 1},

 // {" [  ", "/home/ohsean/.local/bin/statusbar/internet",             5,                    0},

    {" [", "/home/ohsean/.local/bin/statusbar/volume2",             2,                    10},

    {" [ ", "/home/ohsean/.local/bin/statusbar/brightness",       6,                    1},

    {" [", "/home/ohsean/.local/bin/statusbar/battery",              5,                    12},

    {"   ", "/home/ohsean/.local/bin/statusbar/clock",              10,                   0},


};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim= ']';
