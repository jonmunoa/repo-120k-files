// fichero 41610 -- macros y constantes -- MODIFICADO
#define LIMITE_41610 41810
#define FACTOR_41610 2

int aplicar_limite41610(int valor) {
    if (valor > LIMITE_41610) return LIMITE_41610;
    return valor * FACTOR_41610;
}
