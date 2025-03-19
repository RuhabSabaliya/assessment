create table Salesman (
    salesman_id int primary key,
    name varchar(25),
    city VARCHAR(25),
    commission float
);
create table Customer (
    customer_id int primary key,
    cust_name varchar(25),
    city varchar(25),
    grade int,
    salesman_id int,
    foreign key (salesman_id) references Salesman(salesman_id)
);

insert into Salesman values (5001, 'James Hoog', 'New York', 0.15);
insert into Salesman values(5002, 'Nail Knite', 'Paris', 0.13);
insert into Salesman values(5005, 'Pit Alex', 'London', 0.11);
insert into Salesman values(5006, 'Mc Lyon', 'Paris', 0.14);
insert into Salesman values(5007, 'Paul Adam', 'Rome', 0.13);
insert into Salesman values(5003, 'Lauson Hen', 'San Jose', 0.12);

insert into Customer  values(3002, 'Nick Rimando', 'New York', 100, 5001);
insert into Customer  values(3007, 'Brad Davis', 'New York', 200, 5001);
insert into Customer  values(3005, 'Graham Zusi', 'California', 200, 5002);
insert into Customer  values(3008, 'Julian Green', 'London', 300, 5002);
insert into Customer  values(3004, 'Fabian Johnson', 'Paris', 300, 5006);
insert into Customer  values(3009, 'Geoff Cameron', 'Berlin', 100, 5003);
insert into Customer  values(3003, 'Jozy Altidore', 'Moscow', 200, 5007);
insert into Customer  values(3001, 'Brad Guzan', 'London', NULL, 5005);



select 
    Customer.cust_name as Customer_Name,
    Customer.city as City,
    Salesman.name as Salesman_Name,
    Salesman.commission as Commission
from Customer
join Salesman on Customer.salesman_id = Salesman.salesman_id;



