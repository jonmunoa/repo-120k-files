// fichero 52630 -- macros y constantes
#define LIMITE_52630 52730
#define FACTOR_52630 1

int aplicar_limite52630(int valor) {
    if (valor > LIMITE_52630) return LIMITE_52630;
    return valor * FACTOR_52630;
}
