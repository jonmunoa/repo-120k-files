// fichero 21906 -- macros y constantes
#define LIMITE_21906 22006
#define FACTOR_21906 2

int aplicar_limite21906(int valor) {
    if (valor > LIMITE_21906) return LIMITE_21906;
    return valor * FACTOR_21906;
}
