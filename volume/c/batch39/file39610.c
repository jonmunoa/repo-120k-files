// fichero 39610 -- macros y constantes
#define LIMITE_39610 39710
#define FACTOR_39610 1

int aplicar_limite39610(int valor) {
    if (valor > LIMITE_39610) return LIMITE_39610;
    return valor * FACTOR_39610;
}
