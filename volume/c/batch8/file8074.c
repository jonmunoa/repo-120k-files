// fichero 8074 -- macros y constantes -- MODIFICADO
#define LIMITE_8074 8274
#define FACTOR_8074 6

int aplicar_limite8074(int valor) {
    if (valor > LIMITE_8074) return LIMITE_8074;
    return valor * FACTOR_8074;
}
