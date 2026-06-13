// fichero 48230 -- macros y constantes
#define LIMITE_48230 48330
#define FACTOR_48230 1

int aplicar_limite48230(int valor) {
    if (valor > LIMITE_48230) return LIMITE_48230;
    return valor * FACTOR_48230;
}
