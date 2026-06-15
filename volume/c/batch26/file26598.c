// fichero 26598 -- macros y constantes -- MODIFICADO
#define LIMITE_26598 26798
#define FACTOR_26598 5

int aplicar_limite26598(int valor) {
    if (valor > LIMITE_26598) return LIMITE_26598;
    return valor * FACTOR_26598;
}
