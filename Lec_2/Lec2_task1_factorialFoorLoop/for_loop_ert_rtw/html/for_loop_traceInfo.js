function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "for_loop"};
	this.sidHashMap["for_loop"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "for_loop:1"};
	this.sidHashMap["for_loop:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "for_loop:6"};
	this.sidHashMap["for_loop:6"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/For Iterator Subsystem"] = {sid: "for_loop:1"};
	this.sidHashMap["for_loop:1"] = {rtwname: "<Root>/For Iterator Subsystem"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "for_loop:7"};
	this.sidHashMap["for_loop:7"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "for_loop:2"};
	this.sidHashMap["for_loop:2"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/For Iterator"] = {sid: "for_loop:3"};
	this.sidHashMap["for_loop:3"] = {rtwname: "<S1>/For Iterator"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "for_loop:5"};
	this.sidHashMap["for_loop:5"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "for_loop:8"};
	this.sidHashMap["for_loop:8"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "for_loop:4"};
	this.sidHashMap["for_loop:4"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
