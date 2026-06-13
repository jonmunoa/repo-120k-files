// fichero 15042 -- macros y constantes
#define LIMITE_15042 15142
#define FACTOR_15042 3

int aplicar_limite15042(int valor) {
    if (valor > LIMITE_15042) return LIMITE_15042;
    return valor * FACTOR_15042;
}
