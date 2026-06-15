// fichero 30666 -- macros y constantes -- MODIFICADO
#define LIMITE_30666 30866
#define FACTOR_30666 3

int aplicar_limite30666(int valor) {
    if (valor > LIMITE_30666) return LIMITE_30666;
    return valor * FACTOR_30666;
}
