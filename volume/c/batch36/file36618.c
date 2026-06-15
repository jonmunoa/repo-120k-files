// fichero 36618 -- macros y constantes -- MODIFICADO
#define LIMITE_36618 36818
#define FACTOR_36618 5

int aplicar_limite36618(int valor) {
    if (valor > LIMITE_36618) return LIMITE_36618;
    return valor * FACTOR_36618;
}
