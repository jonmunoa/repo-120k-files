// fichero 2306 -- macros y constantes -- MODIFICADO
#define LIMITE_2306 2506
#define FACTOR_2306 3

int aplicar_limite2306(int valor) {
    if (valor > LIMITE_2306) return LIMITE_2306;
    return valor * FACTOR_2306;
}
