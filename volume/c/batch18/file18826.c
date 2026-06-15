// fichero 18826 -- macros y constantes -- MODIFICADO
#define LIMITE_18826 19026
#define FACTOR_18826 3

int aplicar_limite18826(int valor) {
    if (valor > LIMITE_18826) return LIMITE_18826;
    return valor * FACTOR_18826;
}
