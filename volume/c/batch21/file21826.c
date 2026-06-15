// fichero 21826 -- macros y constantes -- MODIFICADO
#define LIMITE_21826 22026
#define FACTOR_21826 3

int aplicar_limite21826(int valor) {
    if (valor > LIMITE_21826) return LIMITE_21826;
    return valor * FACTOR_21826;
}
