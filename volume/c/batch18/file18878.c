// fichero 18878 -- macros y constantes -- MODIFICADO
#define LIMITE_18878 19078
#define FACTOR_18878 5

int aplicar_limite18878(int valor) {
    if (valor > LIMITE_18878) return LIMITE_18878;
    return valor * FACTOR_18878;
}
