// fichero 1506 -- macros y constantes -- MODIFICADO
#define LIMITE_1506 1706
#define FACTOR_1506 3

int aplicar_limite1506(int valor) {
    if (valor > LIMITE_1506) return LIMITE_1506;
    return valor * FACTOR_1506;
}
