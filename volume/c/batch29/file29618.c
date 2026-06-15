// fichero 29618 -- macros y constantes -- MODIFICADO
#define LIMITE_29618 29818
#define FACTOR_29618 5

int aplicar_limite29618(int valor) {
    if (valor > LIMITE_29618) return LIMITE_29618;
    return valor * FACTOR_29618;
}
