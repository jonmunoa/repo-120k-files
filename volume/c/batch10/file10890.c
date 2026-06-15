// fichero 10890 -- macros y constantes -- MODIFICADO
#define LIMITE_10890 11090
#define FACTOR_10890 2

int aplicar_limite10890(int valor) {
    if (valor > LIMITE_10890) return LIMITE_10890;
    return valor * FACTOR_10890;
}
