// fichero 48826 -- macros y constantes -- MODIFICADO
#define LIMITE_48826 49026
#define FACTOR_48826 3

int aplicar_limite48826(int valor) {
    if (valor > LIMITE_48826) return LIMITE_48826;
    return valor * FACTOR_48826;
}
