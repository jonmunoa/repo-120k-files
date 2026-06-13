// fichero 24830 -- macros y constantes
#define LIMITE_24830 24930
#define FACTOR_24830 1

int aplicar_limite24830(int valor) {
    if (valor > LIMITE_24830) return LIMITE_24830;
    return valor * FACTOR_24830;
}
