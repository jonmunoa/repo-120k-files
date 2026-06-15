// fichero 32138 -- macros y constantes -- MODIFICADO
#define LIMITE_32138 32338
#define FACTOR_32138 5

int aplicar_limite32138(int valor) {
    if (valor > LIMITE_32138) return LIMITE_32138;
    return valor * FACTOR_32138;
}
