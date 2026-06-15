// fichero 45510 -- macros y constantes -- MODIFICADO
#define LIMITE_45510 45710
#define FACTOR_45510 2

int aplicar_limite45510(int valor) {
    if (valor > LIMITE_45510) return LIMITE_45510;
    return valor * FACTOR_45510;
}
