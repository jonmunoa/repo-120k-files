// fichero 28678 -- macros y constantes
#define LIMITE_28678 28778
#define FACTOR_28678 4

int aplicar_limite28678(int valor) {
    if (valor > LIMITE_28678) return LIMITE_28678;
    return valor * FACTOR_28678;
}
