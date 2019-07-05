const char header[] PROGMEM = R"(<!DOCTYPE html>
<html><head><meta charset='utf-8'><title>Link Accelerometer</title>)";

const char dropdownCss[] PROGMEM = R"(<style type="text/css">
.dropdown ul li a,a{text-decoration:none}html{font-family:sans-serif;-ms-text-size-adjust:100%;-webkit-text-size-adjust:100%}a{background-color:transparent;color:#337ab7}b,strong{font-weight:700}button,input{color:inherit;font:inherit;margin:0}.btn,.input-group-addon{font-weight:400;text-align:center}button{overflow:visible}button,select{text-transform:none}button,html input[type=button],input[type=reset],input[type=submit]{-webkit-appearance:button;cursor:pointer}button[disabled],html input[disabled]{cursor:default}button::-moz-focus-inner,input::-moz-focus-inner{border:0;padding:0}.btn,.form-control{padding:6px 12px;background-image:none}input{line-height:normal}*,:after,:before{-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}html{font-size:10px;-webkit-tap-highlight-color:transparent}.form-control,body{font-size:14px;line-height:1.42857143;background-color:#fff}body{margin:0;font-family:'Helvetica Neue',Helvetica,Arial,sans-serif;color:#333}.form-control{display:block;width:100%;height:34px;color:#555;border:1px solid #ccc;border-radius:4px;-webkit-box-shadow:inset 0 1px 1px rgba(0,0,0,.075);box-shadow:inset 0 1px 1px rgba(0,0,0,.075);-webkit-transition:border-color ease-in-out .15s,-webkit-box-shadow ease-in-out .15s;-o-transition:border-color ease-in-out .15s,box-shadow ease-in-out .15s;transition:border-color ease-in-out .15s,box-shadow ease-in-out .15s}.form-control:focus{border-color:#66afe9;outline:0;-webkit-box-shadow:inset 0 1px 1px rgba(0,0,0,.075),0 0 8px rgba(102,175,233,.6);box-shadow:inset 0 1px 1px rgba(0,0,0,.075),0 0 8px rgba(102,175,233,.6)}.form-control::-moz-placeholder{color:#999;opacity:1}.form-control:-ms-input-placeholder{color:#999}.form-control::-webkit-input-placeholder{color:#999}.form-control::-ms-expand{border:0;background-color:transparent}.form-group-lg .form-control+.form-control-feedback,.input-group-lg+.form-control-feedback,.input-lg+.form-control-feedback{width:46px;height:46px;line-height:46px}.btn{display:inline-block;margin-bottom:0;vertical-align:middle;-ms-touch-action:manipulation;touch-action:manipulation;cursor:pointer;border:1px solid #ccc;font-size:14px;border-radius:4px;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none}.input-group{display:table;border-collapse:separate}.input-group[class*=col-]{float:none;padding-left:0;padding-right:0}.input-group .form-control{position:relative;z-index:1;float:left;width:100%;margin-bottom:0}.input-group .form-control:focus{z-index:3}.input-group .form-control,.input-group-addon,.input-group-btn{display:table-cell}.input-group .form-control:not (:first-child):not (:last-child),.input-group-addon:not (:first-child):not (:last-child),.input-group-btn:not (:first-child):not (:last-child){border-radius:0}.input-group-addon,.input-group-btn{width:1%;white-space:nowrap;vertical-align:middle}.input-group-addon{padding:6px 12px;font-size:14px;line-height:1;color:#555;background-color:#eee;border:1px solid #ccc;border-radius:4px}.input-group-addon.input-sm{padding:5px 10px;font-size:12px;border-radius:3px}.input-group-addon.input-lg{padding:10px 16px;font-size:18px;border-radius:6px}.input-group-addon input[type=checkbox],.input-group-addon input[type=radio]{margin-top:0}.input-group .form-control:first-child,.input-group-addon:first-child,.input-group-btn:first-child>.btn,.input-group-btn:first-child>.btn-group>.btn,.input-group-btn:first-child>.dropdown-toggle,.input-group-btn:last-child>.btn-group:not (:last-child)>.btn,.input-group-btn:last-child>.btn:not (:last-child):not (.dropdown-toggle){border-bottom-right-radius:0;border-top-right-radius:0}.input-group-addon:first-child{border-right:0}.input-group .form-control:last-child,.input-group-addon:last-child,.input-group-btn:first-child>.btn-group:not (:first-child)>.btn,.input-group-btn:first-child>.btn:not (:first-child),.input-group-btn:last-child>.btn,.input-group-btn:last-child>.btn-group>.btn,.input-group-btn:last-child>.dropdown-toggle{border-bottom-left-radius:0;border-top-left-radius:0}.input-group-addon:last-child{border-left:0}.input-group-btn{font-size:0;white-space:nowrap}.dropdown,.dropdown>a,.dropdown>button{font-family:'Helvetica Neue',Helvetica,Arial,sans-serif;font-size:14px;display:inline-block}.input-group-btn>.btn+.btn{margin-left:-1px}.input-group-btn>.btn:active,.input-group-btn>.btn:focus,.input-group-btn>.btn:hover{z-index:2}.input-group-btn:first-child>.btn,.input-group-btn:first-child>.btn-group{margin-right:-1px}.input-group-btn:last-child>.btn,.input-group-btn:last-child>.btn-group{z-index:2;margin-left:-1px}.alert-success{color:#3c763d;background-color:#dff0d8;border-color:#d6e9c6}.alert{padding:15px;margin-bottom:20px;border:1px solid transparent;border-radius:4px}.dropdown{position:relative}.dropdown>a,.dropdown>button{background-color:#fff;border:1px solid #ccc;padding:6px 20px 6px 10px;border-radius:4px;color:#000;text-decoration:none}.dropdown>a:before,.dropdown>button:before{position:absolute;right:7px;top:12px;content:' ';border-left:5px solid transparent;border-right:5px solid transparent;border-top:5px solid #000}.dropdown input[type=checkbox]{position:absolute;display:block;top:0;left:0;width:100%;height:100%;margin:0;opacity:0}.dropdown input[type=checkbox]:checked{position:fixed;z-index:+0;top:0;left:0;right:0;bottom:0}.dropdown ul{position:absolute;top:18px;border:1px solid #ccc;border-radius:3px;left:0;list-style:none;padding:4px 0;display:none;background-color:#fff;box-shadow:0 3px 6px rgba(0,0,0,.175)}.dropdown input[type=checkbox]:checked+ul{display:block}.dropdown ul li{display:block;padding:6px 20px;white-space:nowrap;min-width:100px}.dropdown ul li:hover{background-color:#F5F5F5;cursor:pointer}.dropdown ul li a{display:block;color:#000}.dropdown .divider{height:1px;margin:9px 0;overflow:hidden;background-color:#e5e5e5;font-size:1px;padding:0}
</style>)";

