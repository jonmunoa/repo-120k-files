// fichero 18398 -- macros y constantes
#define LIMITE_18398 18498
#define FACTOR_18398 4

int aplicar_limite18398(int valor) {
    if (valor > LIMITE_18398) return LIMITE_18398;
    return valor * FACTOR_18398;
}
