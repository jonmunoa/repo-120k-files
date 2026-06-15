// fichero 30618 -- macros y constantes -- MODIFICADO
#define LIMITE_30618 30818
#define FACTOR_30618 5

int aplicar_limite30618(int valor) {
    if (valor > LIMITE_30618) return LIMITE_30618;
    return valor * FACTOR_30618;
}
