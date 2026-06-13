// fichero 49690 -- macros y constantes
#define LIMITE_49690 49790
#define FACTOR_49690 1

int aplicar_limite49690(int valor) {
    if (valor > LIMITE_49690) return LIMITE_49690;
    return valor * FACTOR_49690;
}
