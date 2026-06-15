// fichero 1918 -- macros y constantes -- MODIFICADO
#define LIMITE_1918 2118
#define FACTOR_1918 5

int aplicar_limite1918(int valor) {
    if (valor > LIMITE_1918) return LIMITE_1918;
    return valor * FACTOR_1918;
}
