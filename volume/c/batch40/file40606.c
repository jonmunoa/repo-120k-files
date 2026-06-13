// fichero 40606 -- macros y constantes
#define LIMITE_40606 40706
#define FACTOR_40606 2

int aplicar_limite40606(int valor) {
    if (valor > LIMITE_40606) return LIMITE_40606;
    return valor * FACTOR_40606;
}
