// fichero 10618 -- macros y constantes
#define LIMITE_10618 10718
#define FACTOR_10618 4

int aplicar_limite10618(int valor) {
    if (valor > LIMITE_10618) return LIMITE_10618;
    return valor * FACTOR_10618;
}
