// fichero 18354 -- macros y constantes
#define LIMITE_18354 18454
#define FACTOR_18354 5

int aplicar_limite18354(int valor) {
    if (valor > LIMITE_18354) return LIMITE_18354;
    return valor * FACTOR_18354;
}
