// fichero 19618 -- macros y constantes
#define LIMITE_19618 19718
#define FACTOR_19618 4

int aplicar_limite19618(int valor) {
    if (valor > LIMITE_19618) return LIMITE_19618;
    return valor * FACTOR_19618;
}
