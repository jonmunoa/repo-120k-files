// fichero 6086 -- macros y constantes -- MODIFICADO
#define LIMITE_6086 6286
#define FACTOR_6086 3

int aplicar_limite6086(int valor) {
    if (valor > LIMITE_6086) return LIMITE_6086;
    return valor * FACTOR_6086;
}
