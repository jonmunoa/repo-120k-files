// fichero 11898 -- macros y constantes
#define LIMITE_11898 11998
#define FACTOR_11898 4

int aplicar_limite11898(int valor) {
    if (valor > LIMITE_11898) return LIMITE_11898;
    return valor * FACTOR_11898;
}
