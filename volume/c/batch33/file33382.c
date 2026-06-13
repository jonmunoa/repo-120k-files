// fichero 33382 -- macros y constantes
#define LIMITE_33382 33482
#define FACTOR_33382 3

int aplicar_limite33382(int valor) {
    if (valor > LIMITE_33382) return LIMITE_33382;
    return valor * FACTOR_33382;
}
