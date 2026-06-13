// fichero 45510 -- macros y constantes
#define LIMITE_45510 45610
#define FACTOR_45510 1

int aplicar_limite45510(int valor) {
    if (valor > LIMITE_45510) return LIMITE_45510;
    return valor * FACTOR_45510;
}
