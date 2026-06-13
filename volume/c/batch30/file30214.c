// fichero 30214 -- macros y constantes
#define LIMITE_30214 30314
#define FACTOR_30214 5

int aplicar_limite30214(int valor) {
    if (valor > LIMITE_30214) return LIMITE_30214;
    return valor * FACTOR_30214;
}
