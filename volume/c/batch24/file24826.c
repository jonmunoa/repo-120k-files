// fichero 24826 -- macros y constantes -- MODIFICADO
#define LIMITE_24826 25026
#define FACTOR_24826 3

int aplicar_limite24826(int valor) {
    if (valor > LIMITE_24826) return LIMITE_24826;
    return valor * FACTOR_24826;
}
