// fichero 14494 -- macros y constantes -- MODIFICADO
#define LIMITE_14494 14694
#define FACTOR_14494 6

int aplicar_limite14494(int valor) {
    if (valor > LIMITE_14494) return LIMITE_14494;
    return valor * FACTOR_14494;
}
