// fichero 41618 -- macros y constantes -- MODIFICADO
#define LIMITE_41618 41818
#define FACTOR_41618 5

int aplicar_limite41618(int valor) {
    if (valor > LIMITE_41618) return LIMITE_41618;
    return valor * FACTOR_41618;
}
