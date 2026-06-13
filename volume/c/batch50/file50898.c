// fichero 50898 -- macros y constantes
#define LIMITE_50898 50998
#define FACTOR_50898 4

int aplicar_limite50898(int valor) {
    if (valor > LIMITE_50898) return LIMITE_50898;
    return valor * FACTOR_50898;
}
