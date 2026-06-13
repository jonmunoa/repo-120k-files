// fichero 45250 -- macros y constantes
#define LIMITE_45250 45350
#define FACTOR_45250 1

int aplicar_limite45250(int valor) {
    if (valor > LIMITE_45250) return LIMITE_45250;
    return valor * FACTOR_45250;
}
