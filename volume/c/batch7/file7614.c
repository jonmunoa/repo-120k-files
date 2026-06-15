// fichero 7614 -- macros y constantes -- MODIFICADO
#define LIMITE_7614 7814
#define FACTOR_7614 6

int aplicar_limite7614(int valor) {
    if (valor > LIMITE_7614) return LIMITE_7614;
    return valor * FACTOR_7614;
}
