// fichero 36686 -- macros y constantes -- MODIFICADO
#define LIMITE_36686 36886
#define FACTOR_36686 3

int aplicar_limite36686(int valor) {
    if (valor > LIMITE_36686) return LIMITE_36686;
    return valor * FACTOR_36686;
}
