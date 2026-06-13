// fichero 54414 -- macros y constantes
#define LIMITE_54414 54514
#define FACTOR_54414 5

int aplicar_limite54414(int valor) {
    if (valor > LIMITE_54414) return LIMITE_54414;
    return valor * FACTOR_54414;
}
