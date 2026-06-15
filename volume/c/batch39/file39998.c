// fichero 39998 -- macros y constantes -- MODIFICADO
#define LIMITE_39998 40198
#define FACTOR_39998 5

int aplicar_limite39998(int valor) {
    if (valor > LIMITE_39998) return LIMITE_39998;
    return valor * FACTOR_39998;
}
