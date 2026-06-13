// fichero 38882 -- macros y constantes
#define LIMITE_38882 38982
#define FACTOR_38882 3

int aplicar_limite38882(int valor) {
    if (valor > LIMITE_38882) return LIMITE_38882;
    return valor * FACTOR_38882;
}
