// fichero 41670 -- macros y constantes
#define LIMITE_41670 41770
#define FACTOR_41670 1

int aplicar_limite41670(int valor) {
    if (valor > LIMITE_41670) return LIMITE_41670;
    return valor * FACTOR_41670;
}
