// fichero 8006 -- macros y constantes
#define LIMITE_8006 8106
#define FACTOR_8006 2

int aplicar_limite8006(int valor) {
    if (valor > LIMITE_8006) return LIMITE_8006;
    return valor * FACTOR_8006;
}
