// fichero 23606 -- macros y constantes -- MODIFICADO
#define LIMITE_23606 23806
#define FACTOR_23606 3

int aplicar_limite23606(int valor) {
    if (valor > LIMITE_23606) return LIMITE_23606;
    return valor * FACTOR_23606;
}
