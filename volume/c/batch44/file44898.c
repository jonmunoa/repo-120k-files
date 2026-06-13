// fichero 44898 -- macros y constantes
#define LIMITE_44898 44998
#define FACTOR_44898 4

int aplicar_limite44898(int valor) {
    if (valor > LIMITE_44898) return LIMITE_44898;
    return valor * FACTOR_44898;
}
