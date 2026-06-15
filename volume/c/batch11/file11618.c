// fichero 11618 -- macros y constantes -- MODIFICADO
#define LIMITE_11618 11818
#define FACTOR_11618 5

int aplicar_limite11618(int valor) {
    if (valor > LIMITE_11618) return LIMITE_11618;
    return valor * FACTOR_11618;
}
