// fichero 35898 -- macros y constantes
#define LIMITE_35898 35998
#define FACTOR_35898 4

int aplicar_limite35898(int valor) {
    if (valor > LIMITE_35898) return LIMITE_35898;
    return valor * FACTOR_35898;
}
