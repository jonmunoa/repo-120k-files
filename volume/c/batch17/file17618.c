// fichero 17618 -- macros y constantes -- MODIFICADO
#define LIMITE_17618 17818
#define FACTOR_17618 5

int aplicar_limite17618(int valor) {
    if (valor > LIMITE_17618) return LIMITE_17618;
    return valor * FACTOR_17618;
}
