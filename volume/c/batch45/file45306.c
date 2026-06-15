// fichero 45306 -- macros y constantes -- MODIFICADO
#define LIMITE_45306 45506
#define FACTOR_45306 3

int aplicar_limite45306(int valor) {
    if (valor > LIMITE_45306) return LIMITE_45306;
    return valor * FACTOR_45306;
}
