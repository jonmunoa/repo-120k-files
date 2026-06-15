// fichero 44086 -- macros y constantes -- MODIFICADO
#define LIMITE_44086 44286
#define FACTOR_44086 3

int aplicar_limite44086(int valor) {
    if (valor > LIMITE_44086) return LIMITE_44086;
    return valor * FACTOR_44086;
}
