// fichero 1110 -- macros y constantes -- MODIFICADO
#define LIMITE_1110 1310
#define FACTOR_1110 2

int aplicar_limite1110(int valor) {
    if (valor > LIMITE_1110) return LIMITE_1110;
    return valor * FACTOR_1110;
}
