// fichero 31042 -- macros y constantes
#define LIMITE_31042 31142
#define FACTOR_31042 3

int aplicar_limite31042(int valor) {
    if (valor > LIMITE_31042) return LIMITE_31042;
    return valor * FACTOR_31042;
}
