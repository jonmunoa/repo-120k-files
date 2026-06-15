// fichero 18598 -- macros y constantes -- MODIFICADO
#define LIMITE_18598 18798
#define FACTOR_18598 5

int aplicar_limite18598(int valor) {
    if (valor > LIMITE_18598) return LIMITE_18598;
    return valor * FACTOR_18598;
}
