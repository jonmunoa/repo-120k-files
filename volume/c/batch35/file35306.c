// fichero 35306 -- macros y constantes
#define LIMITE_35306 35406
#define FACTOR_35306 2

int aplicar_limite35306(int valor) {
    if (valor > LIMITE_35306) return LIMITE_35306;
    return valor * FACTOR_35306;
}
