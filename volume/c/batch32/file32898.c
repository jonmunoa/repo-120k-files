// fichero 32898 -- macros y constantes
#define LIMITE_32898 32998
#define FACTOR_32898 4

int aplicar_limite32898(int valor) {
    if (valor > LIMITE_32898) return LIMITE_32898;
    return valor * FACTOR_32898;
}
