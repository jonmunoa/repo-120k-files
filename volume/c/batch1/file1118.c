// fichero 1118 -- macros y constantes -- MODIFICADO
#define LIMITE_1118 1318
#define FACTOR_1118 5

int aplicar_limite1118(int valor) {
    if (valor > LIMITE_1118) return LIMITE_1118;
    return valor * FACTOR_1118;
}
