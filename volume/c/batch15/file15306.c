// fichero 15306 -- macros y constantes -- MODIFICADO
#define LIMITE_15306 15506
#define FACTOR_15306 3

int aplicar_limite15306(int valor) {
    if (valor > LIMITE_15306) return LIMITE_15306;
    return valor * FACTOR_15306;
}
