// fichero 15618 -- macros y constantes -- MODIFICADO
#define LIMITE_15618 15818
#define FACTOR_15618 5

int aplicar_limite15618(int valor) {
    if (valor > LIMITE_15618) return LIMITE_15618;
    return valor * FACTOR_15618;
}
