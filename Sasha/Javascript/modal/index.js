function init() {	
	var saveInfo = document.getElementById('save-info');
	var modal = document.getElementById('modal');
	// var container = document.getElementsByClassName('container')[0];
	var greeting = document.getElementById('greeting');
	var gender;
	var surname = document.getElementsByName('surname1')[0];
	var name = document.getElementsByName('name1')[0];
    function windowOnClick(event) {
        if (event.target === modal) {
            modal.style.visibility = "hidden";
        }
    }
    window.addEventListener("click", windowOnClick);
	saveInfo.onclick = function() {
		modal.style.visibility = "hidden";
		if (document.getElementById('female').checked) {
			gender = "Mrs. ";
		} else if (document.getElementById('male').checked) {
			gender = "Mr. ";
		}
		greeting.innerHTML = "Hi, " + gender + " " + name.value + " " + surname.value;
	}
	var saveInfo2 = document.getElementById("save-info2");
	var i = 0;
	var h = 1;
	saveInfo2.onclick = function() {
		var savedForms = document.getElementById("saved-forms");
		var div = document.createElement("div");
		var p1 = document.createElement("p");
		var p2 = document.createElement("p");
		var p3 = document.createElement("p");
		var p4 = document.createElement("p");
		var p5 = document.createElement("p");
		var p6 = document.createElement("p");
		savedForms.append(div);
		div.style.border = "2px solid #a3a3a3";
		div.style.padding = "5px";
		div.style.backgroundColor= "#fff";
		div.style.margin= "0 auto 15px auto";
		div.append(p1);
		p1.className = "name";
		document.getElementsByClassName("name")[i].innerHTML = "Name: " + document.getElementsByName("name")[0].value;
		div.append(p2);
		p2.className = "surname";
		document.getElementsByClassName("surname")[i].innerHTML = "Surname: " + document.getElementsByName("surname")[0].value;
		div.append(p3);
		p3.className = "phone";
		document.getElementsByClassName("phone")[i].innerHTML = "Phone: " + document.getElementsByName("phone")[0].value;
		div.append(p4);
		p4.className = "country";
		document.getElementsByClassName("country")[i].innerHTML = "Country: " + document.getElementsByName("country")[0].value;
		div.append(p5);
		p5.className = "city";
		document.getElementsByClassName("city")[i].innerHTML = "City: " + document.getElementsByName("city")[0].value;
		div.append(p6);
		p6.className = "address";
		document.getElementsByClassName("address")[i].innerHTML = "Address: " + document.getElementsByName("address")[0].value;
		i++;
		document.getElementsByName("address")[0].value = null;
		document.getElementsByName("city")[0].value = null;
		document.getElementsByName("country")[0].value = null;
		document.getElementsByName("phone")[0].value = null;
		document.getElementsByName("surname")[0].value = null;
		document.getElementsByName("name")[0].value = null;
		window.localStorage.setItem("div"+h, JSON.stringify(div));
		h++
	 }
 
}
window.onload = init;