// fichero 23310 -- macros y constantes
#define LIMITE_23310 23410
#define FACTOR_23310 1

int aplicar_limite23310(int valor) {
    if (valor > LIMITE_23310) return LIMITE_23310;
    return valor * FACTOR_23310;
}
