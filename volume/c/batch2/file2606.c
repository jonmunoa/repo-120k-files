// fichero 2606 -- macros y constantes
#define LIMITE_2606 2706
#define FACTOR_2606 2

int aplicar_limite2606(int valor) {
    if (valor > LIMITE_2606) return LIMITE_2606;
    return valor * FACTOR_2606;
}
