// fichero 54306 -- macros y constantes
#define LIMITE_54306 54406
#define FACTOR_54306 2

int aplicar_limite54306(int valor) {
    if (valor > LIMITE_54306) return LIMITE_54306;
    return valor * FACTOR_54306;
}
