// fichero 48178 -- macros y constantes
#define LIMITE_48178 48278
#define FACTOR_48178 4

int aplicar_limite48178(int valor) {
    if (valor > LIMITE_48178) return LIMITE_48178;
    return valor * FACTOR_48178;
}
