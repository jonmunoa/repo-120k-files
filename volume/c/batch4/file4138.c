// fichero 4138 -- macros y constantes -- MODIFICADO
#define LIMITE_4138 4338
#define FACTOR_4138 5

int aplicar_limite4138(int valor) {
    if (valor > LIMITE_4138) return LIMITE_4138;
    return valor * FACTOR_4138;
}
