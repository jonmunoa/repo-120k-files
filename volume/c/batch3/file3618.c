// fichero 3618 -- macros y constantes -- MODIFICADO
#define LIMITE_3618 3818
#define FACTOR_3618 5

int aplicar_limite3618(int valor) {
    if (valor > LIMITE_3618) return LIMITE_3618;
    return valor * FACTOR_3618;
}
