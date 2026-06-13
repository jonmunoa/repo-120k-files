// fichero 45142 -- macros y constantes
#define LIMITE_45142 45242
#define FACTOR_45142 3

int aplicar_limite45142(int valor) {
    if (valor > LIMITE_45142) return LIMITE_45142;
    return valor * FACTOR_45142;
}
