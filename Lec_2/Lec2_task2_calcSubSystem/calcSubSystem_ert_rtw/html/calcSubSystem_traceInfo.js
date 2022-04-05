function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "calcSubSystem"};
	this.sidHashMap["calcSubSystem"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "calcSubSystem:45"};
	this.sidHashMap["calcSubSystem:45"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "calcSubSystem:28"};
	this.sidHashMap["calcSubSystem:28"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "calcSubSystem:34"};
	this.sidHashMap["calcSubSystem:34"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "calcSubSystem:23"};
	this.sidHashMap["calcSubSystem:23"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "calcSubSystem:24"};
	this.sidHashMap["calcSubSystem:24"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "calcSubSystem:45"};
	this.sidHashMap["calcSubSystem:45"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "calcSubSystem:40"};
	this.sidHashMap["calcSubSystem:40"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "calcSubSystem:41"};
	this.sidHashMap["calcSubSystem:41"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "calcSubSystem:42"};
	this.sidHashMap["calcSubSystem:42"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "calcSubSystem:43"};
	this.sidHashMap["calcSubSystem:43"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/division by zero"] = {sid: "calcSubSystem:44"};
	this.sidHashMap["calcSubSystem:44"] = {rtwname: "<Root>/division by zero"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "calcSubSystem:46"};
	this.sidHashMap["calcSubSystem:46"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "calcSubSystem:47"};
	this.sidHashMap["calcSubSystem:47"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "calcSubSystem:25"};
	this.sidHashMap["calcSubSystem:25"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "calcSubSystem:26"};
	this.sidHashMap["calcSubSystem:26"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/If"] = {sid: "calcSubSystem:27"};
	this.sidHashMap["calcSubSystem:27"] = {rtwname: "<S1>/If"};
	this.rtwnameHashMap["<S1>/If Action Subsystem"] = {sid: "calcSubSystem:28"};
	this.sidHashMap["calcSubSystem:28"] = {rtwname: "<S1>/If Action Subsystem"};
	this.rtwnameHashMap["<S1>/If Action Subsystem1"] = {sid: "calcSubSystem:34"};
	this.sidHashMap["calcSubSystem:34"] = {rtwname: "<S1>/If Action Subsystem1"};
	this.rtwnameHashMap["<S1>/Multiply"] = {sid: "calcSubSystem:38"};
	this.sidHashMap["calcSubSystem:38"] = {rtwname: "<S1>/Multiply"};
	this.rtwnameHashMap["<S1>/Subtract"] = {sid: "calcSubSystem:39"};
	this.sidHashMap["calcSubSystem:39"] = {rtwname: "<S1>/Subtract"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "calcSubSystem:48"};
	this.sidHashMap["calcSubSystem:48"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S1>/Out2"] = {sid: "calcSubSystem:49"};
	this.sidHashMap["calcSubSystem:49"] = {rtwname: "<S1>/Out2"};
	this.rtwnameHashMap["<S1>/Out3"] = {sid: "calcSubSystem:50"};
	this.sidHashMap["calcSubSystem:50"] = {rtwname: "<S1>/Out3"};
	this.rtwnameHashMap["<S1>/Out4"] = {sid: "calcSubSystem:51"};
	this.sidHashMap["calcSubSystem:51"] = {rtwname: "<S1>/Out4"};
	this.rtwnameHashMap["<S1>/division by zero"] = {sid: "calcSubSystem:52"};
	this.sidHashMap["calcSubSystem:52"] = {rtwname: "<S1>/division by zero"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "calcSubSystem:29"};
	this.sidHashMap["calcSubSystem:29"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/In2"] = {sid: "calcSubSystem:30"};
	this.sidHashMap["calcSubSystem:30"] = {rtwname: "<S2>/In2"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "calcSubSystem:31"};
	this.sidHashMap["calcSubSystem:31"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/Divide"] = {sid: "calcSubSystem:32"};
	this.sidHashMap["calcSubSystem:32"] = {rtwname: "<S2>/Divide"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "calcSubSystem:33"};
	this.sidHashMap["calcSubSystem:33"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "calcSubSystem:35"};
	this.sidHashMap["calcSubSystem:35"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Action Port"] = {sid: "calcSubSystem:36"};
	this.sidHashMap["calcSubSystem:36"] = {rtwname: "<S3>/Action Port"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "calcSubSystem:37"};
	this.sidHashMap["calcSubSystem:37"] = {rtwname: "<S3>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();