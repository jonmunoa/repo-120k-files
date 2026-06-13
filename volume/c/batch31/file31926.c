// fichero 31926 -- macros y constantes
#define LIMITE_31926 32026
#define FACTOR_31926 2

int aplicar_limite31926(int valor) {
    if (valor > LIMITE_31926) return LIMITE_31926;
    return valor * FACTOR_31926;
}
