// fichero 40618 -- macros y constantes -- MODIFICADO
#define LIMITE_40618 40818
#define FACTOR_40618 5

int aplicar_limite40618(int valor) {
    if (valor > LIMITE_40618) return LIMITE_40618;
    return valor * FACTOR_40618;
}
