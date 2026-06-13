// fichero 41306 -- macros y constantes
#define LIMITE_41306 41406
#define FACTOR_41306 2

int aplicar_limite41306(int valor) {
    if (valor > LIMITE_41306) return LIMITE_41306;
    return valor * FACTOR_41306;
}
