#ifndef _VERSION_H_
#define _VERSION_H_


typedef struct {
    unsigned short major;
    unsigned short minor;
    unsigned short patch;
} SpiriTale_Version;


#define spiritale_version() (SpiriTale_Version) {   \
    .major = 0                                      \
    , .minor = 1                                    \
    , .patch = 0                                    \
}


#endif


