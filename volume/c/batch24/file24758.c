// fichero 24758 -- macros y constantes
#define LIMITE_24758 24858
#define FACTOR_24758 4

int aplicar_limite24758(int valor) {
    if (valor > LIMITE_24758) return LIMITE_24758;
    return valor * FACTOR_24758;
}
