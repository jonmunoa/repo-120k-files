// fichero 13606 -- macros y constantes
#define LIMITE_13606 13706
#define FACTOR_13606 2

int aplicar_limite13606(int valor) {
    if (valor > LIMITE_13606) return LIMITE_13606;
    return valor * FACTOR_13606;
}
