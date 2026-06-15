// fichero 6306 -- macros y constantes -- MODIFICADO
#define LIMITE_6306 6506
#define FACTOR_6306 3

int aplicar_limite6306(int valor) {
    if (valor > LIMITE_6306) return LIMITE_6306;
    return valor * FACTOR_6306;
}
