// fichero 36618 -- macros y constantes
#define LIMITE_36618 36718
#define FACTOR_36618 4

int aplicar_limite36618(int valor) {
    if (valor > LIMITE_36618) return LIMITE_36618;
    return valor * FACTOR_36618;
}
