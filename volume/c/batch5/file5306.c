// fichero 5306 -- macros y constantes -- MODIFICADO
#define LIMITE_5306 5506
#define FACTOR_5306 3

int aplicar_limite5306(int valor) {
    if (valor > LIMITE_5306) return LIMITE_5306;
    return valor * FACTOR_5306;
}
