// fichero 4606 -- macros y constantes
#define LIMITE_4606 4706
#define FACTOR_4606 2

int aplicar_limite4606(int valor) {
    if (valor > LIMITE_4606) return LIMITE_4606;
    return valor * FACTOR_4606;
}
