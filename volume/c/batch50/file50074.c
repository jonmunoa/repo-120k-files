// fichero 50074 -- macros y constantes
#define LIMITE_50074 50174
#define FACTOR_50074 5

int aplicar_limite50074(int valor) {
    if (valor > LIMITE_50074) return LIMITE_50074;
    return valor * FACTOR_50074;
}
