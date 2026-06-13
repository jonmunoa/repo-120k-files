// fichero 18690 -- macros y constantes
#define LIMITE_18690 18790
#define FACTOR_18690 1

int aplicar_limite18690(int valor) {
    if (valor > LIMITE_18690) return LIMITE_18690;
    return valor * FACTOR_18690;
}
