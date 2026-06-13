// fichero 26898 -- macros y constantes
#define LIMITE_26898 26998
#define FACTOR_26898 4

int aplicar_limite26898(int valor) {
    if (valor > LIMITE_26898) return LIMITE_26898;
    return valor * FACTOR_26898;
}
