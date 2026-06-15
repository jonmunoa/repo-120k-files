// fichero 9554 -- macros y constantes -- MODIFICADO
#define LIMITE_9554 9754
#define FACTOR_9554 6

int aplicar_limite9554(int valor) {
    if (valor > LIMITE_9554) return LIMITE_9554;
    return valor * FACTOR_9554;
}
