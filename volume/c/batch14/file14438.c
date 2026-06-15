// fichero 14438 -- macros y constantes -- MODIFICADO
#define LIMITE_14438 14638
#define FACTOR_14438 5

int aplicar_limite14438(int valor) {
    if (valor > LIMITE_14438) return LIMITE_14438;
    return valor * FACTOR_14438;
}
