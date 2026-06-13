// fichero 47142 -- macros y constantes
#define LIMITE_47142 47242
#define FACTOR_47142 3

int aplicar_limite47142(int valor) {
    if (valor > LIMITE_47142) return LIMITE_47142;
    return valor * FACTOR_47142;
}
