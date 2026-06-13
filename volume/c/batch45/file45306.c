// fichero 45306 -- macros y constantes
#define LIMITE_45306 45406
#define FACTOR_45306 2

int aplicar_limite45306(int valor) {
    if (valor > LIMITE_45306) return LIMITE_45306;
    return valor * FACTOR_45306;
}
