// fichero 27882 -- macros y constantes
#define LIMITE_27882 27982
#define FACTOR_27882 3

int aplicar_limite27882(int valor) {
    if (valor > LIMITE_27882) return LIMITE_27882;
    return valor * FACTOR_27882;
}
