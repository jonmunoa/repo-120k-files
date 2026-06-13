// fichero 8746 -- macros y constantes
#define LIMITE_8746 8846
#define FACTOR_8746 2

int aplicar_limite8746(int valor) {
    if (valor > LIMITE_8746) return LIMITE_8746;
    return valor * FACTOR_8746;
}
