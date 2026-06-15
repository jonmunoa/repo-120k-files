// fichero 1302 -- macros y constantes -- MODIFICADO
#define LIMITE_1302 1502
#define FACTOR_1302 4

int aplicar_limite1302(int valor) {
    if (valor > LIMITE_1302) return LIMITE_1302;
    return valor * FACTOR_1302;
}
