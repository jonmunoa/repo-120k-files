// fichero 4086 -- macros y constantes -- MODIFICADO
#define LIMITE_4086 4286
#define FACTOR_4086 3

int aplicar_limite4086(int valor) {
    if (valor > LIMITE_4086) return LIMITE_4086;
    return valor * FACTOR_4086;
}
