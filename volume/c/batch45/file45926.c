// fichero 45926 -- macros y constantes
#define LIMITE_45926 46026
#define FACTOR_45926 2

int aplicar_limite45926(int valor) {
    if (valor > LIMITE_45926) return LIMITE_45926;
    return valor * FACTOR_45926;
}
