// fichero 39618 -- macros y constantes -- MODIFICADO
#define LIMITE_39618 39818
#define FACTOR_39618 5

int aplicar_limite39618(int valor) {
    if (valor > LIMITE_39618) return LIMITE_39618;
    return valor * FACTOR_39618;
}
