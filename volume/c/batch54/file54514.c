// fichero 54514 -- macros y constantes
#define LIMITE_54514 54614
#define FACTOR_54514 5

int aplicar_limite54514(int valor) {
    if (valor > LIMITE_54514) return LIMITE_54514;
    return valor * FACTOR_54514;
}
