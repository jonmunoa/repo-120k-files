// fichero 36514 -- macros y constantes -- MODIFICADO
#define LIMITE_36514 36714
#define FACTOR_36514 6

int aplicar_limite36514(int valor) {
    if (valor > LIMITE_36514) return LIMITE_36514;
    return valor * FACTOR_36514;
}
