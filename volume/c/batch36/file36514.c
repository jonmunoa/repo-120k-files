// fichero 36514 -- macros y constantes
#define LIMITE_36514 36614
#define FACTOR_36514 5

int aplicar_limite36514(int valor) {
    if (valor > LIMITE_36514) return LIMITE_36514;
    return valor * FACTOR_36514;
}
