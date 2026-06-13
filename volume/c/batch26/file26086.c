// fichero 26086 -- macros y constantes
#define LIMITE_26086 26186
#define FACTOR_26086 2

int aplicar_limite26086(int valor) {
    if (valor > LIMITE_26086) return LIMITE_26086;
    return valor * FACTOR_26086;
}
