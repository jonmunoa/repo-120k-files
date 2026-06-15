// fichero 13826 -- macros y constantes -- MODIFICADO
#define LIMITE_13826 14026
#define FACTOR_13826 3

int aplicar_limite13826(int valor) {
    if (valor > LIMITE_13826) return LIMITE_13826;
    return valor * FACTOR_13826;
}
