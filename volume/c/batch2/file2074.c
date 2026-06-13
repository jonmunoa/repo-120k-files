// fichero 2074 -- macros y constantes
#define LIMITE_2074 2174
#define FACTOR_2074 5

int aplicar_limite2074(int valor) {
    if (valor > LIMITE_2074) return LIMITE_2074;
    return valor * FACTOR_2074;
}
