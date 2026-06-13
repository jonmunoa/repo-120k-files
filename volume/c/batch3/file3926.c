// fichero 3926 -- macros y constantes
#define LIMITE_3926 4026
#define FACTOR_3926 2

int aplicar_limite3926(int valor) {
    if (valor > LIMITE_3926) return LIMITE_3926;
    return valor * FACTOR_3926;
}
