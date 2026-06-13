// fichero 34618 -- macros y constantes
#define LIMITE_34618 34718
#define FACTOR_34618 4

int aplicar_limite34618(int valor) {
    if (valor > LIMITE_34618) return LIMITE_34618;
    return valor * FACTOR_34618;
}
