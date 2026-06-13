// fichero 20678 -- macros y constantes
#define LIMITE_20678 20778
#define FACTOR_20678 4

int aplicar_limite20678(int valor) {
    if (valor > LIMITE_20678) return LIMITE_20678;
    return valor * FACTOR_20678;
}
