/* Added fields for AI-driven scheduling telemetry */
struct proc {
  struct endpoint_t p_endpoint;   /* Endpoint identifier */
  int p_priority;                 /* Current scheduling priority */
  int p_ticks_left;               /* Remaining ticks in current quantum */
  
  /* Telemetry metrics for burst-time prediction */
  uint64_t p_total_cpu_time;      /* Cumulative CPU ticks consumed */
  uint32_t p_recent_burst_len;    /* Length of the last active CPU burst */
  uint32_t p_predicted_next_burst;/* Heuristic/neural predicted next burst */
  int p_io_wait_count;            /* Frequency of I/O blocking events */
};
