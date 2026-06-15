// fichero 2618 -- macros y constantes -- MODIFICADO
#define LIMITE_2618 2818
#define FACTOR_2618 5

int aplicar_limite2618(int valor) {
    if (valor > LIMITE_2618) return LIMITE_2618;
    return valor * FACTOR_2618;
}
