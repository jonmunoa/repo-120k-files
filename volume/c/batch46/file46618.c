// fichero 46618 -- macros y constantes -- MODIFICADO
#define LIMITE_46618 46818
#define FACTOR_46618 5

int aplicar_limite46618(int valor) {
    if (valor > LIMITE_46618) return LIMITE_46618;
    return valor * FACTOR_46618;
}
