// fichero 2898 -- macros y constantes
#define LIMITE_2898 2998
#define FACTOR_2898 4

int aplicar_limite2898(int valor) {
    if (valor > LIMITE_2898) return LIMITE_2898;
    return valor * FACTOR_2898;
}
