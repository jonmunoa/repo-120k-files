// fichero 5022 -- macros y constantes
#define LIMITE_5022 5122
#define FACTOR_5022 3

int aplicar_limite5022(int valor) {
    if (valor > LIMITE_5022) return LIMITE_5022;
    return valor * FACTOR_5022;
}
