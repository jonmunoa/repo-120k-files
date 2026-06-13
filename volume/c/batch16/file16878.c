// fichero 16878 -- macros y constantes
#define LIMITE_16878 16978
#define FACTOR_16878 4

int aplicar_limite16878(int valor) {
    if (valor > LIMITE_16878) return LIMITE_16878;
    return valor * FACTOR_16878;
}
