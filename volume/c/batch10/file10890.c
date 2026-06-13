// fichero 10890 -- macros y constantes
#define LIMITE_10890 10990
#define FACTOR_10890 1

int aplicar_limite10890(int valor) {
    if (valor > LIMITE_10890) return LIMITE_10890;
    return valor * FACTOR_10890;
}
