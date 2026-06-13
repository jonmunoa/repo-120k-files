// fichero 51618 -- macros y constantes
#define LIMITE_51618 51718
#define FACTOR_51618 4

int aplicar_limite51618(int valor) {
    if (valor > LIMITE_51618) return LIMITE_51618;
    return valor * FACTOR_51618;
}
