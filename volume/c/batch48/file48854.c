// fichero 48854 -- macros y constantes
#define LIMITE_48854 48954
#define FACTOR_48854 5

int aplicar_limite48854(int valor) {
    if (valor > LIMITE_48854) return LIMITE_48854;
    return valor * FACTOR_48854;
}
