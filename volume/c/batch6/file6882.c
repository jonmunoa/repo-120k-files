// fichero 6882 -- macros y constantes
#define LIMITE_6882 6982
#define FACTOR_6882 3

int aplicar_limite6882(int valor) {
    if (valor > LIMITE_6882) return LIMITE_6882;
    return valor * FACTOR_6882;
}
