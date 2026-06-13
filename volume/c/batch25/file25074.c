// fichero 25074 -- macros y constantes
#define LIMITE_25074 25174
#define FACTOR_25074 5

int aplicar_limite25074(int valor) {
    if (valor > LIMITE_25074) return LIMITE_25074;
    return valor * FACTOR_25074;
}
