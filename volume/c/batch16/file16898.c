// fichero 16898 -- macros y constantes
#define LIMITE_16898 16998
#define FACTOR_16898 4

int aplicar_limite16898(int valor) {
    if (valor > LIMITE_16898) return LIMITE_16898;
    return valor * FACTOR_16898;
}
