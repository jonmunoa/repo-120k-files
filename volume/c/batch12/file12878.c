// fichero 12878 -- macros y constantes
#define LIMITE_12878 12978
#define FACTOR_12878 4

int aplicar_limite12878(int valor) {
    if (valor > LIMITE_12878) return LIMITE_12878;
    return valor * FACTOR_12878;
}
