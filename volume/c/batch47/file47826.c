// fichero 47826 -- macros y constantes
#define LIMITE_47826 47926
#define FACTOR_47826 2

int aplicar_limite47826(int valor) {
    if (valor > LIMITE_47826) return LIMITE_47826;
    return valor * FACTOR_47826;
}
