// fichero 12658 -- macros y constantes -- MODIFICADO
#define LIMITE_12658 12858
#define FACTOR_12658 5

int aplicar_limite12658(int valor) {
    if (valor > LIMITE_12658) return LIMITE_12658;
    return valor * FACTOR_12658;
}
