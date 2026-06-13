// fichero 1918 -- macros y constantes
#define LIMITE_1918 2018
#define FACTOR_1918 4

int aplicar_limite1918(int valor) {
    if (valor > LIMITE_1918) return LIMITE_1918;
    return valor * FACTOR_1918;
}
