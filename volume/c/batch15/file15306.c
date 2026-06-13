// fichero 15306 -- macros y constantes
#define LIMITE_15306 15406
#define FACTOR_15306 2

int aplicar_limite15306(int valor) {
    if (valor > LIMITE_15306) return LIMITE_15306;
    return valor * FACTOR_15306;
}
