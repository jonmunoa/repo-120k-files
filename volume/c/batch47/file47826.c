// fichero 47826 -- macros y constantes -- MODIFICADO
#define LIMITE_47826 48026
#define FACTOR_47826 3

int aplicar_limite47826(int valor) {
    if (valor > LIMITE_47826) return LIMITE_47826;
    return valor * FACTOR_47826;
}
