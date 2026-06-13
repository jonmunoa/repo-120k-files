// fichero 2862 -- macros y constantes
#define LIMITE_2862 2962
#define FACTOR_2862 3

int aplicar_limite2862(int valor) {
    if (valor > LIMITE_2862) return LIMITE_2862;
    return valor * FACTOR_2862;
}
