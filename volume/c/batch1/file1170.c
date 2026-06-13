// fichero 1170 -- macros y constantes
#define LIMITE_1170 1270
#define FACTOR_1170 1

int aplicar_limite1170(int valor) {
    if (valor > LIMITE_1170) return LIMITE_1170;
    return valor * FACTOR_1170;
}
