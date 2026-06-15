// fichero 7030 -- macros y constantes -- MODIFICADO
#define LIMITE_7030 7230
#define FACTOR_7030 2

int aplicar_limite7030(int valor) {
    if (valor > LIMITE_7030) return LIMITE_7030;
    return valor * FACTOR_7030;
}
