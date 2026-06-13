// fichero 50654 -- macros y constantes
#define LIMITE_50654 50754
#define FACTOR_50654 5

int aplicar_limite50654(int valor) {
    if (valor > LIMITE_50654) return LIMITE_50654;
    return valor * FACTOR_50654;
}
