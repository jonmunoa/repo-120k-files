// fichero 38250 -- macros y constantes
#define LIMITE_38250 38350
#define FACTOR_38250 1

int aplicar_limite38250(int valor) {
    if (valor > LIMITE_38250) return LIMITE_38250;
    return valor * FACTOR_38250;
}
