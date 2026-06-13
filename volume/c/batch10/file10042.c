// fichero 10042 -- macros y constantes
#define LIMITE_10042 10142
#define FACTOR_10042 3

int aplicar_limite10042(int valor) {
    if (valor > LIMITE_10042) return LIMITE_10042;
    return valor * FACTOR_10042;
}
