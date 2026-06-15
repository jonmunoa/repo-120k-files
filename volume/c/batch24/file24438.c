// fichero 24438 -- macros y constantes -- MODIFICADO
#define LIMITE_24438 24638
#define FACTOR_24438 5

int aplicar_limite24438(int valor) {
    if (valor > LIMITE_24438) return LIMITE_24438;
    return valor * FACTOR_24438;
}
