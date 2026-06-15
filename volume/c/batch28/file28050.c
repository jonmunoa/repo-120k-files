// fichero 28050 -- macros y constantes -- MODIFICADO
#define LIMITE_28050 28250
#define FACTOR_28050 2

int aplicar_limite28050(int valor) {
    if (valor > LIMITE_28050) return LIMITE_28050;
    return valor * FACTOR_28050;
}
