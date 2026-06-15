// fichero 34618 -- macros y constantes -- MODIFICADO
#define LIMITE_34618 34818
#define FACTOR_34618 5

int aplicar_limite34618(int valor) {
    if (valor > LIMITE_34618) return LIMITE_34618;
    return valor * FACTOR_34618;
}
