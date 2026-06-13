// fichero 26618 -- macros y constantes
#define LIMITE_26618 26718
#define FACTOR_26618 4

int aplicar_limite26618(int valor) {
    if (valor > LIMITE_26618) return LIMITE_26618;
    return valor * FACTOR_26618;
}
