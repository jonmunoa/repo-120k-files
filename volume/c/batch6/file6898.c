// fichero 6898 -- macros y constantes
#define LIMITE_6898 6998
#define FACTOR_6898 4

int aplicar_limite6898(int valor) {
    if (valor > LIMITE_6898) return LIMITE_6898;
    return valor * FACTOR_6898;
}
