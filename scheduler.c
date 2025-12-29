#include <stdio.h>

struct Process {
    int id;
    int burst_time;
    int remaining_time;
};

int main() {
    struct Process proc[] = {{1, 10, 10}, {2, 5, 5}, {3, 8, 8}};
    int n = 3;
    int quantum = 2;
    int time = 0;
    int done;

    printf("Starting AI Scheduler Simulation (Minix)...\n");

    do {
        done = 1;
        for (int i = 0; i < n; i++) {
            if (proc[i].remaining_time > 0) {
                done = 0;
                if (proc[i].remaining_time > quantum) {
                    time += quantum;
                    proc[i].remaining_time -= quantum;
                    printf("Process %d running for %d units.\n", proc[i].id, quantum);
                } else {
                    time += proc[i].remaining_time;
                    printf("Process %d finished at time %d.\n", proc[i].id, time);
                    proc[i].remaining_time = 0;
                }
            }
        }
    } while (!done);

    printf("All processes scheduled successfully.\n");
    return 0;
}
