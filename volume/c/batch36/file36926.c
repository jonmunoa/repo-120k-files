// fichero 36926 -- macros y constantes
#define LIMITE_36926 37026
#define FACTOR_36926 2

int aplicar_limite36926(int valor) {
    if (valor > LIMITE_36926) return LIMITE_36926;
    return valor * FACTOR_36926;
}
