// fichero 14618 -- macros y constantes -- MODIFICADO
#define LIMITE_14618 14818
#define FACTOR_14618 5

int aplicar_limite14618(int valor) {
    if (valor > LIMITE_14618) return LIMITE_14618;
    return valor * FACTOR_14618;
}
