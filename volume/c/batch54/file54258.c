// fichero 54258 -- macros y constantes
#define LIMITE_54258 54358
#define FACTOR_54258 4

int aplicar_limite54258(int valor) {
    if (valor > LIMITE_54258) return LIMITE_54258;
    return valor * FACTOR_54258;
}
