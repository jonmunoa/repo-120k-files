// fichero 48862 -- macros y constantes
#define LIMITE_48862 48962
#define FACTOR_48862 3

int aplicar_limite48862(int valor) {
    if (valor > LIMITE_48862) return LIMITE_48862;
    return valor * FACTOR_48862;
}
