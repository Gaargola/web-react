window.onscroll = function(){
    AddOrRemove()
};

var Nav = document.getElementById("barra");
var NavPosition = Nav.offsetTop;

function AddOrRemove(){
    if(window.pageYOffset >= NavPosition){
        Nav.classList.add("Paste");
    }
    else{
        Nav.classList.remove("Paste");
    }
}

const ini = document.getElementById('inicio');

ini.addEventListener('click', ()=>{
    
});