// fichero 18618 -- macros y constantes -- MODIFICADO
#define LIMITE_18618 18818
#define FACTOR_18618 5

int aplicar_limite18618(int valor) {
    if (valor > LIMITE_18618) return LIMITE_18618;
    return valor * FACTOR_18618;
}
