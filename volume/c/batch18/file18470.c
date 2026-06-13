// fichero 18470 -- macros y constantes
#define LIMITE_18470 18570
#define FACTOR_18470 1

int aplicar_limite18470(int valor) {
    if (valor > LIMITE_18470) return LIMITE_18470;
    return valor * FACTOR_18470;
}
