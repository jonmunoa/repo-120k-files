// fichero 46898 -- macros y constantes
#define LIMITE_46898 46998
#define FACTOR_46898 4

int aplicar_limite46898(int valor) {
    if (valor > LIMITE_46898) return LIMITE_46898;
    return valor * FACTOR_46898;
}
