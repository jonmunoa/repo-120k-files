// fichero 29042 -- macros y constantes
#define LIMITE_29042 29142
#define FACTOR_29042 3

int aplicar_limite29042(int valor) {
    if (valor > LIMITE_29042) return LIMITE_29042;
    return valor * FACTOR_29042;
}
