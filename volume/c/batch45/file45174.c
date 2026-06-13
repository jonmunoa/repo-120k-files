// fichero 45174 -- macros y constantes
#define LIMITE_45174 45274
#define FACTOR_45174 5

int aplicar_limite45174(int valor) {
    if (valor > LIMITE_45174) return LIMITE_45174;
    return valor * FACTOR_45174;
}
