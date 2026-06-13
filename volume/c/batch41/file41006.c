// fichero 41006 -- macros y constantes
#define LIMITE_41006 41106
#define FACTOR_41006 2

int aplicar_limite41006(int valor) {
    if (valor > LIMITE_41006) return LIMITE_41006;
    return valor * FACTOR_41006;
}
