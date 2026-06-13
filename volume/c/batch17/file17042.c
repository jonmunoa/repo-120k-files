// fichero 17042 -- macros y constantes
#define LIMITE_17042 17142
#define FACTOR_17042 3

int aplicar_limite17042(int valor) {
    if (valor > LIMITE_17042) return LIMITE_17042;
    return valor * FACTOR_17042;
}
