// fichero 53618 -- macros y constantes
#define LIMITE_53618 53718
#define FACTOR_53618 4

int aplicar_limite53618(int valor) {
    if (valor > LIMITE_53618) return LIMITE_53618;
    return valor * FACTOR_53618;
}
