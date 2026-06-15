// fichero 4306 -- macros y constantes -- MODIFICADO
#define LIMITE_4306 4506
#define FACTOR_4306 3

int aplicar_limite4306(int valor) {
    if (valor > LIMITE_4306) return LIMITE_4306;
    return valor * FACTOR_4306;
}
