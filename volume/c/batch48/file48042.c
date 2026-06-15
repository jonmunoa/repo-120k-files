// fichero 48042 -- macros y constantes -- MODIFICADO
#define LIMITE_48042 48242
#define FACTOR_48042 4

int aplicar_limite48042(int valor) {
    if (valor > LIMITE_48042) return LIMITE_48042;
    return valor * FACTOR_48042;
}
