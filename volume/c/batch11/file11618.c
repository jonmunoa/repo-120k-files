// fichero 11618 -- macros y constantes
#define LIMITE_11618 11718
#define FACTOR_11618 4

int aplicar_limite11618(int valor) {
    if (valor > LIMITE_11618) return LIMITE_11618;
    return valor * FACTOR_11618;
}
