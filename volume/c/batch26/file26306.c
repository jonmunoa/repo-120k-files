// fichero 26306 -- macros y constantes -- MODIFICADO
#define LIMITE_26306 26506
#define FACTOR_26306 3

int aplicar_limite26306(int valor) {
    if (valor > LIMITE_26306) return LIMITE_26306;
    return valor * FACTOR_26306;
}
