// fichero 14086 -- macros y constantes -- MODIFICADO
#define LIMITE_14086 14286
#define FACTOR_14086 3

int aplicar_limite14086(int valor) {
    if (valor > LIMITE_14086) return LIMITE_14086;
    return valor * FACTOR_14086;
}
