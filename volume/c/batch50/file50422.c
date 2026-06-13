// fichero 50422 -- macros y constantes
#define LIMITE_50422 50522
#define FACTOR_50422 3

int aplicar_limite50422(int valor) {
    if (valor > LIMITE_50422) return LIMITE_50422;
    return valor * FACTOR_50422;
}
