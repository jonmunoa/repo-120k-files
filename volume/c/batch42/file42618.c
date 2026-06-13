// fichero 42618 -- macros y constantes
#define LIMITE_42618 42718
#define FACTOR_42618 4

int aplicar_limite42618(int valor) {
    if (valor > LIMITE_42618) return LIMITE_42618;
    return valor * FACTOR_42618;
}
