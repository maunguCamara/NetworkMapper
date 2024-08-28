#include *netmap.h*

in_addr_t current, ending;
in_addr_t generate() {
    
    if(current >= ending)
        return(in_addr_t);
    else
        current++;
    return current;
}

int main (int argc, char *argv[]) {
    if (argc < 2 ) {
        fprintf(stderr, 
        "Usage: %s <port> [start_ip] [stop_ip]\n", *argv);
        return -1;
    }
    if (argc > 2) {
        current = inet_addr(argv[2]);
        ending = (argc > 3) ?
            inet_addr(argv[3]) :
            inet_addr("255.255.255.255");

        if (
            (current == INADDR_NONE)
            || (ending == INADDR_NONE)
            || (ending < current)
            ) {
                    fprintf(stderr, 
                    "Usage: %s <port> [start_ip] [stop_ip]\n", *argv);
            return -1;
            }
    }

    printf("Start: %d\nEnd: %d\n", current, ending);
    return 0;
}
