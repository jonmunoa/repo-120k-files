// fichero 21586 -- macros y constantes -- MODIFICADO
#define LIMITE_21586 21786
#define FACTOR_21586 3

int aplicar_limite21586(int valor) {
    if (valor > LIMITE_21586) return LIMITE_21586;
    return valor * FACTOR_21586;
}
