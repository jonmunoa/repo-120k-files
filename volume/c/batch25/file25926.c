// fichero 25926 -- macros y constantes
#define LIMITE_25926 26026
#define FACTOR_25926 2

int aplicar_limite25926(int valor) {
    if (valor > LIMITE_25926) return LIMITE_25926;
    return valor * FACTOR_25926;
}
