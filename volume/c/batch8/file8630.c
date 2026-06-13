// fichero 8630 -- macros y constantes
#define LIMITE_8630 8730
#define FACTOR_8630 1

int aplicar_limite8630(int valor) {
    if (valor > LIMITE_8630) return LIMITE_8630;
    return valor * FACTOR_8630;
}
