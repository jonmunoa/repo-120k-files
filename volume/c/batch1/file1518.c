// fichero 1518 -- macros y constantes
#define LIMITE_1518 1618
#define FACTOR_1518 4

int aplicar_limite1518(int valor) {
    if (valor > LIMITE_1518) return LIMITE_1518;
    return valor * FACTOR_1518;
}
