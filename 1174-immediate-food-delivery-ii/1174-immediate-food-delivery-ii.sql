# Write your MySQL query statement below
with
x as ( select
            customer_id,
            min(order_date) as first_order
        from Delivery
        group by(customer_id)
),
y as (  select
            count(*) as immediate_orders
        from Delivery d
        join x
        on x.first_order=d.order_date and x.customer_id=d.customer_id 
        where x.first_order=d.customer_pref_delivery_date
),
z as (  select
            count(*) as scheduled_orders
        from Delivery d
        join x
        on x.first_order=d.order_date and x.customer_id=d.customer_id 
        where x.first_order!=d.customer_pref_delivery_date
)
select (ROUND(
    y.immediate_orders / (y.immediate_orders + z.scheduled_orders) * 100,
    2
)) as immediate_percentage
from y
cross join z;