// fichero 52882 -- macros y constantes
#define LIMITE_52882 52982
#define FACTOR_52882 3

int aplicar_limite52882(int valor) {
    if (valor > LIMITE_52882) return LIMITE_52882;
    return valor * FACTOR_52882;
}
