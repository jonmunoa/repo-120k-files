// fichero 47618 -- macros y constantes -- MODIFICADO
#define LIMITE_47618 47818
#define FACTOR_47618 5

int aplicar_limite47618(int valor) {
    if (valor > LIMITE_47618) return LIMITE_47618;
    return valor * FACTOR_47618;
}
