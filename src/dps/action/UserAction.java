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
	@Override
	public String execute() throws Exception{
		String strReturn = INPUT;
		if(this.username.equals("abc")&&this.password.equals("123"))
			strReturn=SUCCESS;
		else
			ActionContext.getContext().getSession().put("tip","登录失败");
		return strReturn;
	}
}
