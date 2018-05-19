declare 
a number;
b number;
c number;

procedure findMin(a in number,b in number,c out number)
is
begin

if a<b then
c:=a;
else
c:=b;
end if;

end;


begin

a:=5;
b:=6;
findMin(a,b,c);

dbms_output.put_line(c);

end;
/