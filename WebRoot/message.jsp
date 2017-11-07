<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@taglib prefix="s" uri="/struts-tags" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
<s:fielderror/>
<form action="${pageContext.request.contextPath}/hello/test/user_update.action" method="post">
用户名:<input type="text" name="username"/>不能为空<br/>
手机号:<input type="text" name="phone"/>不能为空，并且要符合手机号的格式1,3,5,8,后面是九个数字<br/>
<input type="submit" value="提交"/>
${message }
</form>
</body>
</html>