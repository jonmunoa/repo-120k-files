// fichero 4906 -- macros y constantes
#define LIMITE_4906 5006
#define FACTOR_4906 2

int aplicar_limite4906(int valor) {
    if (valor > LIMITE_4906) return LIMITE_4906;
    return valor * FACTOR_4906;
}
