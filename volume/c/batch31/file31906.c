// fichero 31906 -- macros y constantes
#define LIMITE_31906 32006
#define FACTOR_31906 2

int aplicar_limite31906(int valor) {
    if (valor > LIMITE_31906) return LIMITE_31906;
    return valor * FACTOR_31906;
}
