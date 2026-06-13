// fichero 6666 -- macros y constantes
#define LIMITE_6666 6766
#define FACTOR_6666 2

int aplicar_limite6666(int valor) {
    if (valor > LIMITE_6666) return LIMITE_6666;
    return valor * FACTOR_6666;
}
