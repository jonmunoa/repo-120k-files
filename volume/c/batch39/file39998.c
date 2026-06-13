// fichero 39998 -- macros y constantes
#define LIMITE_39998 40098
#define FACTOR_39998 4

int aplicar_limite39998(int valor) {
    if (valor > LIMITE_39998) return LIMITE_39998;
    return valor * FACTOR_39998;
}
