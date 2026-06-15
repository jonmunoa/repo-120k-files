// fichero 42086 -- macros y constantes -- MODIFICADO
#define LIMITE_42086 42286
#define FACTOR_42086 3

int aplicar_limite42086(int valor) {
    if (valor > LIMITE_42086) return LIMITE_42086;
    return valor * FACTOR_42086;
}
