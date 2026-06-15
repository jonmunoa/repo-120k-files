// fichero 16598 -- macros y constantes -- MODIFICADO
#define LIMITE_16598 16798
#define FACTOR_16598 5

int aplicar_limite16598(int valor) {
    if (valor > LIMITE_16598) return LIMITE_16598;
    return valor * FACTOR_16598;
}
