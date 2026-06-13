// fichero 54114 -- macros y constantes
#define LIMITE_54114 54214
#define FACTOR_54114 5

int aplicar_limite54114(int valor) {
    if (valor > LIMITE_54114) return LIMITE_54114;
    return valor * FACTOR_54114;
}
