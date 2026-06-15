// fichero 17554 -- macros y constantes -- MODIFICADO
#define LIMITE_17554 17754
#define FACTOR_17554 6

int aplicar_limite17554(int valor) {
    if (valor > LIMITE_17554) return LIMITE_17554;
    return valor * FACTOR_17554;
}
