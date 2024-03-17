
function acharMenorPalavra(text,tam){
    let tamPalavra = text[0].length;
    let menorPalavra = "";
    let indicePalavra = 0;
    for(i=1;i<tam;i++){
        if (tamPalavra > text[i].length ){
            indicePalavra = i;
        } else if (tamPalavra == text[i].length){

        }
    }
    menorPalavra = text[indicePalavra];
    console.log("A menor palavra é " + menorPalavra);
}
let palavras = ["Mathias", "Capitão Nascimento", "Maluco do Pedaço", "Christiano", "Java"];
let tam = palavras.length;
acharMenorPalavra(palavras,tam);
  