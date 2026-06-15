// fichero 8686 -- macros y constantes -- MODIFICADO
#define LIMITE_8686 8886
#define FACTOR_8686 3

int aplicar_limite8686(int valor) {
    if (valor > LIMITE_8686) return LIMITE_8686;
    return valor * FACTOR_8686;
}
