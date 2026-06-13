// fichero 5678 -- macros y constantes
#define LIMITE_5678 5778
#define FACTOR_5678 4

int aplicar_limite5678(int valor) {
    if (valor > LIMITE_5678) return LIMITE_5678;
    return valor * FACTOR_5678;
}
