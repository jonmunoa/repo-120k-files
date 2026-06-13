// fichero 32022 -- macros y constantes
#define LIMITE_32022 32122
#define FACTOR_32022 3

int aplicar_limite32022(int valor) {
    if (valor > LIMITE_32022) return LIMITE_32022;
    return valor * FACTOR_32022;
}
