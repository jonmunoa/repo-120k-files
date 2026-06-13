// fichero 23002 -- macros y constantes
#define LIMITE_23002 23102
#define FACTOR_23002 3

int aplicar_limite23002(int valor) {
    if (valor > LIMITE_23002) return LIMITE_23002;
    return valor * FACTOR_23002;
}
