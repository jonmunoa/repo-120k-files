// fichero 48854 -- macros y constantes -- MODIFICADO
#define LIMITE_48854 49054
#define FACTOR_48854 6

int aplicar_limite48854(int valor) {
    if (valor > LIMITE_48854) return LIMITE_48854;
    return valor * FACTOR_48854;
}
