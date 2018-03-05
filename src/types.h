#ifndef types_h
#define types_h

typedef uint8_t     u8;
typedef uint16_t    u16;
typedef uint32_t    u32;
typedef uint64_t    u64;
typedef int16_t     i16;
typedef int32_t     i32;

typedef char        byte;

typedef enum {false, true} bool;

typedef struct
{
    double x;
    double y;
} Vector2;

typedef struct
{
    u32 start_time;
    u32 last_time;
    double elapsed_time;
} GameTime;

#endif
