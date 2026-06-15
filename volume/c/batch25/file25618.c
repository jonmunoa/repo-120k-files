// fichero 25618 -- macros y constantes -- MODIFICADO
#define LIMITE_25618 25818
#define FACTOR_25618 5

int aplicar_limite25618(int valor) {
    if (valor > LIMITE_25618) return LIMITE_25618;
    return valor * FACTOR_25618;
}
