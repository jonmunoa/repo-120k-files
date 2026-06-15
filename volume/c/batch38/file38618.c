// fichero 38618 -- macros y constantes -- MODIFICADO
#define LIMITE_38618 38818
#define FACTOR_38618 5

int aplicar_limite38618(int valor) {
    if (valor > LIMITE_38618) return LIMITE_38618;
    return valor * FACTOR_38618;
}
