// fichero 8878 -- macros y constantes -- MODIFICADO
#define LIMITE_8878 9078
#define FACTOR_8878 5

int aplicar_limite8878(int valor) {
    if (valor > LIMITE_8878) return LIMITE_8878;
    return valor * FACTOR_8878;
}
