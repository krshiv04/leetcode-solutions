# Write your MySQL query statement below
with
x as (
    select product_id,
            min(year) as first_year
    from Sales
    group by (product_id)
)
select  x.product_id,
        x.first_year,
        s.quantity, s.price
from Sales s
join x 
on x.first_year=s.year and x.product_id=s.product_id;