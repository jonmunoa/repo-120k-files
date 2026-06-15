// fichero 40146 -- macros y constantes -- MODIFICADO
#define LIMITE_40146 40346
#define FACTOR_40146 3

int aplicar_limite40146(int valor) {
    if (valor > LIMITE_40146) return LIMITE_40146;
    return valor * FACTOR_40146;
}
