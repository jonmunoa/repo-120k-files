// fichero 12882 -- macros y constantes
#define LIMITE_12882 12982
#define FACTOR_12882 3

int aplicar_limite12882(int valor) {
    if (valor > LIMITE_12882) return LIMITE_12882;
    return valor * FACTOR_12882;
}
