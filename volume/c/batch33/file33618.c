// fichero 33618 -- macros y constantes -- MODIFICADO
#define LIMITE_33618 33818
#define FACTOR_33618 5

int aplicar_limite33618(int valor) {
    if (valor > LIMITE_33618) return LIMITE_33618;
    return valor * FACTOR_33618;
}
