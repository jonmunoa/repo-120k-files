// fichero 1710 -- macros y constantes
#define LIMITE_1710 1810
#define FACTOR_1710 1

int aplicar_limite1710(int valor) {
    if (valor > LIMITE_1710) return LIMITE_1710;
    return valor * FACTOR_1710;
}
