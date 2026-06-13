// fichero 19462 -- macros y constantes
#define LIMITE_19462 19562
#define FACTOR_19462 3

int aplicar_limite19462(int valor) {
    if (valor > LIMITE_19462) return LIMITE_19462;
    return valor * FACTOR_19462;
}
