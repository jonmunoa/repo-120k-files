// fichero 24598 -- macros y constantes -- MODIFICADO
#define LIMITE_24598 24798
#define FACTOR_24598 5

int aplicar_limite24598(int valor) {
    if (valor > LIMITE_24598) return LIMITE_24598;
    return valor * FACTOR_24598;
}
