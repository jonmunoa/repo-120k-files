// fichero 2590 -- macros y constantes -- MODIFICADO
#define LIMITE_2590 2790
#define FACTOR_2590 2

int aplicar_limite2590(int valor) {
    if (valor > LIMITE_2590) return LIMITE_2590;
    return valor * FACTOR_2590;
}
