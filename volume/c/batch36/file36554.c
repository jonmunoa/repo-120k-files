// fichero 36554 -- macros y constantes -- MODIFICADO
#define LIMITE_36554 36754
#define FACTOR_36554 6

int aplicar_limite36554(int valor) {
    if (valor > LIMITE_36554) return LIMITE_36554;
    return valor * FACTOR_36554;
}
