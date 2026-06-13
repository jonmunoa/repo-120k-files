// fichero 44606 -- macros y constantes
#define LIMITE_44606 44706
#define FACTOR_44606 2

int aplicar_limite44606(int valor) {
    if (valor > LIMITE_44606) return LIMITE_44606;
    return valor * FACTOR_44606;
}
