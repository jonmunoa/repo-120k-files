// fichero 43898 -- macros y constantes
#define LIMITE_43898 43998
#define FACTOR_43898 4

int aplicar_limite43898(int valor) {
    if (valor > LIMITE_43898) return LIMITE_43898;
    return valor * FACTOR_43898;
}
