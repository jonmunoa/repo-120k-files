// fichero 1242 -- macros y constantes -- MODIFICADO
#define LIMITE_1242 1442
#define FACTOR_1242 4

int aplicar_limite1242(int valor) {
    if (valor > LIMITE_1242) return LIMITE_1242;
    return valor * FACTOR_1242;
}
