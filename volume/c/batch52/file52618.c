// fichero 52618 -- macros y constantes
#define LIMITE_52618 52718
#define FACTOR_52618 4

int aplicar_limite52618(int valor) {
    if (valor > LIMITE_52618) return LIMITE_52618;
    return valor * FACTOR_52618;
}
