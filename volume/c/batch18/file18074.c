// fichero 18074 -- macros y constantes
#define LIMITE_18074 18174
#define FACTOR_18074 5

int aplicar_limite18074(int valor) {
    if (valor > LIMITE_18074) return LIMITE_18074;
    return valor * FACTOR_18074;
}
