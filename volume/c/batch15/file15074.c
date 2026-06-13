// fichero 15074 -- macros y constantes
#define LIMITE_15074 15174
#define FACTOR_15074 5

int aplicar_limite15074(int valor) {
    if (valor > LIMITE_15074) return LIMITE_15074;
    return valor * FACTOR_15074;
}
