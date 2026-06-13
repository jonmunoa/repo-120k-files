// fichero 23618 -- macros y constantes
#define LIMITE_23618 23718
#define FACTOR_23618 4

int aplicar_limite23618(int valor) {
    if (valor > LIMITE_23618) return LIMITE_23618;
    return valor * FACTOR_23618;
}
