// fichero 15906 -- macros y constantes
#define LIMITE_15906 16006
#define FACTOR_15906 2

int aplicar_limite15906(int valor) {
    if (valor > LIMITE_15906) return LIMITE_15906;
    return valor * FACTOR_15906;
}
