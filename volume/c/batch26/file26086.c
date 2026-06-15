// fichero 26086 -- macros y constantes -- MODIFICADO
#define LIMITE_26086 26286
#define FACTOR_26086 3

int aplicar_limite26086(int valor) {
    if (valor > LIMITE_26086) return LIMITE_26086;
    return valor * FACTOR_26086;
}
