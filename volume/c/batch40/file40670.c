// fichero 40670 -- macros y constantes
#define LIMITE_40670 40770
#define FACTOR_40670 1

int aplicar_limite40670(int valor) {
    if (valor > LIMITE_40670) return LIMITE_40670;
    return valor * FACTOR_40670;
}
