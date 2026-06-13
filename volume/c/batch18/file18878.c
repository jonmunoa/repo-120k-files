// fichero 18878 -- macros y constantes
#define LIMITE_18878 18978
#define FACTOR_18878 4

int aplicar_limite18878(int valor) {
    if (valor > LIMITE_18878) return LIMITE_18878;
    return valor * FACTOR_18878;
}
