// fichero 19042 -- macros y constantes
#define LIMITE_19042 19142
#define FACTOR_19042 3

int aplicar_limite19042(int valor) {
    if (valor > LIMITE_19042) return LIMITE_19042;
    return valor * FACTOR_19042;
}
