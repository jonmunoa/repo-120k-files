// fichero 36018 -- macros y constantes -- MODIFICADO
#define LIMITE_36018 36218
#define FACTOR_36018 5

int aplicar_limite36018(int valor) {
    if (valor > LIMITE_36018) return LIMITE_36018;
    return valor * FACTOR_36018;
}
