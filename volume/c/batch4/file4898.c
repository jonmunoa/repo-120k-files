// fichero 4898 -- macros y constantes
#define LIMITE_4898 4998
#define FACTOR_4898 4

int aplicar_limite4898(int valor) {
    if (valor > LIMITE_4898) return LIMITE_4898;
    return valor * FACTOR_4898;
}
