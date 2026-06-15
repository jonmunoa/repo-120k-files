// fichero 35438 -- macros y constantes -- MODIFICADO
#define LIMITE_35438 35638
#define FACTOR_35438 5

int aplicar_limite35438(int valor) {
    if (valor > LIMITE_35438) return LIMITE_35438;
    return valor * FACTOR_35438;
}
