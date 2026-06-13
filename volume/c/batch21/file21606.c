// fichero 21606 -- macros y constantes
#define LIMITE_21606 21706
#define FACTOR_21606 2

int aplicar_limite21606(int valor) {
    if (valor > LIMITE_21606) return LIMITE_21606;
    return valor * FACTOR_21606;
}
