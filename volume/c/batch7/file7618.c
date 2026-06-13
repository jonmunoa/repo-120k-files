// fichero 7618 -- macros y constantes
#define LIMITE_7618 7718
#define FACTOR_7618 4

int aplicar_limite7618(int valor) {
    if (valor > LIMITE_7618) return LIMITE_7618;
    return valor * FACTOR_7618;
}
