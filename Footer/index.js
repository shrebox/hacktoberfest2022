/* Pre-document load */ 
	/* Preload */ 
	$("body").addClass("js"); 

/* Post-document load */ 
	$(document).ready(function(){ 
		/* Events */ 
			$("#header").append("<div id='hamburger'>Menu</div>"); 
			$("#hamburger").click(function(event){ 
				$("#hamburger").toggleClass("active"); 
				$("#navigation").toggleClass("active"); 
				$("#close").toggleClass("active"); 
				event.preventDefault(); 
			}); 
			$("body").append("<div id='close'>Close</div>"); 
			$("#close").click(function(event){ 
				$("#hamburger").removeClass("active"); 
				$("#navigation").removeClass("active"); 
				$("#close").removeClass("active"); 
				event.preventDefault(); 
			}); 
			$("#page > ul > li > a").click(function(event){ 
				$("#splash").toggle(); 
				event.preventDefault(); 
			}); 
	}); 
