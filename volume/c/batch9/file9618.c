// fichero 9618 -- macros y constantes -- MODIFICADO
#define LIMITE_9618 9818
#define FACTOR_9618 5

int aplicar_limite9618(int valor) {
    if (valor > LIMITE_9618) return LIMITE_9618;
    return valor * FACTOR_9618;
}
