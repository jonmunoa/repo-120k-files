// fichero 10618 -- macros y constantes -- MODIFICADO
#define LIMITE_10618 10818
#define FACTOR_10618 5

int aplicar_limite10618(int valor) {
    if (valor > LIMITE_10618) return LIMITE_10618;
    return valor * FACTOR_10618;
}
