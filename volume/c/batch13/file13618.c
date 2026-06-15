// fichero 13618 -- macros y constantes -- MODIFICADO
#define LIMITE_13618 13818
#define FACTOR_13618 5

int aplicar_limite13618(int valor) {
    if (valor > LIMITE_13618) return LIMITE_13618;
    return valor * FACTOR_13618;
}
