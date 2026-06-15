// fichero 48618 -- macros y constantes -- MODIFICADO
#define LIMITE_48618 48818
#define FACTOR_48618 5

int aplicar_limite48618(int valor) {
    if (valor > LIMITE_48618) return LIMITE_48618;
    return valor * FACTOR_48618;
}
