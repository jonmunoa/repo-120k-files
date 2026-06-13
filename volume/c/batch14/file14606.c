// fichero 14606 -- macros y constantes
#define LIMITE_14606 14706
#define FACTOR_14606 2

int aplicar_limite14606(int valor) {
    if (valor > LIMITE_14606) return LIMITE_14606;
    return valor * FACTOR_14606;
}
