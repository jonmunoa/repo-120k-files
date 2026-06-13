// fichero 18618 -- macros y constantes
#define LIMITE_18618 18718
#define FACTOR_18618 4

int aplicar_limite18618(int valor) {
    if (valor > LIMITE_18618) return LIMITE_18618;
    return valor * FACTOR_18618;
}
