// fichero 28618 -- macros y constantes
#define LIMITE_28618 28718
#define FACTOR_28618 4

int aplicar_limite28618(int valor) {
    if (valor > LIMITE_28618) return LIMITE_28618;
    return valor * FACTOR_28618;
}
