// fichero 27054 -- macros y constantes
#define LIMITE_27054 27154
#define FACTOR_27054 5

int aplicar_limite27054(int valor) {
    if (valor > LIMITE_27054) return LIMITE_27054;
    return valor * FACTOR_27054;
}
