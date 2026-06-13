// fichero 29906 -- macros y constantes
#define LIMITE_29906 30006
#define FACTOR_29906 2

int aplicar_limite29906(int valor) {
    if (valor > LIMITE_29906) return LIMITE_29906;
    return valor * FACTOR_29906;
}
