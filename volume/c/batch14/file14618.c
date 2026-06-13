// fichero 14618 -- macros y constantes
#define LIMITE_14618 14718
#define FACTOR_14618 4

int aplicar_limite14618(int valor) {
    if (valor > LIMITE_14618) return LIMITE_14618;
    return valor * FACTOR_14618;
}
