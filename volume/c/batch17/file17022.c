// fichero 17022 -- macros y constantes
#define LIMITE_17022 17122
#define FACTOR_17022 3

int aplicar_limite17022(int valor) {
    if (valor > LIMITE_17022) return LIMITE_17022;
    return valor * FACTOR_17022;
}
