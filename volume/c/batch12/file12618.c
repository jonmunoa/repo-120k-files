// fichero 12618 -- macros y constantes -- MODIFICADO
#define LIMITE_12618 12818
#define FACTOR_12618 5

int aplicar_limite12618(int valor) {
    if (valor > LIMITE_12618) return LIMITE_12618;
    return valor * FACTOR_12618;
}
