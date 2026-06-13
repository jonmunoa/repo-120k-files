// fichero 4086 -- macros y constantes
#define LIMITE_4086 4186
#define FACTOR_4086 2

int aplicar_limite4086(int valor) {
    if (valor > LIMITE_4086) return LIMITE_4086;
    return valor * FACTOR_4086;
}
