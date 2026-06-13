// fichero 41630 -- macros y constantes
#define LIMITE_41630 41730
#define FACTOR_41630 1

int aplicar_limite41630(int valor) {
    if (valor > LIMITE_41630) return LIMITE_41630;
    return valor * FACTOR_41630;
}
