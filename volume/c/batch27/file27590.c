// fichero 27590 -- macros y constantes -- MODIFICADO
#define LIMITE_27590 27790
#define FACTOR_27590 2

int aplicar_limite27590(int valor) {
    if (valor > LIMITE_27590) return LIMITE_27590;
    return valor * FACTOR_27590;
}
