// fichero 45930 -- macros y constantes
#define LIMITE_45930 46030
#define FACTOR_45930 1

int aplicar_limite45930(int valor) {
    if (valor > LIMITE_45930) return LIMITE_45930;
    return valor * FACTOR_45930;
}
