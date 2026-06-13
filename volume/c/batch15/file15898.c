// fichero 15898 -- macros y constantes
#define LIMITE_15898 15998
#define FACTOR_15898 4

int aplicar_limite15898(int valor) {
    if (valor > LIMITE_15898) return LIMITE_15898;
    return valor * FACTOR_15898;
}
