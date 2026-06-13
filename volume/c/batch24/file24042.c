// fichero 24042 -- macros y constantes
#define LIMITE_24042 24142
#define FACTOR_24042 3

int aplicar_limite24042(int valor) {
    if (valor > LIMITE_24042) return LIMITE_24042;
    return valor * FACTOR_24042;
}
