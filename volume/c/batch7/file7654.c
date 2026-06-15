// fichero 7654 -- macros y constantes -- MODIFICADO
#define LIMITE_7654 7854
#define FACTOR_7654 6

int aplicar_limite7654(int valor) {
    if (valor > LIMITE_7654) return LIMITE_7654;
    return valor * FACTOR_7654;
}
