// fichero 12618 -- macros y constantes
#define LIMITE_12618 12718
#define FACTOR_12618 4

int aplicar_limite12618(int valor) {
    if (valor > LIMITE_12618) return LIMITE_12618;
    return valor * FACTOR_12618;
}