const char headJs[] PROGMEM = R"(<script>
window.onload = function() {
  getData('sdonlystatus'); getData('sr'); getData('buf');  
};
document.addEventListener('DOMContentLoaded', function() {
  var inputs = document.querySelectorAll('.dropdown-menu a');
  for (i = 0; i < inputs.length; i++) {
       inputs[i].addEventListener('click', function() {
       document.getElementById('ssid').value = this.innerHTML;
       });
  }
}, false);
function setSd(onOff) {
    var xhr = new XMLHttpRequest();
    xhr.onreadystatechange = function() {
        if (xhr.readyState == 4 && xhr.status == 200) {
            sdStatusJsonObj = JSON.parse(xhr.responseText);
            if (sdStatusJsonObj.status == 'success') {
                document.getElementById('sdonly_status').innerHTML = onOff.toUpperCase();
            }
        }
    }
    xhr.open('GET', '/sdonly'+onOff, true);
    xhr.send(); 
}
function getData(type) {
    var xhr = new XMLHttpRequest();
    xhr.onreadystatechange = function() {
        if (xhr.readyState == 4 && xhr.status == 200) {
            statusJsonObj = JSON.parse(xhr.responseText);
            if (type == 'sdonlystatus') {
                if (statusJsonObj.data == 1) {
                    document.getElementById('sdonly_status').innerHTML = "ON";
                } else {
                    document.getElementById('sdonly_status').innerHTML = "OFF";
                }             
            } else {
                document.getElementById(type+'_data').value = statusJsonObj.data;
            }
        }
    }
    xhr.open('GET', '/'+type, true);
    xhr.send(); 
}
function setData(type) {
    var xhr = new XMLHttpRequest();
    xhr.onreadystatechange = function() {
        if (xhr.readyState == 4 && xhr.status == 200) {
            statusJsonObj = JSON.parse(xhr.responseText);
            console.log(statusJsonObj);
        }
    }
    var eId = type + '_data';
    xhr.open('GET', '/set'+type+'?'+type+'data='+ document.getElementById(eId).value, true);
    xhr.send(); 
}
</script>>)";

