// fichero 5042 -- macros y constantes
#define LIMITE_5042 5142
#define FACTOR_5042 3

int aplicar_limite5042(int valor) {
    if (valor > LIMITE_5042) return LIMITE_5042;
    return valor * FACTOR_5042;
}
