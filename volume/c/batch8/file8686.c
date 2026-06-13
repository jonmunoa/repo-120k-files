// fichero 8686 -- macros y constantes
#define LIMITE_8686 8786
#define FACTOR_8686 2

int aplicar_limite8686(int valor) {
    if (valor > LIMITE_8686) return LIMITE_8686;
    return valor * FACTOR_8686;
}
