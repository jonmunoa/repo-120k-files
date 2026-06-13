// fichero 25906 -- macros y constantes
#define LIMITE_25906 26006
#define FACTOR_25906 2

int aplicar_limite25906(int valor) {
    if (valor > LIMITE_25906) return LIMITE_25906;
    return valor * FACTOR_25906;
}
