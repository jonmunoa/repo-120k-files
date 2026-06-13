// fichero 48618 -- macros y constantes
#define LIMITE_48618 48718
#define FACTOR_48618 4

int aplicar_limite48618(int valor) {
    if (valor > LIMITE_48618) return LIMITE_48618;
    return valor * FACTOR_48618;
}
