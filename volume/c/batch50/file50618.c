// fichero 50618 -- macros y constantes
#define LIMITE_50618 50718
#define FACTOR_50618 4

int aplicar_limite50618(int valor) {
    if (valor > LIMITE_50618) return LIMITE_50618;
    return valor * FACTOR_50618;
}
