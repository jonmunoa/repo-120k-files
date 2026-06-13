// fichero 22830 -- macros y constantes
#define LIMITE_22830 22930
#define FACTOR_22830 1

int aplicar_limite22830(int valor) {
    if (valor > LIMITE_22830) return LIMITE_22830;
    return valor * FACTOR_22830;
}
