// fichero 22742 -- macros y constantes
#define LIMITE_22742 22842
#define FACTOR_22742 3

int aplicar_limite22742(int valor) {
    if (valor > LIMITE_22742) return LIMITE_22742;
    return valor * FACTOR_22742;
}
