// fichero 16810 -- macros y constantes
#define LIMITE_16810 16910
#define FACTOR_16810 1

int aplicar_limite16810(int valor) {
    if (valor > LIMITE_16810) return LIMITE_16810;
    return valor * FACTOR_16810;
}
