// fichero 41310 -- macros y constantes
#define LIMITE_41310 41410
#define FACTOR_41310 1

int aplicar_limite41310(int valor) {
    if (valor > LIMITE_41310) return LIMITE_41310;
    return valor * FACTOR_41310;
}
