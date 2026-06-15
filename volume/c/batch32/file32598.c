// fichero 32598 -- macros y constantes -- MODIFICADO
#define LIMITE_32598 32798
#define FACTOR_32598 5

int aplicar_limite32598(int valor) {
    if (valor > LIMITE_32598) return LIMITE_32598;
    return valor * FACTOR_32598;
}
