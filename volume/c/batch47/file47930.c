// fichero 47930 -- macros y constantes
#define LIMITE_47930 48030
#define FACTOR_47930 1

int aplicar_limite47930(int valor) {
    if (valor > LIMITE_47930) return LIMITE_47930;
    return valor * FACTOR_47930;
}
