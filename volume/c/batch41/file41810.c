// fichero 41810 -- macros y constantes -- MODIFICADO
#define LIMITE_41810 42010
#define FACTOR_41810 2

int aplicar_limite41810(int valor) {
    if (valor > LIMITE_41810) return LIMITE_41810;
    return valor * FACTOR_41810;
}
