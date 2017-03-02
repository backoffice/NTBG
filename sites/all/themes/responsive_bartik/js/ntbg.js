jQuery(function($){
  $(".menu-toggle").click(function(){
    $(".submenu").toggleClass("active");
  });
});

jQuery(function($){
  $(".menu-toggle").click(function(){
    $( this ).toggleClass("up");
  });
});