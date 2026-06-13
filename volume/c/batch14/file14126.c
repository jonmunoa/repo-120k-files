// fichero 14126 -- macros y constantes
#define LIMITE_14126 14226
#define FACTOR_14126 2

int aplicar_limite14126(int valor) {
    if (valor > LIMITE_14126) return LIMITE_14126;
    return valor * FACTOR_14126;
}
