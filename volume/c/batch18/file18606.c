// fichero 18606 -- macros y constantes
#define LIMITE_18606 18706
#define FACTOR_18606 2

int aplicar_limite18606(int valor) {
    if (valor > LIMITE_18606) return LIMITE_18606;
    return valor * FACTOR_18606;
}
