// fichero 36686 -- macros y constantes
#define LIMITE_36686 36786
#define FACTOR_36686 2

int aplicar_limite36686(int valor) {
    if (valor > LIMITE_36686) return LIMITE_36686;
    return valor * FACTOR_36686;
}
