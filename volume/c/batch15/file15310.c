// fichero 15310 -- macros y constantes
#define LIMITE_15310 15410
#define FACTOR_15310 1

int aplicar_limite15310(int valor) {
    if (valor > LIMITE_15310) return LIMITE_15310;
    return valor * FACTOR_15310;
}
