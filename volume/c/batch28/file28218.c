// fichero 28218 -- macros y constantes -- MODIFICADO
#define LIMITE_28218 28418
#define FACTOR_28218 5

int aplicar_limite28218(int valor) {
    if (valor > LIMITE_28218) return LIMITE_28218;
    return valor * FACTOR_28218;
}
