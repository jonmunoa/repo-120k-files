// fichero 49618 -- macros y constantes -- MODIFICADO
#define LIMITE_49618 49818
#define FACTOR_49618 5

int aplicar_limite49618(int valor) {
    if (valor > LIMITE_49618) return LIMITE_49618;
    return valor * FACTOR_49618;
}
