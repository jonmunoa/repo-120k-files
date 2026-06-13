// fichero 35862 -- macros y constantes
#define LIMITE_35862 35962
#define FACTOR_35862 3

int aplicar_limite35862(int valor) {
    if (valor > LIMITE_35862) return LIMITE_35862;
    return valor * FACTOR_35862;
}
