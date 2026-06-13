// fichero 39006 -- macros y constantes
#define LIMITE_39006 39106
#define FACTOR_39006 2

int aplicar_limite39006(int valor) {
    if (valor > LIMITE_39006) return LIMITE_39006;
    return valor * FACTOR_39006;
}
