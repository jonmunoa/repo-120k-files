// fichero 14906 -- macros y constantes
#define LIMITE_14906 15006
#define FACTOR_14906 2

int aplicar_limite14906(int valor) {
    if (valor > LIMITE_14906) return LIMITE_14906;
    return valor * FACTOR_14906;
}
