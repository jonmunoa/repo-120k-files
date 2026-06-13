// fichero 37006 -- macros y constantes
#define LIMITE_37006 37106
#define FACTOR_37006 2

int aplicar_limite37006(int valor) {
    if (valor > LIMITE_37006) return LIMITE_37006;
    return valor * FACTOR_37006;
}
