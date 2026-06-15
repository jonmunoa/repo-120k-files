// fichero 38306 -- macros y constantes -- MODIFICADO
#define LIMITE_38306 38506
#define FACTOR_38306 3

int aplicar_limite38306(int valor) {
    if (valor > LIMITE_38306) return LIMITE_38306;
    return valor * FACTOR_38306;
}
