package dps.action;
import java.util.regex.Pattern;

import com.opensymphony.xwork2.*;
@SuppressWarnings("serial")
public class Person extends ActionSupport{
	private String username;
	public String getUsername() {
		return username;
	}
	public void setUsername(String username) {
		this.username = username;
	}
	public String getPhone() {
		return phone;
	}
	public void setPhone(String phone) {
		this.phone = phone;
	}
	private String phone;
	public String update(){
		ActionContext.getContext().put("message","更新成功");
		return "message";
	}
	@Override
	public void validate(){
		if(username==null||"".equals(username.trim()))
		{
			this.addFieldError("username","用户名不能为空");
		}
		if(phone==null||"".equals(phone.trim()))
		{
			this.addFieldError("phone","手机号不能为空");
		}
		else{
			if(!Pattern.compile("^1[358]\\d{9}$").matcher(this.phone).matches())
				this.addFieldError("phone","手机号不正确");
		}
	}
}
