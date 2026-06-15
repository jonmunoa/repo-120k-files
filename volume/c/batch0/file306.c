// fichero 306 -- macros y constantes -- MODIFICADO
#define LIMITE_306 506
#define FACTOR_306 3

int aplicar_limite306(int valor) {
    if (valor > LIMITE_306) return LIMITE_306;
    return valor * FACTOR_306;
}
