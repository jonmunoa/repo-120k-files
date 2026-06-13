// fichero 50862 -- macros y constantes
#define LIMITE_50862 50962
#define FACTOR_50862 3

int aplicar_limite50862(int valor) {
    if (valor > LIMITE_50862) return LIMITE_50862;
    return valor * FACTOR_50862;
}
