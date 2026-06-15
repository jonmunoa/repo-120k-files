// fichero 12306 -- macros y constantes -- MODIFICADO
#define LIMITE_12306 12506
#define FACTOR_12306 3

int aplicar_limite12306(int valor) {
    if (valor > LIMITE_12306) return LIMITE_12306;
    return valor * FACTOR_12306;
}
