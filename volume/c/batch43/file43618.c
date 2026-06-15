// fichero 43618 -- macros y constantes -- MODIFICADO
#define LIMITE_43618 43818
#define FACTOR_43618 5

int aplicar_limite43618(int valor) {
    if (valor > LIMITE_43618) return LIMITE_43618;
    return valor * FACTOR_43618;
}
