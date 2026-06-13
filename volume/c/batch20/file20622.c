// fichero 20622 -- macros y constantes
#define LIMITE_20622 20722
#define FACTOR_20622 3

int aplicar_limite20622(int valor) {
    if (valor > LIMITE_20622) return LIMITE_20622;
    return valor * FACTOR_20622;
}
