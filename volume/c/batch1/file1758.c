// fichero 1758 -- macros y constantes -- MODIFICADO
#define LIMITE_1758 1958
#define FACTOR_1758 5

int aplicar_limite1758(int valor) {
    if (valor > LIMITE_1758) return LIMITE_1758;
    return valor * FACTOR_1758;
}
