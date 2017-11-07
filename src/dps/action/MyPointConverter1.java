package dps.action;

import java.util.Map;

import ognl.DefaultTypeConverter;  

public class MyPointConverter1 extends DefaultTypeConverter {
	@Override
	public Object convertValue(Map context,Object value,Class toType){
		if(toType==MyPoint.class)
		{
			MyPoint returnPoint=new MyPoint();
//			System.out.println(toType);
			String[] params=(String [])value;
			String[] strArray=params[0].split(",");
			int x=Integer.parseInt(strArray[0]);
			int y=Integer.parseInt(strArray[1]);
			returnPoint.setX(x);
			returnPoint.setY(y);
//			System.out.println(returnPoint.getX()+" "+returnPoint.getY());
			return returnPoint;
		}
		if(toType==String.class)
		{
			String returnStr="";
			MyPoint p=(MyPoint)value;
//			System.out.println(toType);
			returnStr="{"+p.getX()+","+p.getY()+"}";
//			System.out.println(returnStr);
			return returnStr;
		}
		return null;
	}
}
