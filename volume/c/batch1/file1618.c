// fichero 1618 -- macros y constantes -- MODIFICADO
#define LIMITE_1618 1818
#define FACTOR_1618 5

int aplicar_limite1618(int valor) {
    if (valor > LIMITE_1618) return LIMITE_1618;
    return valor * FACTOR_1618;
}
