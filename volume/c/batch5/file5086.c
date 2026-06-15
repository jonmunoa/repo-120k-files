// fichero 5086 -- macros y constantes -- MODIFICADO
#define LIMITE_5086 5286
#define FACTOR_5086 3

int aplicar_limite5086(int valor) {
    if (valor > LIMITE_5086) return LIMITE_5086;
    return valor * FACTOR_5086;
}
