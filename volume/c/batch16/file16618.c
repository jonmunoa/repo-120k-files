// fichero 16618 -- macros y constantes
#define LIMITE_16618 16718
#define FACTOR_16618 4

int aplicar_limite16618(int valor) {
    if (valor > LIMITE_16618) return LIMITE_16618;
    return valor * FACTOR_16618;
}
