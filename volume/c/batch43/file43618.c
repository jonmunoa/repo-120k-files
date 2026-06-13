// fichero 43618 -- macros y constantes
#define LIMITE_43618 43718
#define FACTOR_43618 4

int aplicar_limite43618(int valor) {
    if (valor > LIMITE_43618) return LIMITE_43618;
    return valor * FACTOR_43618;
}
