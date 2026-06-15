// fichero 24618 -- macros y constantes -- MODIFICADO
#define LIMITE_24618 24818
#define FACTOR_24618 5

int aplicar_limite24618(int valor) {
    if (valor > LIMITE_24618) return LIMITE_24618;
    return valor * FACTOR_24618;
}
