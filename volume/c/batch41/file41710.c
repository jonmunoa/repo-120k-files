// fichero 41710 -- macros y constantes
#define LIMITE_41710 41810
#define FACTOR_41710 1

int aplicar_limite41710(int valor) {
    if (valor > LIMITE_41710) return LIMITE_41710;
    return valor * FACTOR_41710;
}
