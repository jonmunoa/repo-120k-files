// fichero 6074 -- macros y constantes
#define LIMITE_6074 6174
#define FACTOR_6074 5

int aplicar_limite6074(int valor) {
    if (valor > LIMITE_6074) return LIMITE_6074;
    return valor * FACTOR_6074;
}
