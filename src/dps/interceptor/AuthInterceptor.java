package dps.interceptor;
import com.opensymphony.xwork2.*;
import com.opensymphony.xwork2.interceptor.AbstractInterceptor;
public class AuthInterceptor extends AbstractInterceptor{
	@Override
	public String intercept(ActionInvocation arg0) throws Exception{
		System.out.println("权限拦截器开始执行");
		Object obj=ActionContext.getContext().getSession().get("username");
		String strName=obj!=null?obj.toString():"";
		if(strName.equals("abc"))
		{
			String str=arg0.invoke();
			System.out.println("权限拦截器结束执行");
			return str;
		}
		else
		{
			ActionContext.getContext().getSession().put("tip","未登录无法查看");
			return "input";
		}
	}
}
