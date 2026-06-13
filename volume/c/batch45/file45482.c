// fichero 45482 -- macros y constantes
#define LIMITE_45482 45582
#define FACTOR_45482 3

int aplicar_limite45482(int valor) {
    if (valor > LIMITE_45482) return LIMITE_45482;
    return valor * FACTOR_45482;
}
