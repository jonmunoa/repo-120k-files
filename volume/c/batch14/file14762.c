// fichero 14762 -- macros y constantes
#define LIMITE_14762 14862
#define FACTOR_14762 3

int aplicar_limite14762(int valor) {
    if (valor > LIMITE_14762) return LIMITE_14762;
    return valor * FACTOR_14762;
}
