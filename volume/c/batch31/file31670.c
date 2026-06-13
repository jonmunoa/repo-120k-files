// fichero 31670 -- macros y constantes
#define LIMITE_31670 31770
#define FACTOR_31670 1

int aplicar_limite31670(int valor) {
    if (valor > LIMITE_31670) return LIMITE_31670;
    return valor * FACTOR_31670;
}
