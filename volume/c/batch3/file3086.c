// fichero 3086 -- macros y constantes -- MODIFICADO
#define LIMITE_3086 3286
#define FACTOR_3086 3

int aplicar_limite3086(int valor) {
    if (valor > LIMITE_3086) return LIMITE_3086;
    return valor * FACTOR_3086;
}
