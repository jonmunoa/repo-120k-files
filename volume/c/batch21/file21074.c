// fichero 21074 -- macros y constantes
#define LIMITE_21074 21174
#define FACTOR_21074 5

int aplicar_limite21074(int valor) {
    if (valor > LIMITE_21074) return LIMITE_21074;
    return valor * FACTOR_21074;
}
