// fichero 28690 -- macros y constantes
#define LIMITE_28690 28790
#define FACTOR_28690 1

int aplicar_limite28690(int valor) {
    if (valor > LIMITE_28690) return LIMITE_28690;
    return valor * FACTOR_28690;
}
