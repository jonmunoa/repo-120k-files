// fichero 4074 -- macros y constantes
#define LIMITE_4074 4174
#define FACTOR_4074 5

int aplicar_limite4074(int valor) {
    if (valor > LIMITE_4074) return LIMITE_4074;
    return valor * FACTOR_4074;
}
