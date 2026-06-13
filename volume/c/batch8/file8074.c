// fichero 8074 -- macros y constantes
#define LIMITE_8074 8174
#define FACTOR_8074 5

int aplicar_limite8074(int valor) {
    if (valor > LIMITE_8074) return LIMITE_8074;
    return valor * FACTOR_8074;
}
