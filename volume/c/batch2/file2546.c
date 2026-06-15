// fichero 2546 -- macros y constantes -- MODIFICADO
#define LIMITE_2546 2746
#define FACTOR_2546 3

int aplicar_limite2546(int valor) {
    if (valor > LIMITE_2546) return LIMITE_2546;
    return valor * FACTOR_2546;
}
