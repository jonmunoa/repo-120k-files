// fichero 21618 -- macros y constantes -- MODIFICADO
#define LIMITE_21618 21818
#define FACTOR_21618 5

int aplicar_limite21618(int valor) {
    if (valor > LIMITE_21618) return LIMITE_21618;
    return valor * FACTOR_21618;
}
