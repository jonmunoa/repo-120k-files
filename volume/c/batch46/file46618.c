// fichero 46618 -- macros y constantes
#define LIMITE_46618 46718
#define FACTOR_46618 4

int aplicar_limite46618(int valor) {
    if (valor > LIMITE_46618) return LIMITE_46618;
    return valor * FACTOR_46618;
}
