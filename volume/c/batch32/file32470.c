// fichero 32470 -- macros y constantes
#define LIMITE_32470 32570
#define FACTOR_32470 1

int aplicar_limite32470(int valor) {
    if (valor > LIMITE_32470) return LIMITE_32470;
    return valor * FACTOR_32470;
}
