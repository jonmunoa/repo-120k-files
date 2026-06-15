// fichero 12102 -- macros y constantes -- MODIFICADO
#define LIMITE_12102 12302
#define FACTOR_12102 4

int aplicar_limite12102(int valor) {
    if (valor > LIMITE_12102) return LIMITE_12102;
    return valor * FACTOR_12102;
}
