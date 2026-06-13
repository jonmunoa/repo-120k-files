// fichero 6618 -- macros y constantes
#define LIMITE_6618 6718
#define FACTOR_6618 4

int aplicar_limite6618(int valor) {
    if (valor > LIMITE_6618) return LIMITE_6618;
    return valor * FACTOR_6618;
}
