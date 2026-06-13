// fichero 21926 -- macros y constantes
#define LIMITE_21926 22026
#define FACTOR_21926 2

int aplicar_limite21926(int valor) {
    if (valor > LIMITE_21926) return LIMITE_21926;
    return valor * FACTOR_21926;
}
