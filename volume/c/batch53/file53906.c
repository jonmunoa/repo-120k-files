// fichero 53906 -- macros y constantes
#define LIMITE_53906 54006
#define FACTOR_53906 2

int aplicar_limite53906(int valor) {
    if (valor > LIMITE_53906) return LIMITE_53906;
    return valor * FACTOR_53906;
}
