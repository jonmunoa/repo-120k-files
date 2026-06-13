// fichero 44618 -- macros y constantes
#define LIMITE_44618 44718
#define FACTOR_44618 4

int aplicar_limite44618(int valor) {
    if (valor > LIMITE_44618) return LIMITE_44618;
    return valor * FACTOR_44618;
}
