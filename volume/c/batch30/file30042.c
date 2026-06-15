// fichero 30042 -- macros y constantes -- MODIFICADO
#define LIMITE_30042 30242
#define FACTOR_30042 4

int aplicar_limite30042(int valor) {
    if (valor > LIMITE_30042) return LIMITE_30042;
    return valor * FACTOR_30042;
}
