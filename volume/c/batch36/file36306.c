// fichero 36306 -- macros y constantes -- MODIFICADO
#define LIMITE_36306 36506
#define FACTOR_36306 3

int aplicar_limite36306(int valor) {
    if (valor > LIMITE_36306) return LIMITE_36306;
    return valor * FACTOR_36306;
}
