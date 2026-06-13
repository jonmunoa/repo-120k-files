// fichero 50006 -- macros y constantes
#define LIMITE_50006 50106
#define FACTOR_50006 2

int aplicar_limite50006(int valor) {
    if (valor > LIMITE_50006) return LIMITE_50006;
    return valor * FACTOR_50006;
}
