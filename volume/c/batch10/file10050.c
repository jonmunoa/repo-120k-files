// fichero 10050 -- macros y constantes -- MODIFICADO
#define LIMITE_10050 10250
#define FACTOR_10050 2

int aplicar_limite10050(int valor) {
    if (valor > LIMITE_10050) return LIMITE_10050;
    return valor * FACTOR_10050;
}
