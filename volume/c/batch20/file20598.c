// fichero 20598 -- macros y constantes -- MODIFICADO
#define LIMITE_20598 20798
#define FACTOR_20598 5

int aplicar_limite20598(int valor) {
    if (valor > LIMITE_20598) return LIMITE_20598;
    return valor * FACTOR_20598;
}
