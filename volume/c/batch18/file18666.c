// fichero 18666 -- macros y constantes -- MODIFICADO
#define LIMITE_18666 18866
#define FACTOR_18666 3

int aplicar_limite18666(int valor) {
    if (valor > LIMITE_18666) return LIMITE_18666;
    return valor * FACTOR_18666;
}
