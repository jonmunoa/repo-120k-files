// fichero 10022 -- macros y constantes
#define LIMITE_10022 10122
#define FACTOR_10022 3

int aplicar_limite10022(int valor) {
    if (valor > LIMITE_10022) return LIMITE_10022;
    return valor * FACTOR_10022;
}
