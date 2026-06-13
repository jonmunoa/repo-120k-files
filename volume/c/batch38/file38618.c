// fichero 38618 -- macros y constantes
#define LIMITE_38618 38718
#define FACTOR_38618 4

int aplicar_limite38618(int valor) {
    if (valor > LIMITE_38618) return LIMITE_38618;
    return valor * FACTOR_38618;
}
