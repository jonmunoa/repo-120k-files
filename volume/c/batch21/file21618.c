// fichero 21618 -- macros y constantes
#define LIMITE_21618 21718
#define FACTOR_21618 4

int aplicar_limite21618(int valor) {
    if (valor > LIMITE_21618) return LIMITE_21618;
    return valor * FACTOR_21618;
}
