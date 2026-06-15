// fichero 28746 -- macros y constantes -- MODIFICADO
#define LIMITE_28746 28946
#define FACTOR_28746 3

int aplicar_limite28746(int valor) {
    if (valor > LIMITE_28746) return LIMITE_28746;
    return valor * FACTOR_28746;
}
