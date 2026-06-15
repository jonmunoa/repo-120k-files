// fichero 42598 -- macros y constantes -- MODIFICADO
#define LIMITE_42598 42798
#define FACTOR_42598 5

int aplicar_limite42598(int valor) {
    if (valor > LIMITE_42598) return LIMITE_42598;
    return valor * FACTOR_42598;
}
