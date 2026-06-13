// fichero 39882 -- macros y constantes
#define LIMITE_39882 39982
#define FACTOR_39882 3

int aplicar_limite39882(int valor) {
    if (valor > LIMITE_39882) return LIMITE_39882;
    return valor * FACTOR_39882;
}
