// fichero 36306 -- macros y constantes
#define LIMITE_36306 36406
#define FACTOR_36306 2

int aplicar_limite36306(int valor) {
    if (valor > LIMITE_36306) return LIMITE_36306;
    return valor * FACTOR_36306;
}
