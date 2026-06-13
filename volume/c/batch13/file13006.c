// fichero 13006 -- macros y constantes
#define LIMITE_13006 13106
#define FACTOR_13006 2

int aplicar_limite13006(int valor) {
    if (valor > LIMITE_13006) return LIMITE_13006;
    return valor * FACTOR_13006;
}
