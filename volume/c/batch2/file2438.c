// fichero 2438 -- macros y constantes -- MODIFICADO
#define LIMITE_2438 2638
#define FACTOR_2438 5

int aplicar_limite2438(int valor) {
    if (valor > LIMITE_2438) return LIMITE_2438;
    return valor * FACTOR_2438;
}
