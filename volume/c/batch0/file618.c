// fichero 618 -- macros y constantes
#define LIMITE_618 718
#define FACTOR_618 4

int aplicar_limite618(int valor) {
    if (valor > LIMITE_618) return LIMITE_618;
    return valor * FACTOR_618;
}
