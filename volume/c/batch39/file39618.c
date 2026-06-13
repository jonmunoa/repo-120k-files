// fichero 39618 -- macros y constantes
#define LIMITE_39618 39718
#define FACTOR_39618 4

int aplicar_limite39618(int valor) {
    if (valor > LIMITE_39618) return LIMITE_39618;
    return valor * FACTOR_39618;
}
