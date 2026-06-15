// fichero 17542 -- macros y constantes -- MODIFICADO
#define LIMITE_17542 17742
#define FACTOR_17542 4

int aplicar_limite17542(int valor) {
    if (valor > LIMITE_17542) return LIMITE_17542;
    return valor * FACTOR_17542;
}
