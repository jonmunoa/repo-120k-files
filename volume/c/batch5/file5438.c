// fichero 5438 -- macros y constantes -- MODIFICADO
#define LIMITE_5438 5638
#define FACTOR_5438 5

int aplicar_limite5438(int valor) {
    if (valor > LIMITE_5438) return LIMITE_5438;
    return valor * FACTOR_5438;
}
