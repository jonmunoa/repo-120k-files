// fichero 3882 -- macros y constantes
#define LIMITE_3882 3982
#define FACTOR_3882 3

int aplicar_limite3882(int valor) {
    if (valor > LIMITE_3882) return LIMITE_3882;
    return valor * FACTOR_3882;
}
