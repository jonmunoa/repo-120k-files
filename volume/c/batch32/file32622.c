// fichero 32622 -- macros y constantes
#define LIMITE_32622 32722
#define FACTOR_32622 3

int aplicar_limite32622(int valor) {
    if (valor > LIMITE_32622) return LIMITE_32622;
    return valor * FACTOR_32622;
}
