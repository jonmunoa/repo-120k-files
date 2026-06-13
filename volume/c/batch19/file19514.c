// fichero 19514 -- macros y constantes
#define LIMITE_19514 19614
#define FACTOR_19514 5

int aplicar_limite19514(int valor) {
    if (valor > LIMITE_19514) return LIMITE_19514;
    return valor * FACTOR_19514;
}
