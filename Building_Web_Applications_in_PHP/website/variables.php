<?php
	//strings
	$name = "Mauricio";
	$lastname = "Rada";
	$email = "mauri@gmail.com";

	//integers
	$age = 20;
	// So this is used like js because you don't need to declare the data type

	//floats
	$prom = 79.9;
	$price = 20.1;

	//boleans
	$online = true;
	// the boolean variables just could print 1, if is true and
	// zero if is false
	$employed = false;

	echo "Hi if im online is gonna appears a 1: {$online}<br> if 
		im unemployed is not gonna appears nothing: <br> 
	{$employed}";

	echo "Hello {$name}<br>";
	echo "Your lastname is {$lastname}<br>";
	echo "Your mail is {$email}<br>";
	echo "And your age is {$age}<br>";
	echo "The prom of the umsa is {$prom}<br>";

	echo "the price of your soda is \${$price}<br>";
		
	// This is how you coudl print a variables
	
	//then to use arithetic you must be first declare a 
	//variable to null
	$pizzas = 5;
	
	$total = null;

	$total = $pizzas * $price;

	echo "The total is \${$total}";
	

?>

