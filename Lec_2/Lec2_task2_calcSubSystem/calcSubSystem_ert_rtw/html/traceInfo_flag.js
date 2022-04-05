function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["calcSubSystem.c:37c46"]=1;
    this.traceFlag["calcSubSystem.c:44c46"]=1;
    this.traceFlag["calcSubSystem.c:51c46"]=1;
    this.traceFlag["calcSubSystem.c:56c27"]=1;
    this.traceFlag["calcSubSystem.c:64c48"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["calcSubSystem.c:37"]=1;
    this.lineTraceFlag["calcSubSystem.c:44"]=1;
    this.lineTraceFlag["calcSubSystem.c:51"]=1;
    this.lineTraceFlag["calcSubSystem.c:56"]=1;
    this.lineTraceFlag["calcSubSystem.c:64"]=1;
    this.lineTraceFlag["calcSubSystem.c:75"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
