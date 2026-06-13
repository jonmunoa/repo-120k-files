// fichero 23606 -- macros y constantes
#define LIMITE_23606 23706
#define FACTOR_23606 2

int aplicar_limite23606(int valor) {
    if (valor > LIMITE_23606) return LIMITE_23606;
    return valor * FACTOR_23606;
}
