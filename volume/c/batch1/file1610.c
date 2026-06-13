// fichero 1610 -- macros y constantes
#define LIMITE_1610 1710
#define FACTOR_1610 1

int aplicar_limite1610(int valor) {
    if (valor > LIMITE_1610) return LIMITE_1610;
    return valor * FACTOR_1610;
}
