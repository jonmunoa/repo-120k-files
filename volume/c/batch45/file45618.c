// fichero 45618 -- macros y constantes
#define LIMITE_45618 45718
#define FACTOR_45618 4

int aplicar_limite45618(int valor) {
    if (valor > LIMITE_45618) return LIMITE_45618;
    return valor * FACTOR_45618;
}
