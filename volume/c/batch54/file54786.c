// fichero 54786 -- macros y constantes
#define LIMITE_54786 54886
#define FACTOR_54786 2

int aplicar_limite54786(int valor) {
    if (valor > LIMITE_54786) return LIMITE_54786;
    return valor * FACTOR_54786;
}
