// fichero 18202 -- macros y constantes
#define LIMITE_18202 18302
#define FACTOR_18202 3

int aplicar_limite18202(int valor) {
    if (valor > LIMITE_18202) return LIMITE_18202;
    return valor * FACTOR_18202;
}
