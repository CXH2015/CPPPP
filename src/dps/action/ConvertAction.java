package dps.action;

import java.util.Date;

import com.opensymphony.xwork2.*;

@SuppressWarnings("serial")
public class ConvertAction extends ActionSupport {
	private MyPoint myPoint1;
	private MyPoint myPoint2;
	public MyPoint getMyPoint2() {
		return myPoint2;
	}
	public void setMyPoint2(MyPoint myPoint2) {
		this.myPoint2 = myPoint2;
	}
	public MyPoint getMyPoint1() {
		return myPoint1;
	}
	public void setMyPoint1(MyPoint myPoint) {
		this.myPoint1 = myPoint;
	}
	public int getAge1() {
		return age;
	}
	public void setAge1(int age) {
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
