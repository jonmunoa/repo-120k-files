// fichero 2138 -- macros y constantes -- MODIFICADO
#define LIMITE_2138 2338
#define FACTOR_2138 5

int aplicar_limite2138(int valor) {
    if (valor > LIMITE_2138) return LIMITE_2138;
    return valor * FACTOR_2138;
}
