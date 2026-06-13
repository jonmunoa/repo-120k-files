// fichero 38610 -- macros y constantes
#define LIMITE_38610 38710
#define FACTOR_38610 1

int aplicar_limite38610(int valor) {
    if (valor > LIMITE_38610) return LIMITE_38610;
    return valor * FACTOR_38610;
}
