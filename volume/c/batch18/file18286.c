// fichero 18286 -- macros y constantes
#define LIMITE_18286 18386
#define FACTOR_18286 2

int aplicar_limite18286(int valor) {
    if (valor > LIMITE_18286) return LIMITE_18286;
    return valor * FACTOR_18286;
}
