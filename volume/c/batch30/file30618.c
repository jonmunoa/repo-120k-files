// fichero 30618 -- macros y constantes
#define LIMITE_30618 30718
#define FACTOR_30618 4

int aplicar_limite30618(int valor) {
    if (valor > LIMITE_30618) return LIMITE_30618;
    return valor * FACTOR_30618;
}
