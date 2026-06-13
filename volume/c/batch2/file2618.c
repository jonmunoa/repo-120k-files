// fichero 2618 -- macros y constantes
#define LIMITE_2618 2718
#define FACTOR_2618 4

int aplicar_limite2618(int valor) {
    if (valor > LIMITE_2618) return LIMITE_2618;
    return valor * FACTOR_2618;
}
