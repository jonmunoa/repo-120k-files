// fichero 42618 -- macros y constantes -- MODIFICADO
#define LIMITE_42618 42818
#define FACTOR_42618 5

int aplicar_limite42618(int valor) {
    if (valor > LIMITE_42618) return LIMITE_42618;
    return valor * FACTOR_42618;
}
