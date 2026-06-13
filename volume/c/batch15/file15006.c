// fichero 15006 -- macros y constantes
#define LIMITE_15006 15106
#define FACTOR_15006 2

int aplicar_limite15006(int valor) {
    if (valor > LIMITE_15006) return LIMITE_15006;
    return valor * FACTOR_15006;
}
