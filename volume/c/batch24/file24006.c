// fichero 24006 -- macros y constantes
#define LIMITE_24006 24106
#define FACTOR_24006 2

int aplicar_limite24006(int valor) {
    if (valor > LIMITE_24006) return LIMITE_24006;
    return valor * FACTOR_24006;
}
