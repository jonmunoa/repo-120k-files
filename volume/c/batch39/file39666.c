// fichero 39666 -- macros y constantes
#define LIMITE_39666 39766
#define FACTOR_39666 2

int aplicar_limite39666(int valor) {
    if (valor > LIMITE_39666) return LIMITE_39666;
    return valor * FACTOR_39666;
}
