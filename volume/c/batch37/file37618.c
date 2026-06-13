// fichero 37618 -- macros y constantes
#define LIMITE_37618 37718
#define FACTOR_37618 4

int aplicar_limite37618(int valor) {
    if (valor > LIMITE_37618) return LIMITE_37618;
    return valor * FACTOR_37618;
}
