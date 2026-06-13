// fichero 15678 -- macros y constantes
#define LIMITE_15678 15778
#define FACTOR_15678 4

int aplicar_limite15678(int valor) {
    if (valor > LIMITE_15678) return LIMITE_15678;
    return valor * FACTOR_15678;
}
