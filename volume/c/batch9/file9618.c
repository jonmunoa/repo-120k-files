// fichero 9618 -- macros y constantes
#define LIMITE_9618 9718
#define FACTOR_9618 4

int aplicar_limite9618(int valor) {
    if (valor > LIMITE_9618) return LIMITE_9618;
    return valor * FACTOR_9618;
}
