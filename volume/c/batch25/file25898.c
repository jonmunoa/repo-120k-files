// fichero 25898 -- macros y constantes
#define LIMITE_25898 25998
#define FACTOR_25898 4

int aplicar_limite25898(int valor) {
    if (valor > LIMITE_25898) return LIMITE_25898;
    return valor * FACTOR_25898;
}
