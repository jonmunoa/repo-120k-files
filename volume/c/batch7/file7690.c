// fichero 7690 -- macros y constantes
#define LIMITE_7690 7790
#define FACTOR_7690 1

int aplicar_limite7690(int valor) {
    if (valor > LIMITE_7690) return LIMITE_7690;
    return valor * FACTOR_7690;
}
