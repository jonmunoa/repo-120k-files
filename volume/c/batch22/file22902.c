// fichero 22902 -- macros y constantes
#define LIMITE_22902 23002
#define FACTOR_22902 3

int aplicar_limite22902(int valor) {
    if (valor > LIMITE_22902) return LIMITE_22902;
    return valor * FACTOR_22902;
}
