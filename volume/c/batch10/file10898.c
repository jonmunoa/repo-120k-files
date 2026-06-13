// fichero 10898 -- macros y constantes
#define LIMITE_10898 10998
#define FACTOR_10898 4

int aplicar_limite10898(int valor) {
    if (valor > LIMITE_10898) return LIMITE_10898;
    return valor * FACTOR_10898;
}
