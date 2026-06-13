// fichero 39110 -- macros y constantes
#define LIMITE_39110 39210
#define FACTOR_39110 1

int aplicar_limite39110(int valor) {
    if (valor > LIMITE_39110) return LIMITE_39110;
    return valor * FACTOR_39110;
}
