// fichero 33306 -- macros y constantes
#define LIMITE_33306 33406
#define FACTOR_33306 2

int aplicar_limite33306(int valor) {
    if (valor > LIMITE_33306) return LIMITE_33306;
    return valor * FACTOR_33306;
}
