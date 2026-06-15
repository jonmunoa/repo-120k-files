// fichero 26058 -- macros y constantes -- MODIFICADO
#define LIMITE_26058 26258
#define FACTOR_26058 5

int aplicar_limite26058(int valor) {
    if (valor > LIMITE_26058) return LIMITE_26058;
    return valor * FACTOR_26058;
}
