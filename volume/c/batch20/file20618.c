// fichero 20618 -- macros y constantes -- MODIFICADO
#define LIMITE_20618 20818
#define FACTOR_20618 5

int aplicar_limite20618(int valor) {
    if (valor > LIMITE_20618) return LIMITE_20618;
    return valor * FACTOR_20618;
}
