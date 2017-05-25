Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("favicon.ico", 
		"URL=http://www.bing.com/favicon.ico", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	lr_think_time(14);

	web_url("www.google.com", 
		"URL=http://www.google.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google.co.uk/images/branding/googlelogo/1x/googlelogo_color_272x92dp.png", "Referer=https://www.google.co.uk/?gfe_rd=cr&ei=nQNCWP2cNqan8wf41YHoAQ&gws_rd=ssl", ENDITEM, 
		"Url=https://www.google.co.uk/xjs/_/js/k=xjs.s.en.Vg6AWzH1LfY.O/m=sx,c,sb,cdos,cr,elog,hsm,jsa,r,qsm,j,p,d,csi/am=AAiUdFrBAIi_h4C4hXQEqQADgw/rt=j/d=1/t=zcms/rs=ACT90oH5GNoKBgVKsB6DWcSb3h1YglD1iA", "Referer=https://www.google.co.uk/?gfe_rd=cr&ei=nQNCWP2cNqan8wf41YHoAQ&gws_rd=ssl", ENDITEM, 
		"Url=https://www.google.co.uk/xjs/_/js/k=xjs.s.en.Vg6AWzH1LfY.O/m=sy42,sy53,em3,em1,em2,sy55,em0,sy328,aa,abd,sy80,sy79,sy78,sy81,em15,async,erh,sy83,foot,fpe,idck,ipv6,sy150,sy183,lu,m,sf,vm,sy51,sy52,sy376,mids,sy43,sy103,sy44,sy46,sy102,sy160,sy45,sy47,sy162,em8,em9,sy41,sy104,sy159,sy161,sy163,cbin,sy399,dgm,cbhb/am=AAiUdFrBAIi_h4C4hXQEqQADgw/rt=j/d=0/t=zcms/rs=ACT90oH5GNoKBgVKsB6DWcSb3h1YglD1iA", "Referer=https://www.google.co.uk/?gfe_rd=cr&ei=nQNCWP2cNqan8wf41YHoAQ&gws_rd=ssl", ENDITEM, 
		LAST);

	web_url("gen_204", 
		"URL=https://www.google.co.uk/gen_204?atyp=i&ct=3&cad=i&ogsr=1&id=19001252&ic=1&ogd=google.co.uk&ogprm=up&ved=0ahUKEwjH457m1NbQAhXDE5oKHUIJBZsQnIcBCAU&ei=sANCWMfLDcOn6ATCkpTYCQ&zx=1480721345098", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.uk/?gfe_rd=cr&ei=nQNCWP2cNqan8wf41YHoAQ&gws_rd=ssl", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("gen_204_2", 
		"URL=https://www.google.co.uk/gen_204?atyp=i&ct=&cad=&vet=10ahUKEwjH457m1NbQAhXDE5oKHUIJBZsQsmQIDQ..s&ei=sANCWMfLDcOn6ATCkpTYCQ&zx=1480721345103", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.uk/?gfe_rd=cr&ei=nQNCWP2cNqan8wf41YHoAQ&gws_rd=ssl", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}