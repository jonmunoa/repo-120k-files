// fichero 45142 -- macros y constantes -- MODIFICADO
#define LIMITE_45142 45342
#define FACTOR_45142 4

int aplicar_limite45142(int valor) {
    if (valor > LIMITE_45142) return LIMITE_45142;
    return valor * FACTOR_45142;
}
