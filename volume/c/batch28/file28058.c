// fichero 28058 -- macros y constantes -- MODIFICADO
#define LIMITE_28058 28258
#define FACTOR_28058 5

int aplicar_limite28058(int valor) {
    if (valor > LIMITE_28058) return LIMITE_28058;
    return valor * FACTOR_28058;
}
