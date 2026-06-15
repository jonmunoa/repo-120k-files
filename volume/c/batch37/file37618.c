// fichero 37618 -- macros y constantes -- MODIFICADO
#define LIMITE_37618 37818
#define FACTOR_37618 5

int aplicar_limite37618(int valor) {
    if (valor > LIMITE_37618) return LIMITE_37618;
    return valor * FACTOR_37618;
}
