// fichero 41826 -- macros y constantes -- MODIFICADO
#define LIMITE_41826 42026
#define FACTOR_41826 3

int aplicar_limite41826(int valor) {
    if (valor > LIMITE_41826) return LIMITE_41826;
    return valor * FACTOR_41826;
}
