delimiter //
create procedure p(out total int)

begin
-- declare t int default 0;
select count(1) into total from t_user;
end
//

delimiter ;