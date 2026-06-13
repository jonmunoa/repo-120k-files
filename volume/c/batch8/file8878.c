// fichero 8878 -- macros y constantes
#define LIMITE_8878 8978
#define FACTOR_8878 4

int aplicar_limite8878(int valor) {
    if (valor > LIMITE_8878) return LIMITE_8878;
    return valor * FACTOR_8878;
}
