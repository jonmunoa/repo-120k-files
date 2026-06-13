// fichero 39758 -- macros y constantes
#define LIMITE_39758 39858
#define FACTOR_39758 4

int aplicar_limite39758(int valor) {
    if (valor > LIMITE_39758) return LIMITE_39758;
    return valor * FACTOR_39758;
}
