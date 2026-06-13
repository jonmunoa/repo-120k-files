// fichero 1350 -- macros y constantes
#define LIMITE_1350 1450
#define FACTOR_1350 1

int aplicar_limite1350(int valor) {
    if (valor > LIMITE_1350) return LIMITE_1350;
    return valor * FACTOR_1350;
}
