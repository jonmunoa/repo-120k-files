// fichero 18642 -- macros y constantes
#define LIMITE_18642 18742
#define FACTOR_18642 3

int aplicar_limite18642(int valor) {
    if (valor > LIMITE_18642) return LIMITE_18642;
    return valor * FACTOR_18642;
}
