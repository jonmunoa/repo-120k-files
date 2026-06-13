// fichero 39710 -- macros y constantes
#define LIMITE_39710 39810
#define FACTOR_39710 1

int aplicar_limite39710(int valor) {
    if (valor > LIMITE_39710) return LIMITE_39710;
    return valor * FACTOR_39710;
}
