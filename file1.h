<!DOCTYPE html>
<html>
<head>
    <title>operator</title>
<script>

function login(){
var uname = document.getElementById("txtname").value;
var pwd = document.getElementById("txtpwd").value;
var msg = document.getElementById("msg");

var userDetails = {userName:'john',password:'admin'};
(uname == userDetails.userName && pwd == userDetails.password)?
document.write("login success"): msg.innerHTML ="invalid username/password";
}
</script>
</head>
<body>
 <div>
   <fieldset>
    <legend>Login</legend>
    <dl>
<dt>username</dt>
<dd><input type = "text" id ="txtname"></dd>
<dt>password</dt>
<dd><input type = "password" id = "txtpwd"></dd>
<br>
<input type="button" value ="signup" onclick="login()">
</dl>
</fieldset>
<div align = "center">
<h2 id = "msg"></h2>
</div>
</div>
</body>
</html>
