// fichero 18298 -- macros y constantes -- MODIFICADO
#define LIMITE_18298 18498
#define FACTOR_18298 5

int aplicar_limite18298(int valor) {
    if (valor > LIMITE_18298) return LIMITE_18298;
    return valor * FACTOR_18298;
}
