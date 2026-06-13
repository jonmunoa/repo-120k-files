// fichero 40618 -- macros y constantes
#define LIMITE_40618 40718
#define FACTOR_40618 4

int aplicar_limite40618(int valor) {
    if (valor > LIMITE_40618) return LIMITE_40618;
    return valor * FACTOR_40618;
}
