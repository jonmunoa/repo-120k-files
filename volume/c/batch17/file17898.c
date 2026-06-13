// fichero 17898 -- macros y constantes
#define LIMITE_17898 17998
#define FACTOR_17898 4

int aplicar_limite17898(int valor) {
    if (valor > LIMITE_17898) return LIMITE_17898;
    return valor * FACTOR_17898;
}
