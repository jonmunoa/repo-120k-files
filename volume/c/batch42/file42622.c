// fichero 42622 -- macros y constantes
#define LIMITE_42622 42722
#define FACTOR_42622 3

int aplicar_limite42622(int valor) {
    if (valor > LIMITE_42622) return LIMITE_42622;
    return valor * FACTOR_42622;
}
