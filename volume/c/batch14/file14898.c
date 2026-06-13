// fichero 14898 -- macros y constantes
#define LIMITE_14898 14998
#define FACTOR_14898 4

int aplicar_limite14898(int valor) {
    if (valor > LIMITE_14898) return LIMITE_14898;
    return valor * FACTOR_14898;
}
