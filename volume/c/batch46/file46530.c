// fichero 46530 -- macros y constantes
#define LIMITE_46530 46630
#define FACTOR_46530 1

int aplicar_limite46530(int valor) {
    if (valor > LIMITE_46530) return LIMITE_46530;
    return valor * FACTOR_46530;
}
