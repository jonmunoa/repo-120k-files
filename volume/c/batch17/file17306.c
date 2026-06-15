// fichero 17306 -- macros y constantes -- MODIFICADO
#define LIMITE_17306 17506
#define FACTOR_17306 3

int aplicar_limite17306(int valor) {
    if (valor > LIMITE_17306) return LIMITE_17306;
    return valor * FACTOR_17306;
}
