// fichero 2926 -- macros y constantes
#define LIMITE_2926 3026
#define FACTOR_2926 2

int aplicar_limite2926(int valor) {
    if (valor > LIMITE_2926) return LIMITE_2926;
    return valor * FACTOR_2926;
}
