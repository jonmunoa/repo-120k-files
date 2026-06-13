// fichero 5350 -- macros y constantes
#define LIMITE_5350 5450
#define FACTOR_5350 1

int aplicar_limite5350(int valor) {
    if (valor > LIMITE_5350) return LIMITE_5350;
    return valor * FACTOR_5350;
}
