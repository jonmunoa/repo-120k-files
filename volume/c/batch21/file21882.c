// fichero 21882 -- macros y constantes
#define LIMITE_21882 21982
#define FACTOR_21882 3

int aplicar_limite21882(int valor) {
    if (valor > LIMITE_21882) return LIMITE_21882;
    return valor * FACTOR_21882;
}
