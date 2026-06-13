// fichero 42630 -- macros y constantes
#define LIMITE_42630 42730
#define FACTOR_42630 1

int aplicar_limite42630(int valor) {
    if (valor > LIMITE_42630) return LIMITE_42630;
    return valor * FACTOR_42630;
}
