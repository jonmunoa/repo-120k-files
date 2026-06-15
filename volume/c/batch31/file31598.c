// fichero 31598 -- macros y constantes -- MODIFICADO
#define LIMITE_31598 31798
#define FACTOR_31598 5

int aplicar_limite31598(int valor) {
    if (valor > LIMITE_31598) return LIMITE_31598;
    return valor * FACTOR_31598;
}
