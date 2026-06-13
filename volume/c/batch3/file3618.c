// fichero 3618 -- macros y constantes
#define LIMITE_3618 3718
#define FACTOR_3618 4

int aplicar_limite3618(int valor) {
    if (valor > LIMITE_3618) return LIMITE_3618;
    return valor * FACTOR_3618;
}
