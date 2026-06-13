// fichero 15618 -- macros y constantes
#define LIMITE_15618 15718
#define FACTOR_15618 4

int aplicar_limite15618(int valor) {
    if (valor > LIMITE_15618) return LIMITE_15618;
    return valor * FACTOR_15618;
}
