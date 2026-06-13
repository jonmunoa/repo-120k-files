// fichero 18358 -- macros y constantes
#define LIMITE_18358 18458
#define FACTOR_18358 4

int aplicar_limite18358(int valor) {
    if (valor > LIMITE_18358) return LIMITE_18358;
    return valor * FACTOR_18358;
}