const char headCss[] PROGMEM = R"(<style type='text/css'>
html,body {width:100%;height:100%;margin:0px;font-family:Arial;font-size:14px}
.page_header{position:absolute;top:25px;width:360px;height:25px;color:rgb(108,112,115);text-align:left;left:15px;font-size:24px;font-weight:600}
.header_div{position:absolute;top:0px;left:0px;width:100%;height:72px;background-color:black}
.content_div{position:absolute;top:72px;left:0px;width:100%;height:auto}
.content{position:absolute;left:15px}form div{margin-top:10px}
.dropdown ul{z-index: 10;}
.st{margin-top:10px;} .st div{margin-top:10px;} .st button{margin-top:10px;}
</style>
</head><body><div class='header_div'><div class='page_header'>Link Accelerometer</div></div>)";

const char contentHead[] PROGMEM = R"(<div class='content_div'><div class='content'><h3 class='title'>Network Configuration</h3><div id='msg'></div><form method='get' action='/set'><div class='row'><div class='input-group'><div class='input-group-btn'><span class="dropdown"><button>SSID</button><label><input type="checkbox">)";

const char contentTail[] PROGMEM = R"(</label></span></div><input id='ssid' name='ssid' type='text' class='form-control' placeholder='SSID' aria-label='...' value=''/></div></div><div class='input-group'><span class='input-group-addon' id='basic-addon1'>Password</span> <input type='password' id='pass' name='pass' class='form-control' placeholder='Password'></div><div> <button id='submit' type='submit' class='btn'>Submit</button></div></form><h3 class='title'>Data Logger Only Mode: <span id='sdonly_status'>ON</span></h3><button type='button' class='btn' onclick='setSd("on")'>On</button><span> </span><button type='button' class='btn' onclick='setSd("off")'>Off</button><div class='st'> <div class='input-group'><span class='input-group-addon' id='basic-addon1'>Sample Rate</span> <input type='text' id='sr_data' name='sr_data' class='form-control' placeholder='100'> </div><button type='button' class='btn' onclick='setData("sr")'>Set Rate</button> <div class='input-group'><span class='input-group-addon' id='basic-addon1'>Buffer Size</span> <input type='text' id='buf_data' class='form-control' placeholder='10'> </div><button type='button' class='btn' onclick='setData("buf")'>Set Buffer</button></div></div></div></body></html>)";

