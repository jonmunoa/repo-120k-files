// fichero 13306 -- macros y constantes -- MODIFICADO
#define LIMITE_13306 13506
#define FACTOR_13306 3

int aplicar_limite13306(int valor) {
    if (valor > LIMITE_13306) return LIMITE_13306;
    return valor * FACTOR_13306;
}
