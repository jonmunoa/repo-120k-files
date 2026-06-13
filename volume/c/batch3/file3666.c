// fichero 3666 -- macros y constantes
#define LIMITE_3666 3766
#define FACTOR_3666 2

int aplicar_limite3666(int valor) {
    if (valor > LIMITE_3666) return LIMITE_3666;
    return valor * FACTOR_3666;
}
