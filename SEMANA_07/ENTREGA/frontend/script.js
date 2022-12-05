// ================= GLOBAL ==================
export var player = true;
var p1 = 0;
var p2 = 0;
var rightAnswer = 0;
var btnAnswer;
var count = 0;
var value1 = 0;
var value2 = 2;
var timer = 0;

function timer1(){
        timer += 1;
        console.log(timer);
}

// ============== EQUATION ==================
function operation(){
    setTimeout(function() {
        if(timer < 10){
            var btn1 = document.getElementById("option0");
            var btn2 = document.getElementById("option1");
            var btn3 = document.getElementById("option2");
            var textCount = document.getElementById("countID");
            var answer;

            btn1.style.backgroundColor = "#ffd9fc"
            btn2.style.backgroundColor = "#ffd9fc"
            btn3.style.backgroundColor = "#ffd9fc"
            btn1.textContent = Math.floor(Math.random() * 100);
            btn2.textContent = Math.floor(Math.random()* 100);
            btn3.textContent = Math.floor(Math.random()*100);

            value1 = Math.floor(Math.random() * 21);
            value2 = Math.floor(Math.random()*21);
            count = Math.floor(Math.random()*3);
            btnAnswer = Math.floor(Math.random()*2);

        if(count == 0){
            rightAnswer = value1 + value2;
            textCount.textContent = value1 + "+" + value2 + "=";
            answer = document.getElementById("option"+btnAnswer);
            answer.textContent = rightAnswer;
        }
        else if(count == 1){
            rightAnswer = value1 - value2;
            textCount.textContent = value1 + "-" + value2 + "=";
            answer = document.getElementById("option"+btnAnswer);
            answer.textContent = rightAnswer;
        }
        else if(count == 2 && value2 != 0 ){
            rightAnswer = value1 / value2;
            textCount.textContent = value1 + "/" + value2 + "=";
            answer = document.getElementById("option"+btnAnswer);
            answer.textContent = rightAnswer.toFixed(2);
        }
        else{
            rightAnswer = value1 * value2;
            textCount.textContent = value1 + "x" + value2 + "=";
            answer = document.getElementById("option"+btnAnswer);
            answer.textContent = rightAnswer;
        }
        timer1();
    }
    else{
        document.getElementById("popup").style.display = "block";
        document.getElementById("score").textContent = p1 + "x" + p2;
        if(p1 > p2){
            document.getElementById("winner").textContent = "Vitória de Player 1";
        }
        else if (p1 == p2){
            document.getElementById("winner").textContent = "Empate!";
        }
        else{
            document.getElementById("winner").textContent = "Vitória de Player 2";
        }
    }
    }, 1000);
}

// ================ RIGHT ANSWER ====================
function answer(idBtn){
    var btn = document.getElementById(idBtn);
        if(idBtn == "option"+btnAnswer && player == true){
            btn.style.backgroundColor = "#14b5b2";
            p1 += 1;    
            player = !player;
            document.getElementById("scoreboard1").textContent = p1 + "x" + p2;
            document.getElementById("playerTime").textContent = "PLAYER 2";
            operation();
        }
        else if(idBtn != "option"+btnAnswer && player == true){
            btn.style.backgroundColor = "#ec7c7a";
            player = !player;
            document.getElementById("scoreboard1").textContent = p1 + "x" + p2;
            document.getElementById("playerTime").textContent = "PLAYER 2";
            operation();
        }
        else if(idBtn != "option"+btnAnswer && player == false){
            btn.style.backgroundColor = "#ec7c7a";
            player = !player;
            document.getElementById("scoreboard1").textContent = p1 + "x" + p2;
            document.getElementById("playerTime").textContent = "PLAYER 1";
            operation();
        }
        else if(idBtn == "option"+btnAnswer && player == false){
            btn.style.backgroundColor = "#14b5b2";
            p2 += 1
            player = !player;
            document.getElementById("scoreboard1").textContent = p1 + "x" + p2;
            document.getElementById("playerTime").textContent = "PLAYER 1";
            operation();
        }
        else{
            tn.style.backgroundColor = "#14b5b2";
            p2 += 1
            player = !player;
            document.getElementById("scoreboard1").textContent = p1 + "x" + p2;
            document.getElementById("playerTime").textContent = "PLAYER 1";
            operation();
        }
    }

// ================ GAME ==================
    function game(){
        p1 = 0;
        p2 = 0;
        player = true;
        timer = 0;
        document.getElementById("popup").style.display = "none";
        document.getElementById("scoreboard1").textContent = p1 + "x" + p2;
        operation();
        }
