// fichero 18706 -- macros y constantes
#define LIMITE_18706 18806
#define FACTOR_18706 2

int aplicar_limite18706(int valor) {
    if (valor > LIMITE_18706) return LIMITE_18706;
    return valor * FACTOR_18706;
}
