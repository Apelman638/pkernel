#include "drivers/drivers.h"

void kernel_early(void) {
    init_vga();
}

int kern_main(void) {
    start_up:
    while(1);
    return 0;
}
