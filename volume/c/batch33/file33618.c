// fichero 33618 -- macros y constantes
#define LIMITE_33618 33718
#define FACTOR_33618 4

int aplicar_limite33618(int valor) {
    if (valor > LIMITE_33618) return LIMITE_33618;
    return valor * FACTOR_33618;
}
