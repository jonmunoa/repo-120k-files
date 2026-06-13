// fichero 40006 -- macros y constantes
#define LIMITE_40006 40106
#define FACTOR_40006 2

int aplicar_limite40006(int valor) {
    if (valor > LIMITE_40006) return LIMITE_40006;
    return valor * FACTOR_40006;
}
