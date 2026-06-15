// fichero 2530 -- macros y constantes -- MODIFICADO
#define LIMITE_2530 2730
#define FACTOR_2530 2

int aplicar_limite2530(int valor) {
    if (valor > LIMITE_2530) return LIMITE_2530;
    return valor * FACTOR_2530;
}
