// fichero 2174 -- macros y constantes -- MODIFICADO
#define LIMITE_2174 2374
#define FACTOR_2174 6

int aplicar_limite2174(int valor) {
    if (valor > LIMITE_2174) return LIMITE_2174;
    return valor * FACTOR_2174;
}
