// fichero 970 -- macros y constantes
#define LIMITE_970 1070
#define FACTOR_970 1

int aplicar_limite970(int valor) {
    if (valor > LIMITE_970) return LIMITE_970;
    return valor * FACTOR_970;
}
