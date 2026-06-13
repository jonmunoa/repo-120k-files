// fichero 13306 -- macros y constantes
#define LIMITE_13306 13406
#define FACTOR_13306 2

int aplicar_limite13306(int valor) {
    if (valor > LIMITE_13306) return LIMITE_13306;
    return valor * FACTOR_13306;
}
