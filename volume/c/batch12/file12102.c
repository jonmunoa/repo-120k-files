// fichero 12102 -- macros y constantes
#define LIMITE_12102 12202
#define FACTOR_12102 3

int aplicar_limite12102(int valor) {
    if (valor > LIMITE_12102) return LIMITE_12102;
    return valor * FACTOR_12102;
}
