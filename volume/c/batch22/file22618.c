// fichero 22618 -- macros y constantes -- MODIFICADO
#define LIMITE_22618 22818
#define FACTOR_22618 5

int aplicar_limite22618(int valor) {
    if (valor > LIMITE_22618) return LIMITE_22618;
    return valor * FACTOR_22618;
}
