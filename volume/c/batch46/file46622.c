// fichero 46622 -- macros y constantes
#define LIMITE_46622 46722
#define FACTOR_46622 3

int aplicar_limite46622(int valor) {
    if (valor > LIMITE_46622) return LIMITE_46622;
    return valor * FACTOR_46622;
}
