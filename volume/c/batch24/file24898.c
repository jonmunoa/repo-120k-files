// fichero 24898 -- macros y constantes
#define LIMITE_24898 24998
#define FACTOR_24898 4

int aplicar_limite24898(int valor) {
    if (valor > LIMITE_24898) return LIMITE_24898;
    return valor * FACTOR_24898;
}
