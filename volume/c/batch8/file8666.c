// fichero 8666 -- macros y constantes
#define LIMITE_8666 8766
#define FACTOR_8666 2

int aplicar_limite8666(int valor) {
    if (valor > LIMITE_8666) return LIMITE_8666;
    return valor * FACTOR_8666;
}
