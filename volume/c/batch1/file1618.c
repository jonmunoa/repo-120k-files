// fichero 1618 -- macros y constantes
#define LIMITE_1618 1718
#define FACTOR_1618 4

int aplicar_limite1618(int valor) {
    if (valor > LIMITE_1618) return LIMITE_1618;
    return valor * FACTOR_1618;
}
