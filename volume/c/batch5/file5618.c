// fichero 5618 -- macros y constantes
#define LIMITE_5618 5718
#define FACTOR_5618 4

int aplicar_limite5618(int valor) {
    if (valor > LIMITE_5618) return LIMITE_5618;
    return valor * FACTOR_5618;
}
