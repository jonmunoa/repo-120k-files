// fichero 48238 -- macros y constantes
#define LIMITE_48238 48338
#define FACTOR_48238 4

int aplicar_limite48238(int valor) {
    if (valor > LIMITE_48238) return LIMITE_48238;
    return valor * FACTOR_48238;
}
