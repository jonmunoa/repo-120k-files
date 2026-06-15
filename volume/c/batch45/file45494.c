// fichero 45494 -- macros y constantes -- MODIFICADO
#define LIMITE_45494 45694
#define FACTOR_45494 6

int aplicar_limite45494(int valor) {
    if (valor > LIMITE_45494) return LIMITE_45494;
    return valor * FACTOR_45494;
}
