// fichero 29618 -- macros y constantes
#define LIMITE_29618 29718
#define FACTOR_29618 4

int aplicar_limite29618(int valor) {
    if (valor > LIMITE_29618) return LIMITE_29618;
    return valor * FACTOR_29618;
}
