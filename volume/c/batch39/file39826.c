// fichero 39826 -- macros y constantes -- MODIFICADO
#define LIMITE_39826 40026
#define FACTOR_39826 3

int aplicar_limite39826(int valor) {
    if (valor > LIMITE_39826) return LIMITE_39826;
    return valor * FACTOR_39826;
}
