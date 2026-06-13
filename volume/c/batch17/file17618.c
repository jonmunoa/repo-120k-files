// fichero 17618 -- macros y constantes
#define LIMITE_17618 17718
#define FACTOR_17618 4

int aplicar_limite17618(int valor) {
    if (valor > LIMITE_17618) return LIMITE_17618;
    return valor * FACTOR_17618;
}
