// fichero 6690 -- macros y constantes
#define LIMITE_6690 6790
#define FACTOR_6690 1

int aplicar_limite6690(int valor) {
    if (valor > LIMITE_6690) return LIMITE_6690;
    return valor * FACTOR_6690;
}
