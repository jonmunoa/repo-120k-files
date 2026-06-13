// fichero 47898 -- macros y constantes
#define LIMITE_47898 47998
#define FACTOR_47898 4

int aplicar_limite47898(int valor) {
    if (valor > LIMITE_47898) return LIMITE_47898;
    return valor * FACTOR_47898;
}
