// fichero 54042 -- macros y constantes
#define LIMITE_54042 54142
#define FACTOR_54042 3

int aplicar_limite54042(int valor) {
    if (valor > LIMITE_54042) return LIMITE_54042;
    return valor * FACTOR_54042;
}
