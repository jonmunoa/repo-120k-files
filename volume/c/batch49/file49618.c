// fichero 49618 -- macros y constantes
#define LIMITE_49618 49718
#define FACTOR_49618 4

int aplicar_limite49618(int valor) {
    if (valor > LIMITE_49618) return LIMITE_49618;
    return valor * FACTOR_49618;
}
