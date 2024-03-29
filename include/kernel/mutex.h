#ifndef _KERNEL_MUTEX_H
#define _KERNEL_MUTEX_H

#include <kernel/process.h>

typedef struct {
    int lock;
    process_control_block_t * locker;
    pcb_list_t wait_queue;
} mutex_t;

void mutex_init(mutex_t * lock);
void mutex_lock(mutex_t * lock);
void mutex_unlock(mutex_t * lock);

#endif