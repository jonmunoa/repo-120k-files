// fichero 25606 -- macros y constantes
#define LIMITE_25606 25706
#define FACTOR_25606 2

int aplicar_limite25606(int valor) {
    if (valor > LIMITE_25606) return LIMITE_25606;
    return valor * FACTOR_25606;
}
