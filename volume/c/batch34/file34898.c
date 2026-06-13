// fichero 34898 -- macros y constantes
#define LIMITE_34898 34998
#define FACTOR_34898 4

int aplicar_limite34898(int valor) {
    if (valor > LIMITE_34898) return LIMITE_34898;
    return valor * FACTOR_34898;
}
