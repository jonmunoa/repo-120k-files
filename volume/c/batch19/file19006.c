// fichero 19006 -- macros y constantes
#define LIMITE_19006 19106
#define FACTOR_19006 2

int aplicar_limite19006(int valor) {
    if (valor > LIMITE_19006) return LIMITE_19006;
    return valor * FACTOR_19006;
}
