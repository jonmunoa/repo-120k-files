// fichero 2238 -- macros y constantes -- MODIFICADO
#define LIMITE_2238 2438
#define FACTOR_2238 5

int aplicar_limite2238(int valor) {
    if (valor > LIMITE_2238) return LIMITE_2238;
    return valor * FACTOR_2238;
}
