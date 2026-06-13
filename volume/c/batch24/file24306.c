// fichero 24306 -- macros y constantes
#define LIMITE_24306 24406
#define FACTOR_24306 2

int aplicar_limite24306(int valor) {
    if (valor > LIMITE_24306) return LIMITE_24306;
    return valor * FACTOR_24306;
}
