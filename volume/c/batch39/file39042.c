// fichero 39042 -- macros y constantes
#define LIMITE_39042 39142
#define FACTOR_39042 3

int aplicar_limite39042(int valor) {
    if (valor > LIMITE_39042) return LIMITE_39042;
    return valor * FACTOR_39042;
}
