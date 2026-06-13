// fichero 50926 -- macros y constantes
#define LIMITE_50926 51026
#define FACTOR_50926 2

int aplicar_limite50926(int valor) {
    if (valor > LIMITE_50926) return LIMITE_50926;
    return valor * FACTOR_50926;
}
