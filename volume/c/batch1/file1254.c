// fichero 1254 -- macros y constantes
#define LIMITE_1254 1354
#define FACTOR_1254 5

int aplicar_limite1254(int valor) {
    if (valor > LIMITE_1254) return LIMITE_1254;
    return valor * FACTOR_1254;
}
