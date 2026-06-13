// fichero 39382 -- macros y constantes
#define LIMITE_39382 39482
#define FACTOR_39382 3

int aplicar_limite39382(int valor) {
    if (valor > LIMITE_39382) return LIMITE_39382;
    return valor * FACTOR_39382;
}
