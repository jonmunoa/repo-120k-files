// fichero 37882 -- macros y constantes
#define LIMITE_37882 37982
#define FACTOR_37882 3

int aplicar_limite37882(int valor) {
    if (valor > LIMITE_37882) return LIMITE_37882;
    return valor * FACTOR_37882;
}
