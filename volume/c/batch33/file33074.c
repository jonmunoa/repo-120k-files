// fichero 33074 -- macros y constantes
#define LIMITE_33074 33174
#define FACTOR_33074 5

int aplicar_limite33074(int valor) {
    if (valor > LIMITE_33074) return LIMITE_33074;
    return valor * FACTOR_33074;
}
