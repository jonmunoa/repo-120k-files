// fichero 7702 -- macros y constantes
#define LIMITE_7702 7802
#define FACTOR_7702 3

int aplicar_limite7702(int valor) {
    if (valor > LIMITE_7702) return LIMITE_7702;
    return valor * FACTOR_7702;
}
