// fichero 14022 -- macros y constantes
#define LIMITE_14022 14122
#define FACTOR_14022 3

int aplicar_limite14022(int valor) {
    if (valor > LIMITE_14022) return LIMITE_14022;
    return valor * FACTOR_14022;
}
