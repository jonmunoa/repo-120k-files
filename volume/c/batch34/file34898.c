// fichero 34898 -- macros y constantes -- MODIFICADO
#define LIMITE_34898 35098
#define FACTOR_34898 5

int aplicar_limite34898(int valor) {
    if (valor > LIMITE_34898) return LIMITE_34898;
    return valor * FACTOR_34898;
}
