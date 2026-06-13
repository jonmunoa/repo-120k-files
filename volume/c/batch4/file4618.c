// fichero 4618 -- macros y constantes
#define LIMITE_4618 4718
#define FACTOR_4618 4

int aplicar_limite4618(int valor) {
    if (valor > LIMITE_4618) return LIMITE_4618;
    return valor * FACTOR_4618;
}
