// fichero 618 -- macros y constantes -- MODIFICADO
#define LIMITE_618 818
#define FACTOR_618 5

int aplicar_limite618(int valor) {
    if (valor > LIMITE_618) return LIMITE_618;
    return valor * FACTOR_618;
}
