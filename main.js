var bottle = {
    isLoaded: false,
    do: function(){
        var x  = 3;
        console.log(x);
    },
    undo: function(x){
        console.log(x);
    }
}


var node = {
    value: this,
    next: null
}

var v = new node();


v.value = 344;

v.bottle.isLoaded = true;