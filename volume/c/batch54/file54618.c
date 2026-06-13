// fichero 54618 -- macros y constantes
#define LIMITE_54618 54718
#define FACTOR_54618 4

int aplicar_limite54618(int valor) {
    if (valor > LIMITE_54618) return LIMITE_54618;
    return valor * FACTOR_54618;
}
