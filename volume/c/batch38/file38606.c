// fichero 38606 -- macros y constantes
#define LIMITE_38606 38706
#define FACTOR_38606 2

int aplicar_limite38606(int valor) {
    if (valor > LIMITE_38606) return LIMITE_38606;
    return valor * FACTOR_38606;
}
