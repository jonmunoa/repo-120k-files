// fichero 8690 -- macros y constantes
#define LIMITE_8690 8790
#define FACTOR_8690 1

int aplicar_limite8690(int valor) {
    if (valor > LIMITE_8690) return LIMITE_8690;
    return valor * FACTOR_8690;
}
