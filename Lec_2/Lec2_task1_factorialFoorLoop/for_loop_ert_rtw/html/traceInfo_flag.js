function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["for_loop.c:42c29"]=1;
    this.traceFlag["for_loop.c:42c57"]=1;
    this.traceFlag["for_loop.c:47c31"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["for_loop.c:39"]=1;
    this.lineTraceFlag["for_loop.c:42"]=1;
    this.lineTraceFlag["for_loop.c:47"]=1;
    this.lineTraceFlag["for_loop.c:52"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
