// fichero 10158 -- macros y constantes
#define LIMITE_10158 10258
#define FACTOR_10158 4

int aplicar_limite10158(int valor) {
    if (valor > LIMITE_10158) return LIMITE_10158;
    return valor * FACTOR_10158;
}
