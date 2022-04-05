function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Logic_Calc.c:37c52"]=1;
    this.traceFlag["Logic_Calc.c:44c53"]=1;
    this.traceFlag["Logic_Calc.c:51c53"]=1;
    this.traceFlag["Logic_Calc.c:56c35"]=1;
    this.traceFlag["Logic_Calc.c:62c35"]=1;
    this.traceFlag["Logic_Calc.c:68c35"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Logic_Calc.c:37"]=1;
    this.lineTraceFlag["Logic_Calc.c:44"]=1;
    this.lineTraceFlag["Logic_Calc.c:51"]=1;
    this.lineTraceFlag["Logic_Calc.c:56"]=1;
    this.lineTraceFlag["Logic_Calc.c:62"]=1;
    this.lineTraceFlag["Logic_Calc.c:68"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
