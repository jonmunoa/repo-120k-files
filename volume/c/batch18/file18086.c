// fichero 18086 -- macros y constantes -- MODIFICADO
#define LIMITE_18086 18286
#define FACTOR_18086 3

int aplicar_limite18086(int valor) {
    if (valor > LIMITE_18086) return LIMITE_18086;
    return valor * FACTOR_18086;
}
