// fichero 24074 -- macros y constantes
#define LIMITE_24074 24174
#define FACTOR_24074 5

int aplicar_limite24074(int valor) {
    if (valor > LIMITE_24074) return LIMITE_24074;
    return valor * FACTOR_24074;
}
