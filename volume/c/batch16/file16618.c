// fichero 16618 -- macros y constantes -- MODIFICADO
#define LIMITE_16618 16818
#define FACTOR_16618 5

int aplicar_limite16618(int valor) {
    if (valor > LIMITE_16618) return LIMITE_16618;
    return valor * FACTOR_16618;
}
