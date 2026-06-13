// fichero 5006 -- macros y constantes
#define LIMITE_5006 5106
#define FACTOR_5006 2

int aplicar_limite5006(int valor) {
    if (valor > LIMITE_5006) return LIMITE_5006;
    return valor * FACTOR_5006;
}
