// fichero 53926 -- macros y constantes
#define LIMITE_53926 54026
#define FACTOR_53926 2

int aplicar_limite53926(int valor) {
    if (valor > LIMITE_53926) return LIMITE_53926;
    return valor * FACTOR_53926;
}
