// fichero 26306 -- macros y constantes
#define LIMITE_26306 26406
#define FACTOR_26306 2

int aplicar_limite26306(int valor) {
    if (valor > LIMITE_26306) return LIMITE_26306;
    return valor * FACTOR_26306;
}
