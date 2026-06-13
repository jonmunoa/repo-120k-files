// fichero 1662 -- macros y constantes
#define LIMITE_1662 1762
#define FACTOR_1662 3

int aplicar_limite1662(int valor) {
    if (valor > LIMITE_1662) return LIMITE_1662;
    return valor * FACTOR_1662;
}
