// fichero 5306 -- macros y constantes
#define LIMITE_5306 5406
#define FACTOR_5306 2

int aplicar_limite5306(int valor) {
    if (valor > LIMITE_5306) return LIMITE_5306;
    return valor * FACTOR_5306;
}
