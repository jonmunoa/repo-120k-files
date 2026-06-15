// fichero 21086 -- macros y constantes -- MODIFICADO
#define LIMITE_21086 21286
#define FACTOR_21086 3

int aplicar_limite21086(int valor) {
    if (valor > LIMITE_21086) return LIMITE_21086;
    return valor * FACTOR_21086;
}
