declare
num number:=1;
begin
if num=1 then
dbms_output.put_line('1');
else 
dbms_output.put_line('2');
end if;

for i in 1 .. 20 loop
dbms_output.put_line(i);
end loop;
i number:=21;
while i<40 loop 
dbms_output.put_line(i);
end loop;

end;
/