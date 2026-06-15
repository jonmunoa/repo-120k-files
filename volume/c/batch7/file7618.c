// fichero 7618 -- macros y constantes -- MODIFICADO
#define LIMITE_7618 7818
#define FACTOR_7618 5

int aplicar_limite7618(int valor) {
    if (valor > LIMITE_7618) return LIMITE_7618;
    return valor * FACTOR_7618;
}
