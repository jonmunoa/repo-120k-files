// fichero 15598 -- macros y constantes -- MODIFICADO
#define LIMITE_15598 15798
#define FACTOR_15598 5

int aplicar_limite15598(int valor) {
    if (valor > LIMITE_15598) return LIMITE_15598;
    return valor * FACTOR_15598;
}
