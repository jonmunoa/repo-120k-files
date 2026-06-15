// fichero 3666 -- macros y constantes -- MODIFICADO
#define LIMITE_3666 3866
#define FACTOR_3666 3

int aplicar_limite3666(int valor) {
    if (valor > LIMITE_3666) return LIMITE_3666;
    return valor * FACTOR_3666;
}
