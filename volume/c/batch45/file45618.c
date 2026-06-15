// fichero 45618 -- macros y constantes -- MODIFICADO
#define LIMITE_45618 45818
#define FACTOR_45618 5

int aplicar_limite45618(int valor) {
    if (valor > LIMITE_45618) return LIMITE_45618;
    return valor * FACTOR_45618;
}
