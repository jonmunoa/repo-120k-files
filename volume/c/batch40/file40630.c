// fichero 40630 -- macros y constantes
#define LIMITE_40630 40730
#define FACTOR_40630 1

int aplicar_limite40630(int valor) {
    if (valor > LIMITE_40630) return LIMITE_40630;
    return valor * FACTOR_40630;
}
