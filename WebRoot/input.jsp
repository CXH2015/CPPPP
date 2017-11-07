<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@taglib prefix="s" uri="/struts-tags" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>注册页面</title>
</head>
<body>
<center>
<font color="red">坐标以逗号分隔</font>
<s:form action="myConvert">
<s:textfield label="坐标1" name="myPoint1"/>
<s:textfield label="坐标2" name="myPoint2"/>
<s:textfield label="年龄" name="age"/>
<s:textfield label="生日" name="birthday"/>
<s:submit value="提交"/>
</s:form>
</center>
</body>
</html>