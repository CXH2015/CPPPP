package dps.action;
import java.util.Map;
import org.apache.struts2.util.StrutsTypeConverter;
public class MyPointConverter2 extends StrutsTypeConverter{
	@Override
	public Object convertFromString(Map arg0,String[] value,Class arg2)
	{
		MyPoint returnPoint=new MyPoint();
		String[] strArray=value[0].split(",");
		int x=Integer.parseInt(strArray[0]);
		int y=Integer.parseInt(strArray[1]);
		returnPoint.setX(x);
		returnPoint.setY(y);
		return returnPoint;
	}
	@Override
	public String convertToString(Map arg0,Object value)
	{
		String returnStr="";
		MyPoint p=(MyPoint)value;
		returnStr="[x="+p.getX()+",y="+p.getY()+"]";
		return returnStr;
	}
}
