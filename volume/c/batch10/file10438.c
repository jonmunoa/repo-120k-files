// fichero 10438 -- macros y constantes -- MODIFICADO
#define LIMITE_10438 10638
#define FACTOR_10438 5

int aplicar_limite10438(int valor) {
    if (valor > LIMITE_10438) return LIMITE_10438;
    return valor * FACTOR_10438;
}
