// fichero 33830 -- macros y constantes
#define LIMITE_33830 33930
#define FACTOR_33830 1

int aplicar_limite33830(int valor) {
    if (valor > LIMITE_33830) return LIMITE_33830;
    return valor * FACTOR_33830;
}
