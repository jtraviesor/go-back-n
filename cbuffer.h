
#define PAYLOAD_SIZE 1024
#define WINDOWS_SIZE 100

typedef struct
{
    int sqno;
    int num_of_packets;
    char payload [PAYLOAD_SIZE];
    //STATUS status;
}Packet;

typedef struct
{
    int start;
    int end;
    int size;
    Packet elements[WINDOWS_SIZE];
}CircularBuffer;


void cb_init(CircularBuffer * cb, int size);
void cb_free(CircularBuffer *cb);
int is_full(CircularBuffer * cb);
int is_empty(CircularBuffer * cb);
int size(CircularBuffer * cb);
int enqueue(CircularBuffer * cb, Packet p);
Packet dequeue(CircularBuffer * cb);
void cb_print(CircularBuffer * cb);