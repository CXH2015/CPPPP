package dps.action;

import java.util.Date;

import com.opensymphony.xwork2.*;

@SuppressWarnings("serial")
public class ConvertAction extends ActionSupport {
	private MyPoint myPoint;
	public MyPoint getMyPoint() {
		return myPoint;
	}
	public void setMyPoint(MyPoint myPoint) {
		this.myPoint = myPoint;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public Date getBirthday() {
		return birthday;
	}
	public void setBirthday(Date birthday) {
		this.birthday = birthday;
	}
	private int age;
	private Date birthday;
	@Override
	public String execute() throws Exception{
		return SUCCESS;
	}
}
