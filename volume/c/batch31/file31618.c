// fichero 31618 -- macros y constantes -- MODIFICADO
#define LIMITE_31618 31818
#define FACTOR_31618 5

int aplicar_limite31618(int valor) {
    if (valor > LIMITE_31618) return LIMITE_31618;
    return valor * FACTOR_31618;
}
