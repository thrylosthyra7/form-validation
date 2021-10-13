// function myFunction() {
//     var x = document.getElementById("myTopnav");
//     if (x.className === "topnav") {
//       x.className += " responsive";
//     } else {
//       x.className = "topnav";
//     }
//     var x = document.getElementById("home");
//     if (x.className === "text-left") {
//       x.className -= "text-left";
//     } else {
//       x.className = "text-left";
//     }
//   }


document.addEventListener("DOMContentLoaded", () => {
  const $password = document.querySelector("#password");
  let passwordCheck = false;
 

  $password.onblur =  function() {
    var Password = $password.value,
    errors = [];
    var passcheck = /^(?=.*[0-9])(?=.*[!@#$%^&*])[a-zA-Z0-9!@#$%^&*]{4,10}$/;
    if (Password.length < 4){
      errors.push("Password must contain more than 4 digits."); 
    } 
    if(Password.length > 12){
      errors.push("Password must contain less than 10 digits.");
    }
    if(!passcheck.test(Password)) {
      errors.push("Password must contain a special char and a number.");
    } 
    if (errors.length > 0) {
      alert(errors.join("\n"));
      passwordCheck =  false;
    }
    if (errors.length == 0){
    passwordCheck = true;
    }
  };


  
});
