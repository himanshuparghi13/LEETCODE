select eu.unique_id , e.name from Employees as e left outer join EmployeeUNI as eu on e.id = eu.id ;
