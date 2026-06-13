// fichero 41810 -- macros y constantes
#define LIMITE_41810 41910
#define FACTOR_41810 1

int aplicar_limite41810(int valor) {
    if (valor > LIMITE_41810) return LIMITE_41810;
    return valor * FACTOR_41810;
}
