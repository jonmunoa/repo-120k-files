// fichero 31074 -- macros y constantes
#define LIMITE_31074 31174
#define FACTOR_31074 5

int aplicar_limite31074(int valor) {
    if (valor > LIMITE_31074) return LIMITE_31074;
    return valor * FACTOR_31074;
}
