// fichero 10882 -- macros y constantes
#define LIMITE_10882 10982
#define FACTOR_10882 3

int aplicar_limite10882(int valor) {
    if (valor > LIMITE_10882) return LIMITE_10882;
    return valor * FACTOR_10882;
}
