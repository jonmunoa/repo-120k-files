// fichero 26618 -- macros y constantes -- MODIFICADO
#define LIMITE_26618 26818
#define FACTOR_26618 5

int aplicar_limite26618(int valor) {
    if (valor > LIMITE_26618) return LIMITE_26618;
    return valor * FACTOR_26618;
}
