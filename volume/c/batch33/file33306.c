// fichero 33306 -- macros y constantes -- MODIFICADO
#define LIMITE_33306 33506
#define FACTOR_33306 3

int aplicar_limite33306(int valor) {
    if (valor > LIMITE_33306) return LIMITE_33306;
    return valor * FACTOR_33306;
}
