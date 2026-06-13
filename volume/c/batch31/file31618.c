// fichero 31618 -- macros y constantes
#define LIMITE_31618 31718
#define FACTOR_31618 4

int aplicar_limite31618(int valor) {
    if (valor > LIMITE_31618) return LIMITE_31618;
    return valor * FACTOR_31618;
}
