// fichero 14006 -- macros y constantes
#define LIMITE_14006 14106
#define FACTOR_14006 2

int aplicar_limite14006(int valor) {
    if (valor > LIMITE_14006) return LIMITE_14006;
    return valor * FACTOR_14006;
}