//Network Config Reset Page
const char setCss[] PROGMEM = R"(<style type="text/css">.btn,body{line-height:1.42857143}a,a:focus,a:hover{text-decoration:none}.btn,.btn-success.active,.btn-success:active,.open>.dropdown-toggle.btn-success{background-image:none}body{color:#333;background-color:#fff}body,html{width:100%;height:100%;margin:0;font-family:Arial;font-size:14px}.page_header{position:absolute;top:25px;width:360px;height:25px;color:#6c7073;text-align:left;left:15px;font-size:24px;font-weight:600}.content_div,.header_div{left:0;width:100%;position:absolute}.header_div{top:0;height:72px;background-color:#000}.content_div{top:72px;height:auto}.content{position:absolute;left:15px}form div{margin-top:10px}.alert-success{color:#3c763d;background-color:#dff0d8;border-color:#d6e9c6}.alert{padding:15px;margin-bottom:20px;border:1px solid transparent;border-radius:4px}a{color:#337ab7}a:focus,a:hover{color:#23527c}a:focus{outline:-webkit-focus-ring-color auto 5px;outline-offset:-2px}.btn{display:inline-block;margin-bottom:0;font-weight:400;text-align:center;vertical-align:middle;-ms-touch-action:manipulation;touch-action:manipulation;cursor:pointer;border:1px solid transparent;white-space:nowrap;padding:6px 12px;font-size:14px;border-radius:4px;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none}.btn.active.focus,.btn.active:focus,.btn.focus,.btn:active.focus,.btn:active:focus,.btn:focus{outline:-webkit-focus-ring-color auto 5px;outline-offset:-2px}.btn.focus,.btn:focus,.btn:hover{color:#333;text-decoration:none}.btn.active,.btn:active{outline:0;background-image:none;-webkit-box-shadow:inset 0 3px 5px rgba(0, 0, 0, .125);box-shadow:inset 0 3px 5px rgba(0, 0, 0, .125)}.btn.disabled,.btn[disabled],fieldset[disabled] .btn{cursor:not-allowed;opacity:.65;filter:alpha(opacity=65);-webkit-box-shadow:none;box-shadow:none}a.btn.disabled,fieldset[disabled] a.btn{pointer-events:none}.btn-success{color:#fff;background-color:#5cb85c;border-color:#4cae4c}.btn-success.focus,.btn-success:focus{color:#fff;background-color:#449d44;border-color:#255625}.btn-success.active,.btn-success:active,.btn-success:hover,.open>.dropdown-toggle.btn-success{color:#fff;background-color:#449d44;border-color:#398439}.btn-success.active.focus,.btn-success.active:focus,.btn-success.active:hover,.btn-success:active.focus,.btn-success:active:focus,.btn-success:active:hover,.open>.dropdown-toggle.btn-success.focus,.open>.dropdown-toggle.btn-success:focus,.open>.dropdown-toggle.btn-success:hover{color:#fff;background-color:#398439;border-color:#255625}.btn-success.disabled.focus,.btn-success.disabled:focus,.btn-success.disabled:hover,.btn-success[disabled].focus,.btn-success[disabled]:focus,.btn-success[disabled]:hover,fieldset[disabled] .btn-success.focus,fieldset[disabled] .btn-success:focus,fieldset[disabled] .btn-success:hover{background-color:#5cb85c;border-color:#4cae4c}.btn-success .badge{color:#5cb85c;background-color:#fff}</style>)";

const char setJs[] PROGMEM = R"(<script>
var handle = null;
var ipJsonObj = null;
var count = 0;
document.addEventListener('DOMContentLoaded', function() {
    var m1 = document.getElementById("reboot-btn"), c1 = m1.style;
    c1.display = "none";
    var m2 = document.getElementById("back-btn"), c2 = m2.style;
    c2.display = "none";
    handle = setInterval(handleIp, 2000);
}, false);         
function handleIp() {
    getIp();
    if (ipJsonObj != null && ipJsonObj.data != "0.0.0.0") {
        clearInterval(handle);
        document.getElementById('ip').innerHTML = "Your IP Address Will Be " + ipJsonObj.data;
        var re = document.getElementById("reboot-btn"), rec = re.style;
        rec.display = "inline-block";
    }
    if (count > 10) {
        document.getElementById('ip').innerHTML = "Failed to Fetch IP Address. Please Go Back and Reset";
        var b = document.getElementById("back-btn"), bc = b.style;
        bc.display = "inline-block";
    }
    count++;
}       
function getIp() {
    var xhr = new XMLHttpRequest();
    xhr.onreadystatechange = function() {
        if (xhr.readyState == 4 && xhr.status == 200) {
            ipJsonObj = JSON.parse(xhr.responseText);
        }
    }
    xhr.open('GET', '/ip', true);
    xhr.send();
}
</script>
)";


const char setHtml[] PROGMEM = R"(</head><body><div class='header_div'><div class='page_header'>Link Accelerometer</div></div><div class='content_div'><div class='content'><h3 class='title'>Network Configuration</h3><div class="alert alert-success"> <strong>Success!</strong> SSID and Password Saved Successfully.</div><strong><div id="ip" class="alert alert-success">Fetching IP address ...</div></strong><div> <button id="reboot-btn" class='btn btn-success'><a id='btn_reboot' href='/reboot'>Reboot</a></button><button id="back-btn" class='btn btn-success'><a id='btn_back' href='/'>Back</a></button></div></div></body></html>)";

const char setErrHtml1[] PROGMEM = R"(</head><body><div class='header_div'><div class='page_header'>Link Accelerometer</div></div><div class='content_div'><div class='content'><h3 class='title'>Network Configuration</h3><div class="alert alert-success"> <strong>Error!</strong> SSID and Password Cannot Save Correctly.</div><div> <button class='btn btn-success'><a href=')";

const char setErrHtml2[] PROGMEM = R"('>Back</a></button></div></div></body></html>)";



