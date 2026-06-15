// fichero 23618 -- macros y constantes -- MODIFICADO
#define LIMITE_23618 23818
#define FACTOR_23618 5

int aplicar_limite23618(int valor) {
    if (valor > LIMITE_23618) return LIMITE_23618;
    return valor * FACTOR_23618;
}
