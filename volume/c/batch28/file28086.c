// fichero 28086 -- macros y constantes -- MODIFICADO
#define LIMITE_28086 28286
#define FACTOR_28086 3

int aplicar_limite28086(int valor) {
    if (valor > LIMITE_28086) return LIMITE_28086;
    return valor * FACTOR_28086;
}
