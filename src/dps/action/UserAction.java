package dps.action;

import com.opensymphony.xwork2.*;

@SuppressWarnings("serial")
public class UserAction extends ActionSupport {
	private String username;
	public String getUsername() {
		return username;
	}
	public void setUsername(String username) {
		this.username = username;
	}
	public String getPassword() {
		return password;
	}
	public void setPassword(String password) {
		this.password = password;
	}
	private String password;
	
	public String login() throws Exception{
		String strReturn = INPUT;
		if(this.username.equals("abc")&&this.password.equals("123"))
		{
			ActionContext.getContext().getSession().put("username",username);
			strReturn=SUCCESS;
		}
		else
			ActionContext.getContext().getSession().put("tip","登录失败");
		return strReturn;
	}
	public String regist() throws Exception {
		String strReturn = SUCCESS;
		ActionContext.getContext().getSession().put("tip","注册成功");
		return strReturn;
	}
	public String secret() throws Exception{
		String strReturn=SUCCESS;
		System.out.println("执行secret操作");
		return strReturn;
	}
}
