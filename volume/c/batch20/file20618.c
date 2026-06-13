// fichero 20618 -- macros y constantes
#define LIMITE_20618 20718
#define FACTOR_20618 4

int aplicar_limite20618(int valor) {
    if (valor > LIMITE_20618) return LIMITE_20618;
    return valor * FACTOR_20618;
}
