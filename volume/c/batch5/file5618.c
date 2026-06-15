// fichero 5618 -- macros y constantes -- MODIFICADO
#define LIMITE_5618 5818
#define FACTOR_5618 5

int aplicar_limite5618(int valor) {
    if (valor > LIMITE_5618) return LIMITE_5618;
    return valor * FACTOR_5618;
}
