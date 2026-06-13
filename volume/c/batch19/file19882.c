// fichero 19882 -- macros y constantes
#define LIMITE_19882 19982
#define FACTOR_19882 3

int aplicar_limite19882(int valor) {
    if (valor > LIMITE_19882) return LIMITE_19882;
    return valor * FACTOR_19882;
}
