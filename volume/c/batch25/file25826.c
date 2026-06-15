// fichero 25826 -- macros y constantes -- MODIFICADO
#define LIMITE_25826 26026
#define FACTOR_25826 3

int aplicar_limite25826(int valor) {
    if (valor > LIMITE_25826) return LIMITE_25826;
    return valor * FACTOR_25826;
}
