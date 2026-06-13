// fichero 23022 -- macros y constantes
#define LIMITE_23022 23122
#define FACTOR_23022 3

int aplicar_limite23022(int valor) {
    if (valor > LIMITE_23022) return LIMITE_23022;
    return valor * FACTOR_23022;
}
