function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["calc.c:37c28"]=1;
    this.traceFlag["calc.c:44c28"]=1;
    this.traceFlag["calc.c:51c28"]=1;
    this.traceFlag["calc.c:56c18"]=1;
    this.traceFlag["calc.c:64c30"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["calc.c:37"]=1;
    this.lineTraceFlag["calc.c:44"]=1;
    this.lineTraceFlag["calc.c:51"]=1;
    this.lineTraceFlag["calc.c:56"]=1;
    this.lineTraceFlag["calc.c:64"]=1;
    this.lineTraceFlag["calc.c:75"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
