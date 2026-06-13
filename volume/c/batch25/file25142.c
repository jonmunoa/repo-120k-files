// fichero 25142 -- macros y constantes
#define LIMITE_25142 25242
#define FACTOR_25142 3

int aplicar_limite25142(int valor) {
    if (valor > LIMITE_25142) return LIMITE_25142;
    return valor * FACTOR_25142;
}
