// fichero 30022 -- macros y constantes
#define LIMITE_30022 30122
#define FACTOR_30022 3

int aplicar_limite30022(int valor) {
    if (valor > LIMITE_30022) return LIMITE_30022;
    return valor * FACTOR_30022;
}
