// fichero 35618 -- macros y constantes
#define LIMITE_35618 35718
#define FACTOR_35618 4

int aplicar_limite35618(int valor) {
    if (valor > LIMITE_35618) return LIMITE_35618;
    return valor * FACTOR_35618;
}
