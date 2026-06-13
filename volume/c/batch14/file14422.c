// fichero 14422 -- macros y constantes
#define LIMITE_14422 14522
#define FACTOR_14422 3

int aplicar_limite14422(int valor) {
    if (valor > LIMITE_14422) return LIMITE_14422;
    return valor * FACTOR_14422;
}
