// fichero 1214 -- macros y constantes
#define LIMITE_1214 1314
#define FACTOR_1214 5

int aplicar_limite1214(int valor) {
    if (valor > LIMITE_1214) return LIMITE_1214;
    return valor * FACTOR_1214;
}
