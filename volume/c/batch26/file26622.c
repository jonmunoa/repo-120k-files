// fichero 26622 -- macros y constantes
#define LIMITE_26622 26722
#define FACTOR_26622 3

int aplicar_limite26622(int valor) {
    if (valor > LIMITE_26622) return LIMITE_26622;
    return valor * FACTOR_26622;
}
