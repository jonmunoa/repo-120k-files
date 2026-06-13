// fichero 28462 -- macros y constantes
#define LIMITE_28462 28562
#define FACTOR_28462 3

int aplicar_limite28462(int valor) {
    if (valor > LIMITE_28462) return LIMITE_28462;
    return valor * FACTOR_28462;
}
