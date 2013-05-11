// looks for the cams cookie

function getcookie() {
    var cookiename="UNIDATA_SID_UPCCAMSCLUSTER_SYSTEM";
    var loginURL = "<a href=\"/account/login.jsp\">Login</a> | <a href=\"/account/account.jsp\">Register</a>";
    var logoutURL = "<a href=\"/account/logout?cams_security_domain=system\">Logout</a> | <a href=\"/account/account.jsp\">My Account</a>";
    var cookiestring=""+document.cookie;
    var index1=cookiestring.indexOf(cookiename);
    if (index1==-1 || cookiename=="") return (loginURL);
    var index2=cookiestring.indexOf(';',index1);
    if (index2==-1) index2=cookiestring.length;
    return (logoutURL);
}

function testCAMScookie() {
   document.write(getcookie());
}

function loadLoginLinks() {
    $(".loginLinks").load("/linkdisplay.jsp");
}

