declare 
a number;
procedure s(x in out number) is
begin
x:=x*x;
end;


begin
	a:=2;
s(a);

dbms_output.put_line(a);

end;
/