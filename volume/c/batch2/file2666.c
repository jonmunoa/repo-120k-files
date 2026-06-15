// fichero 2666 -- macros y constantes -- MODIFICADO
#define LIMITE_2666 2866
#define FACTOR_2666 3

int aplicar_limite2666(int valor) {
    if (valor > LIMITE_2666) return LIMITE_2666;
    return valor * FACTOR_2666;
}
