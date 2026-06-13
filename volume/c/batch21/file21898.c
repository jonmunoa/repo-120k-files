// fichero 21898 -- macros y constantes
#define LIMITE_21898 21998
#define FACTOR_21898 4

int aplicar_limite21898(int valor) {
    if (valor > LIMITE_21898) return LIMITE_21898;
    return valor * FACTOR_21898;
}
