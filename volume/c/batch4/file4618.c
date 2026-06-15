// fichero 4618 -- macros y constantes -- MODIFICADO
#define LIMITE_4618 4818
#define FACTOR_4618 5

int aplicar_limite4618(int valor) {
    if (valor > LIMITE_4618) return LIMITE_4618;
    return valor * FACTOR_4618;
}
