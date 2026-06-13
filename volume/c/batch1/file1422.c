// fichero 1422 -- macros y constantes
#define LIMITE_1422 1522
#define FACTOR_1422 3

int aplicar_limite1422(int valor) {
    if (valor > LIMITE_1422) return LIMITE_1422;
    return valor * FACTOR_1422;
}
