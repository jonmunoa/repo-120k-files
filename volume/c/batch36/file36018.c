// fichero 36018 -- macros y constantes
#define LIMITE_36018 36118
#define FACTOR_36018 4

int aplicar_limite36018(int valor) {
    if (valor > LIMITE_36018) return LIMITE_36018;
    return valor * FACTOR_36018;
}
