// fichero 17306 -- macros y constantes
#define LIMITE_17306 17406
#define FACTOR_17306 2

int aplicar_limite17306(int valor) {
    if (valor > LIMITE_17306) return LIMITE_17306;
    return valor * FACTOR_17306;
}
