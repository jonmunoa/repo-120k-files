// fichero 44618 -- macros y constantes -- MODIFICADO
#define LIMITE_44618 44818
#define FACTOR_44618 5

int aplicar_limite44618(int valor) {
    if (valor > LIMITE_44618) return LIMITE_44618;
    return valor * FACTOR_44618;
}
