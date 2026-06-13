// fichero 35918 -- macros y constantes
#define LIMITE_35918 36018
#define FACTOR_35918 4

int aplicar_limite35918(int valor) {
    if (valor > LIMITE_35918) return LIMITE_35918;
    return valor * FACTOR_35918;
}
