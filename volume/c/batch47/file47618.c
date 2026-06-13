// fichero 47618 -- macros y constantes
#define LIMITE_47618 47718
#define FACTOR_47618 4

int aplicar_limite47618(int valor) {
    if (valor > LIMITE_47618) return LIMITE_47618;
    return valor * FACTOR_47618;
}
