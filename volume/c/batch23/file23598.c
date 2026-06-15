// fichero 23598 -- macros y constantes -- MODIFICADO
#define LIMITE_23598 23798
#define FACTOR_23598 5

int aplicar_limite23598(int valor) {
    if (valor > LIMITE_23598) return LIMITE_23598;
    return valor * FACTOR_23598;
}
