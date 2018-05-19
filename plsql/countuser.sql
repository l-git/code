create or replace function countuser
return number is
total number:=0;
begin
select count(1) into total from tb_user;
return total;
end;
/