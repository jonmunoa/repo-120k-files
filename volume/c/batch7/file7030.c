// fichero 7030 -- macros y constantes
#define LIMITE_7030 7130
#define FACTOR_7030 1

int aplicar_limite7030(int valor) {
    if (valor > LIMITE_7030) return LIMITE_7030;
    return valor * FACTOR_7030;
}
