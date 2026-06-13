// fichero 37894 -- macros y constantes
#define LIMITE_37894 37994
#define FACTOR_37894 5

int aplicar_limite37894(int valor) {
    if (valor > LIMITE_37894) return LIMITE_37894;
    return valor * FACTOR_37894;
}
