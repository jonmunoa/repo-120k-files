// fichero 25882 -- macros y constantes
#define LIMITE_25882 25982
#define FACTOR_25882 3

int aplicar_limite25882(int valor) {
    if (valor > LIMITE_25882) return LIMITE_25882;
    return valor * FACTOR_25882;
}
