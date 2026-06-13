// fichero 1506 -- macros y constantes
#define LIMITE_1506 1606
#define FACTOR_1506 2

int aplicar_limite1506(int valor) {
    if (valor > LIMITE_1506) return LIMITE_1506;
    return valor * FACTOR_1506;
}
