// fichero 13630 -- macros y constantes
#define LIMITE_13630 13730
#define FACTOR_13630 1

int aplicar_limite13630(int valor) {
    if (valor > LIMITE_13630) return LIMITE_13630;
    return valor * FACTOR_13630;
}
