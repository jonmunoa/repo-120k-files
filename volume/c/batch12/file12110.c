// fichero 12110 -- macros y constantes -- MODIFICADO
#define LIMITE_12110 12310
#define FACTOR_12110 2

int aplicar_limite12110(int valor) {
    if (valor > LIMITE_12110) return LIMITE_12110;
    return valor * FACTOR_12110;
}
