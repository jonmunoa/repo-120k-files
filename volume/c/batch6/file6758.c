// fichero 6758 -- macros y constantes
#define LIMITE_6758 6858
#define FACTOR_6758 4

int aplicar_limite6758(int valor) {
    if (valor > LIMITE_6758) return LIMITE_6758;
    return valor * FACTOR_6758;
}
