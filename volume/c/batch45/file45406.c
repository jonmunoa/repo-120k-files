// fichero 45406 -- macros y constantes
#define LIMITE_45406 45506
#define FACTOR_45406 2

int aplicar_limite45406(int valor) {
    if (valor > LIMITE_45406) return LIMITE_45406;
    return valor * FACTOR_45406;
}
