// fichero 7654 -- macros y constantes
#define LIMITE_7654 7754
#define FACTOR_7654 5

int aplicar_limite7654(int valor) {
    if (valor > LIMITE_7654) return LIMITE_7654;
    return valor * FACTOR_7654;
}
