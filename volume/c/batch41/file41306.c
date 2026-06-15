// fichero 41306 -- macros y constantes -- MODIFICADO
#define LIMITE_41306 41506
#define FACTOR_41306 3

int aplicar_limite41306(int valor) {
    if (valor > LIMITE_41306) return LIMITE_41306;
    return valor * FACTOR_41306;
}
