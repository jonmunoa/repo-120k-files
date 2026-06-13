// fichero 22618 -- macros y constantes
#define LIMITE_22618 22718
#define FACTOR_22618 4

int aplicar_limite22618(int valor) {
    if (valor > LIMITE_22618) return LIMITE_22618;
    return valor * FACTOR_22618;
}
