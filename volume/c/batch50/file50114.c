// fichero 50114 -- macros y constantes
#define LIMITE_50114 50214
#define FACTOR_50114 5

int aplicar_limite50114(int valor) {
    if (valor > LIMITE_50114) return LIMITE_50114;
    return valor * FACTOR_50114;
}
