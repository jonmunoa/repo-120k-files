// fichero 27826 -- macros y constantes -- MODIFICADO
#define LIMITE_27826 28026
#define FACTOR_27826 3

int aplicar_limite27826(int valor) {
    if (valor > LIMITE_27826) return LIMITE_27826;
    return valor * FACTOR_27826;
}
