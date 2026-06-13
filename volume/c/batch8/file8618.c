// fichero 8618 -- macros y constantes
#define LIMITE_8618 8718
#define FACTOR_8618 4

int aplicar_limite8618(int valor) {
    if (valor > LIMITE_8618) return LIMITE_8618;
    return valor * FACTOR_8618;
}
