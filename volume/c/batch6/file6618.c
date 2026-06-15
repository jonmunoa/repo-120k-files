// fichero 6618 -- macros y constantes -- MODIFICADO
#define LIMITE_6618 6818
#define FACTOR_6618 5

int aplicar_limite6618(int valor) {
    if (valor > LIMITE_6618) return LIMITE_6618;
    return valor * FACTOR_6618;
}
